#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    int n;
	cin >> n;
	vector<int> vec;
	cout << n;
	
	while ( n != 1 ) {
		if ( n % 2 == 0 ) {  
		               
			n = n/2;
			vec.push_back(n);
		
		} else {
			n = 3*n + 1;
			vec.push_back(n);
			
		}

		
		cout << " " << n;
	}


	cout << endl << vec.size() + 1 << endl;
	cout << *max_element(vec.begin(), vec.end());

}
