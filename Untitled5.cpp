#include <bits/stdc++.h>
using namespace std;

int main() {
	int k, n, nums;
	cin >> k;
	for(int i = 0; i < k; i++) {
		cin >> n;
		int mass[n];
		for(int j = 0; j < n; j++) {
			cin >> mass[j];
			
		}
		sort(mass, mass + n);
		cout << "Class" << i+1 << endl;
		cout << mass[0] << " ";
		cout << mass[n - 1] << " ";
		cout << mass[n - 1] - mass[0] << endl;
		
	}
}
