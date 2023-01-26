#include <iostream>
using namespace std;

//1
template <class T> T Dadebiti(T arr[], int size) {
    for(int i = 0; i < size; i++) {
        if(arr[i] > 0) {
        	cout << arr[i];
		}
    }
    return 0;
}

//2
template <class T> T Uaryofiti(T arr[], int size) {
	T s = 0;
	for(int i = 0; i < size; i++) {
		if(arr[i] < 0) {
			s++;
		}
	}
	return s;
}

//3
template <class T> T Luwi(T arr[], int size) {
	T s = 0;
	for(int i = 1; i < size; i++) {
		if(i % 2 == 0) {
			s += arr[i];
		}
	}
	return s;
}

//4 
template <class T> T Max(T arr[3][4], int r, int c) {
	T s = 0;
	for(int i = 0; i < r; i++) {
		for(int j = 0; j < c; j++) {
			if(arr[i][j] > s) {
				s = arr[i][j];
			}
		}
	}
	return s;
}

//5
template<class T>
class Samkutxedi{
private:
    T x;
    T y;
    T z;
public:
    Samkutxedi(T x, T y, T z) { this->x=x; this->y=y; this->z = z;}
    void set_x(T x) { this->x=x; }
    void set_y(T y) { this->y=y; }
    void set_z(T z) { this->z=z; }
    T get_x() { return x; }
    T get_y() { return y; }
    T get_z() { return z; }
    void type() {
    	if(x == y && x == z) {
        cout << "Samkutxedi tolgverdaa";
    } else if (x == y || x == z || y == x) {
        cout << "Samkutxedi tolferdaa";
    } else if (pow(x, 2) + pow(y, 2) == pow(z, 2)
     || pow(y, 2) + pow(z, 2) == pow(x, 2)
     || pow(x, 2) + pow(z, 2) == pow(y, 2)) {
        cout << "Samkutxedi Martkutxaa";   
    } else {
        cout << "Samkutxedi chveulebrivia";
    }
	}
};


//6
template<class T>
class Samkutxedii{
private:
    T x;
    T y;
    T z;
public:
    Samkutxedii(T x, T y, T z);
    void set_x(T x);
    void set_y(T y);
    void set_z(T z);
    T get_x();
    T get_y();
    T get_z();
    void type();
};

template <typename T>
Samkutxedii<T>::Samkutxedii(T x, T y, T z) {
	this->x = x;
	this->y = y;
	this->z = z;
}

template <typename T>
void Samkutxedii<T>::set_x(T x) {
	this->x = x;
}

template <typename T>
void Samkutxedii<T>::set_y(T y) {
	this->y = y;
}

template <typename T>
void Samkutxedii<T>::set_z(T z) {
	this->z = z;
}

template <typename T>
T Samkutxedii<T>::get_x() {
	return x;
}

template <typename T>
T Samkutxedii<T>::get_y() {
	return y;
}

template <typename T>
T Samkutxedii<T>::get_z() {
	return z;
}

template <typename T>
void Samkutxedii<T>::type() {
    	if(x == y && x == z) {
        cout << "Samkutxedi tolgverdaa";
    } else if (x == y || x == z || y == x) {
        cout << "Samkutxedi tolferdaa";
    } else if (pow(x, 2) + pow(y, 2) == pow(z, 2)
     || pow(y, 2) + pow(z, 2) == pow(x, 2)
     || pow(x, 2) + pow(z, 2) == pow(y, 2)) {
        cout << "Samkutxedi Martkutxaa";   
    } else {
        cout << "Samkutxedi chveulebrivia";
    }
}


int main() {

    int n, nrows, ncols;
    
    int array[] = {3, -8, 11, -9, 0, -4, -2, 11, -3};   
    n = sizeof(array) / sizeof(array[0]);
    int s1 = Dadebiti(array, n);
    int s2 = Uaryofiti(array, n);
    cout << s2 << endl;
    int s3 = Luwi(array, n);
    cout << s3 << endl;
    int arr[3][4] =  {0, -1 ,2 ,31 ,3 , 9 , 6 , 23 , 8 , 8 , 17 , 42};
    nrows = sizeof(arr) / sizeof(arr[0]);
    ncols = sizeof(arr[0]) / sizeof(arr[0][0]);
    int s4 = Max(arr, nrows, ncols);
    cout << s4 << endl;
    
    Samkutxedii<int> ob1(3, 4, 5);
    cout << "x: " << ob1.get_x() << endl;
    cout << "y: " << ob1.get_y() << endl;
    cout << "z: " << ob1.get_z() << endl;
    ob1.set_x(5);
    ob1.set_y(9);
    ob1.set_z(11);
    ob1.type();
    
    
    
    
}
