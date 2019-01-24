#include <iostream>
using namespace std;

class Fish{
public:
	Fish(){
		cout<< "constructed fish" << endl;
	}
	~Fish(){
		cout << "Destroyed fish" << endl;
	}
};

class Tuna : public Fish {
public:
	Tuna(){
		cout<<"constructed Tuna" <<endl;
	}
	~Tuna(){
		cout<<"destroyed tuna" <<endl;
	}
};

void deleteFish(Fish* fish){
	delete fish;
}

int main(){
	Tuna* pTuna = new Tuna;
	deleteFish(pTuna);

	Tuna t;
	return 0;
}
