#include <iostream>
using namespace std;

class Rectangle {
	protected:
		int a, b;
	public:
		Rectangle();
		Rectangle(int,int);
		int P();
		int S();
};

class Square : public Rectangle {
	public:
		Square();
		Square(int);
		int P();
		int S();
};

Rectangle::Rectangle() {
	this->a = 0;
	this->b = 0;
}

Rectangle::Rectangle(int a, int b) {
	this->a = a;
	this->b = b;
}

int Rectangle::S() {
	return a * b;
}

int Rectangle::P() {
	return (a + b) * 2;
}

Square::Square() : Rectangle() {}
Square::Square(int a) : Rectangle(a,a) {}

int Square::S() {
	return a * b;
}

int Square::P() {
	return a * b;
}

int main() {
	Rectangle r(4,8);
	Square s(4);
	
	cout << s.S() << " " << s.P() << endl;
	cout << r.S() << " " << r.P() << endl;
}
