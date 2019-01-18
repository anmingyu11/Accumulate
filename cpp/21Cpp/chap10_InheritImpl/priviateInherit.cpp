#include <iostream>
#include <cstring>

using namespace std;

class Motor{
	private char* s = "caonimade";
	public:
		void ignite(){
			cout<<"ignite"<<endl;
		}
		void fuel(){
			cout<<"pumped fuel"<<endl;
		}
		void fire(){
			cout<<"fire"<<endl;
		}
};

class Car:protected Motor{
	public:
		void Move(){
			ignite();
			fuel();
			fire();
		}
};

int main(){
	Car car;
	car.Move();
	car.ignite();
	return 0;
}
