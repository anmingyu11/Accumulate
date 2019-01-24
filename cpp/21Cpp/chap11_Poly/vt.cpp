#include <iostream>

using namespace std;

class Fish{
	public:
		virtual void Swim(){
			cout << "Fish Swims!" << endl;
		}
};

class Tuna: public Fish{
	public:
		void Swim(){
			cout<< "Tuna swims!" << endl;
		}
};

class Carp: public Fish{
	public:
		void Swim(){
			cout << "CarpSwim" << endl;
		}
};

void swim(Fish& f){
	f.Swim();
}

int main(){
	Tuna t;
	Carp c;

	swim(t);
	swim(c);

	return 0;
}
