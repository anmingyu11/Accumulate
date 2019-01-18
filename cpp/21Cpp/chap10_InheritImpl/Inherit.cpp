#include <iostream>
using namespace std;

class Fish{
	protected:
		bool fresh;
	public:
		Fish(bool f): fresh(f){
		}

		void swim(){
			if(fresh){
				cout<<"swim in lake"<<endl;
			}else{
				cout<<"swim in sea"<<endl;
			}
		}
};

class Tuna : public Fish{
	public:
		Tuna(): Fish(false){
		}
};

class Carp: public Fish{
	public:
		Carp(): Fish(true){
			fresh = true;
		}
};

int main(){
	return 0;
}
