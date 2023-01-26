// 1
#include <bits/stdc++.h>

using namespace std;

#define PI acos(-1)

class geometria {
public:
    virtual float area();
    virtual float P();
    
};

float geometria::area() { return 0; };
float geometria::P() { return 0; };


class wrewiri : public geometria {
private:
    float r;
public:
    wrewiri(float);
    void set(float);
    float area();
    float P();
};

class samkutxedi : public geometria {
private:
    float a, b, c;
public:
    samkutxedi(float, float, float);
    void set(float, float, float);
    float area();
    float P();
};

class martkutxedi : public geometria {
private:
    float a, b;
public:
    martkutxedi(float, float);
    void set(float, float);
    float area();
    float P();
};

wrewiri::wrewiri(float r) {
    this -> r = r;
}

samkutxedi::samkutxedi(float a, float b , float c) {
    this -> a = a;
    this -> b = b;
    this -> c = c;
}

martkutxedi::martkutxedi(float a, float b) {
    this -> a = a;
    this -> b = b;
}

float wrewiri::area() {
    return M_PI * r * r;
    // return PI * r * r;    
}

float wrewiri::P() {
    return 2 * M_PI * r;
}

void wrewiri::set(float r) {
	this->r = r;
}

float samkutxedi::area() {
    float p = P();
    if(p>0){
        p /= 2;
        return sqrt(p * (p-a)*(p-b)*(p-c));
    }
    return -1;
}
float samkutxedi::P() {
    if(a+b>c && b+c>a && c+a>b){
        return a+b+c;
    }
    return -1;
}

void samkutxedi::set(float a, float b, float c) {
	this->a = a;
	this->b = b;
	this->c = c;
}

float martkutxedi::area() {
    return a*b;
}
float martkutxedi::P() {
    return 2*(a+b);
}

float martkutxedi::set(float a, float b) {
	this->a = a;
	this->b = b;
}

int main() {
    geometria *ptr;

    wrewiri ob1(5);
    samkutxedi ob2(3, 4, 5);
    martkutxedi ob3(5, 6);

    ptr = &ob1;
    cout << "Wrewiri fartobi: " << ptr -> area() << "\t" << " Wrewiris sigrdze: " << ptr -> P() << "\n";

    ptr = &ob2;
    cout << "Samkutxedis fartobi: " << ptr -> area() << "\t" << " Samkutxedis sigrdze: " << ptr -> P() << "\n";

    ptr = &ob3;
    cout << "Martkutxedis fartobi: " << ptr -> area() << "\t" << " Martkutxedis sigrdze: " << ptr -> P() << "\n";
    


    return 0;
}


// 2

#include <bits/stdc++.h>

typdef unsigned long long ull 

using namespace std;

class university {
protected:
    string name = "";
    string address = "";
    string phone_number;
    ull ID;
public:
    university(string, string, string, ull);
    void print();
    void set(string, string, string, ull);

};

class faculty : public university {
private:
    string f_name;
    ull f_number;
public:
    faculty(string, string, string, ull, string, ull);
    void print();
    void f_set(string, int);
};

university::university(string name, 
                       string address, 
                       string phone_number, 
                       ull ID) {
    this -> name = name;
    this -> address = address;
    this -> phone_number = phone_number;
    this -> ID = ID;
}

void university::set(string name, 
                     string address, 
                     string phone_number, 
                     ull ID) {
    this -> name = name;
    this -> address = address;
    this -> phone_number = phone_number;
    this -> ID = ID;
}

faculty::faculty(string name, 
                  string address, 
                  string phone_number, 
                  ull ID,
                  string f_name, 
                  int f_number, 
                 string f_number) : university(name, address, phone_number, ID) {
    this -> f_name = f_name;
    this -> f_number = f_number;
}

void faculty::set() {
    this -> f_name = f_name;
    this -> f_number = f_number;
}

void university::print() {
    cout << "NAME: " << name << "\t" << " Address: " << address << "\t" << " Phone number: " << phone_number << "\t" << 
    " ID: " << ID << "\n";
}

void faculty::print() {
    cout << "Faculty name: " << f_name << "\t" << "Faculty number: " << f_number << endl;
}

int main() {
    university uni("EU", "Guramishvili st.", 551123123, 171);
    faculty fac("IT", 10);

    uni.print();
    cout << "-------------------" << endl;
    fac.print();

    return 0;
}
