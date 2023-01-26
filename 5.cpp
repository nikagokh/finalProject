//1
#include <iostream>
using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a, b, c;
	cin >> a >> b >> c;
	if(a > b) swap(a,b);
	if(b > c) swap(b,c);
	
	cout << a << " " << b << " " << c;
}

//2


#include <iostream>

using namespace std;

class A {
	public:
		virtual void print() {
			cout << "A" << endl;
		}
};

class B : public A {
	public:
		void print() {
			cout << "B" << endl;
		}
};

class C : public A {
	public:
		void print() {
			cout << "C" << endl;
		}
};

int main() {
	A* a;
	B b;
	C c;
	a = &b;
	a->print();
	a = &c;
	a->print();
	return 0;
	
}

//3
#include <iostream>
using namespace std;

class geometria {
	protected:
		int R = 10;
	public:
		virtual void f() {
			cout << R << endl;
		}
};

class circle : public geometria {
	public:
		void f() {
			cout<< R*R << endl;
		}
};

class sphere : public geometria {
	public:
		void f() {
			cout << 4/3*3.14*R*R*R << endl;
		}
};

int main() {
	geometria* geo;
	circle ci;
	sphere sp;
	
	geo = &ci;
	geo->f();
	geo = &sp;
	geo->f();
	return 0;
	
}



