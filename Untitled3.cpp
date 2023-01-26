#include <iostream>
using namespace std;

class Martkutxedi {
	protected:
		int a, b;
	public:
		Martkutxedi();
		Martkutxedi(int,int);
		int getP();
		int getS();
};

class Square : public Martkutxedi {
	public:
		Square();
		Square(int);
		int getP();
		int getS();
};

Martkutxedi::Martkutxedi() {
	this->a = a;
	this->b = b;
}
Martkutxedi::Martkutxedi(int a, int b) {
	this->a = a;
	this->b = b;
}
int Martkutxedi::getP() {
	return (a+b)*2;
}
int Martkutxedi::getS() {
	return a*b;
}
Square::Square() : Martkutxedi() {}
Square::Square(int a) : Martkutxedi(a,a) {}
int Square::getS() {
	return a*a;
}
int Square::getP() {
	return 4*a;
}
int main() {
	Martkutxedi mart(4,9);
	Square sq(3);
	cout << mart.getP() << endl;
	cout << sq.getS() << endl;
	 
}


