/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FCTRL/

*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int k=5;
              int sum=0;
              while(n>=k)
              {
                  sum=sum+n/k;
                  k*=5;
              }
              cout<<sum<<"\n";
	}
	return 0;
}
