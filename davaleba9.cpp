//1
#include <iostream>
using namespace std;

class coord{
private:
    int x, y;
    
public:    
    coord();
    coord(int, int);
    void plus(coord);
    void set_x(int);
    void set_y(int);
    int get_x();
    int get_y();
    bool operator>= (coord);
    bool operator> (coord);
    bool operator< (coord);
    bool operator<= (coord);
};

coord::coord(){
    this->x = this->y = 0;
}

coord::coord(int x, int y){
    this->x = x;
    this->y = y;
}

void coord::plus(coord obj){
    this->x += obj.x;
    this->y += obj.y;    
}
void coord::set_x(int x){ this->x = x; }
void coord::set_y(int y){ this->y = y;}
int coord::get_x(){ return x;}
int coord::get_y(){ return y;}

bool coord::operator> (coord obj) {
	return this->x > obj.x && this->y > obj.y;
}
bool coord::operator>= (coord obj) {
	return this->x > obj.x || this->y > obj.y || 
	       this->x == obj.x || this->y == obj.y;
}
bool coord::operator< (coord obj) {
	return this->x < obj.x && this->y < obj.y;
}
bool coord::operator<= (coord obj) {
	return this->x < obj.x || this->y < obj.y || 
	       this->x == obj.x || this->y == obj.y;
}

int main()
{
    coord obj1(3,4), obj2(10,11);
    
    obj1.plus(obj2);
    
    cout << obj1.get_x() << " " <<  obj1.get_y() << "\n"; 
    
}

//2
#include <iostream>
using namespace std;

class coord{
private:
    int x, y, z;
    
public:    
    coord();
    coord(int, int);
    void plus(coord);
    void set_x(int);
    void set_y(int);
    int get_x();
    int get_y();
    bool operator>= (coord);
    bool operator> (coord);
    bool operator< (coord);
    bool operator<= (coord);
    bool operator== (coord);
    coord operator+ (coord);
    coord operator- (coord);
    coord operator/ (coord);
    coord operator ++();
    coord operator --();
};

coord::coord(){
    this->x = this->y = 0;
}

coord::coord(int x, int y){
    this->x = x;
    this->y = y;
}

void coord::plus(coord obj){
    this->x += obj.x;
    this->y += obj.y;    
}
void coord::set_x(int x){ this->x = x; }
void coord::set_y(int y){ this->y = y;}
int coord::get_x(){ return x;}
int coord::get_y(){ return y;}

bool coord::operator> (coord obj) {
	return this->x > obj.x && this->y > obj.y;
}
bool coord::operator>= (coord obj) {
	return this->x > obj.x || this->y > obj.y || 
	       this->x == obj.x || this->y == obj.y;
}
bool coord::operator< (coord obj) {
	return this->x < obj.x && this->y < obj.y;
}
bool coord::operator<= (coord obj) {
	return this->x < obj.x || this->y < obj.y || 
	       this->x == obj.x || this->y == obj.y;
}
bool coord::operator== (coord obj) {
	return this->x == obj.x && this->y == obj.y;
}
coord coord::operator ++() {
	this->x++;
	this->y++;
	return *this;
}
coord coord::operator --() {
	this->x--;
	this->y--;
	return *this;
}
coord coord::operator+ (coord obj) {
	coord temp;
	temp.x= this->x + obj.x;
	temp.y= this->y + obj.y;
	return temp;
}
coord coord::operator- (coord obj) {
	coord temp;
	temp.x= this->x - obj.x;
	temp.y= this->y - obj.y;
	return temp;
}
coord coord::operator/ (coord obj) {
	coord temp;
	temp.x= this->x / obj.x;
	temp.y= this->y / obj.y;
	return temp;
}
int main()
{
    coord obj1(3,4), obj2(10,11);
    
    obj1.plus(obj2);
    
    cout << obj1.get_x() << " " <<  obj1.get_y() << "\n"; 
    
}


//3
#include <iostream>
using namespace std;

class Complex{
private:
    double a; 
    double b; 
public:
    Complex();
    Complex(double);
    Complex(double, double);
    void print();  
	Complex operator +(Complex);
    Complex operator -(Complex);
    Complex operator /(Complex);
    Complex operator *(Complex);  
    bool operator ==(Complex);
};

Complex::Complex(){
    this->a = 0;
    this->b = 0;    
}

Complex::Complex(double a){
    this->a = a;
    this->b = 0;    
}

Complex::Complex(double a, double b){
    this->a = a;
    this->b = b;    
}

void Complex::print(){
    if(a&&b) cout << a << (b>0?"+":"") << b << "i\n";
    else if(!b) cout << a << "\n";
    else if(!a) cout << b << "i\n";
    else cout << 0;
}

Complex Complex::operator +(Complex obj) {
	Complex temp;
	temp.x= this->a + obj.a;
	temp.y= this->b + obj.b;
	return temp;
}
Complex Complex::operator -(Complex obj) {
	Complex temp;
	temp.x = this->a - obj.a;
	temp.y = this->b - obj.b;
	return temp;
}
Complex Complex::operator *(Complex obj) {
	Complex temp;
	temp.x = this->a * obj.a;
	temp.y = this->b * obj.b;
	return temp;
}
Complex Complex::operator /(Complex obj) {
	Complex temp;
	temp.x = this->a / obj.a;
	temp.y = this->b / obj.b;
	return temp;
}
bool Complex::operator ==(Complex obj) {
	return this->a == obj.a && this->b == obj.b;
}

int main()
{
    Complex r1, r2(3), r3(0,4), r4(-1, 2);
    
    r1.print();
    r2.print();
    r3.print();
    r4.print();
    
    
}

