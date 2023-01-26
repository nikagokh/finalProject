#include <iostream>
#include <algorithm>

using namespace std;

string a[100000];
int i,n,one = 1,mx;
string zebra;

int main()
{
    cin>>n;
    for(i=0; i<n; i++)
        cin>>a[i];

    sort(a,a+n);

    for(i=0; i<n; i++)
        if(a[i].compare(a[i+1])==0)
            one++;
        else
        {
            if(one>=mx)
            {
                mx=one;
                zebra=a[i];
            }

            one=1;
        }

    cout<<zebra<<" "<<mx<<endl;

    
}
