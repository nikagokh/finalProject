#include <iostream>
#include <cmath>

using namespace std;


class Martkutxedi {
public: 
    Martkutxedi();
    void setter(int, int); 
    void setter(int);
    void print();

    int get_a() {
        return a;
    }
    int get_b() {
        return b;
    }
    int Perimetri() {
        return 2*(a+b);
    }
    int Fartobi() {
        return a*b;
    }
private:
    int a, b;
};

void Martkutxedi::setter(int a, int b) {
    this -> a = a;
    this -> b = b;
}

void Martkutxedi::setter(int a) {
    this -> a = a;
}

void Martkutxedi::print() {
    cout << a << endl << b << endl;
}


Martkutxedi::Martkutxedi() {
    this->a = 1;
    this->b = 1;
}

int main() {
    
    Martkutxedi mart;
    mart.setter(3, 5);
    mart.print();
    cout << "Perimetri: " << mart.Perimetri() << endl << "Fartobi:" << mart.Fartobi() << endl;

    mart.setter(6);
    mart.print();
    cout << "Perimetri: " << mart.Perimetri() << endl << "Fartobi:" << mart.Fartobi() << endl;
    return 0;
}