#include <iostream>
#include <cstring>

using namespace std;

class MyString{
public:
		 char* buf;
	public:
		MyString(const char* input){
			cout << "constructor"<<endl;
			if(input != NULL){
				buf = new char[strlen(input) + 1];
				strcpy(buf,input);

				cout <<(unsigned int*)buf<<endl;
			}else{
				buf = NULL;
			}
		}

		MyString(const MyString& copy){
			cout<< "copy  constructor : " <<endl;
			if(copy.buf != NULL){
				buf = new char[strlen(copy.buf) + 1];
				strcpy(buf,copy.buf);

				cout<< (unsigned int*)buf <<endl;
			}else{
				buf = NULL;
			}
		}

		~MyString(){
			cout << "destruct : " <<endl;
			if(buf != NULL){
				delete[] buf;
			}
		}
};

void strrr(MyString inp){
	cout<<"buf"<< inp.buf << endl;
	return;
}

int main(){
	MyString sayFuc("fucking chensi");
	strrr(sayFuc);
	return 0;
}
