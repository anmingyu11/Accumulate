#include <iostream>
#include <cstring>
#include <sstream>
#include <memory>

using namespace std;

class Date{
	private :
		int Day;
		int Mon;
		int Year;
	public :
		Date(int day,int mon, int year)
		:Day(day),Mon(mon),Year(year) {
	};

	Date& operator ++ (){
		++Day;
		return *this;
	}

	Date& operator -- (){
		--Day;
		return *this;
	}

	Date operator ++ (int) {
		Date Copy (Day,Mon,Year);
		++Day;
		return Copy;
	}
	
	Date operator -- (int) {
		Date Copy(Day,Mon,Year);
		--Day;
		return Copy;
	}
	
	string DateInString;

	operator const char*(){
		ostringstream fd;
		fd << Day <<" / " << Mon << " / " << Year;
		DateInString = fd.str();
		return DateInString.c_str();
	}

	void displayDate(){
		cout << Day <<" / " << Mon << " / " << Year << endl;
	}
};

int main(){
	unique_ptr<int> pdi(new int);
	*pdi = 42;
	cout << "pAllint" << *pdi << endl;

	unique_ptr<Date> pHoliday(new Date(25,11,2011));

	pHoliday->displayDate();
	(*pHoliday)++;
	(*pHoliday)++;
	(*pHoliday)++;
	(*pHoliday)++;
	cout << "Holiday is on: " << *pHoliday <<endl;
	return 0;
}
