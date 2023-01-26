#include <iostream>
#include <cmath>

using namespace std;


class Samkutxedi {
public:
    void samkutkhedi(double a, double b, double c);
    double get_a();
    double get_b();
    double get_c();
    Samkutxedi();

private:
    double a, b, c;
};

void Samkutxedi::samkutkhedi(double a, double b, double c) {
    this -> a = a;
    this -> b = b;
    this -> c = c;
}
double Samkutxedi::get_a() 
{ 
return a; 
}

double Samkutxedi::get_b() 
{ 
return b; 
}

double Samkutxedi::get_c() 
{ 
return c; 
}

Samkutxedi::Samkutxedi() {
    this-> a = 1;
    this-> b = 1;
    this-> c = 1;
}

int main() {

    Samkutxedi sam;
    int a, b, c;
    cin >> a >> b >> c;
    sam.samkutkhedi(a,b,c);

    if(sam.get_a() == sam.get_b() && sam.get_a() == sam.get_c()) {
        cout << "Samkutxedi tolgverdaa";
    } else if (sam.get_a() == sam.get_b() || sam.get_a() == sam.get_c() || sam.get_b() == sam.get_a()) {
        cout << "Samkutxedi tolferdaa";
    } else if (pow(sam.get_a(), 2) + pow(sam.get_b(), 2) == pow(sam.get_c(), 2)
     || pow(sam.get_b(), 2) + pow(sam.get_c(), 2) == pow(sam.get_a(), 2)
     || pow(sam.get_a(), 2) + pow(sam.get_c(), 2) == pow(sam.get_b(), 2)) {
        cout << "Samkutxedi martkutxaa";   
    } else {
        cout << "Samkutxedi chveulebrivia";
    }
    
    return 0;
}
