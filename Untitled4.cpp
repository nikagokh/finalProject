#include <iostream>
using namespace std;

class point {
	protected:
		int x;
	public:
		point();
		point(int);
		void set_x(int);
		virtual int distance();
};

point::point() {
	this->x = 0;
}
point::point(int x) {
	this->x = x;
}
void point::set_x(int x) {
	this->x = x;
}
int point::distance() {
	if(this->x > 0) {
		return x;
	}
	else {
		return -x;
	}
}

class point2 : public point {
	private:
		int y;
	public:
		point2();
		point2(int,int);
		void set_y(int);
		int distance();
		
};


point2::point2() : point() {
	this->y = 0;

}
point2::point2(int x, int y) : point(x) {
	this->y = y;

}
void point2::set_y(int y) {
	this->y = y;
} 
int point2::distance() {
	if (x - y > 0) {
		return x;
	}
	else {
		return -x;
	}
}

int main() {
	point* A;
	point2 C, D(-3, 8);
	cout << A->distance() << " " << D.distance();
	A = &C;
	A->distance();
	
}
