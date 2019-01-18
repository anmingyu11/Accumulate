#include <iostream>
#include <string>

using namespace std;

class Human{
	private:
		string Name;
		int Age;
	friend class uti;
	friend void DisplayAge(const Human & Person);
	public :
		Human(string input,int age)
		: Name(input),Age(age){
			cout<<"constructing : " << Name << "Age : " <<Age<<endl;
		};
};

void DisplayAge(const Human& person){
	cout<< person.Age << endl;
}

class uti{
	public:
	static void DisplayAge(const Human& person){
		cout<< "i am fucking miss " << person.Name << endl;
	}
};

int main(){
	Human hm("chensi",26);
	DisplayAge(hm);
	uti::DisplayAge(hm);
	return 0;
}
