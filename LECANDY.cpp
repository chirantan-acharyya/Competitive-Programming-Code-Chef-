/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/LECANDY/

*/
#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    long long int c,sum=0;
	    cin>>n;
	    cin>>c;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    if(sum>c)
	    {
	        cout<<"No\n";
	    }
	    else
	    {
	        cout<<"Yes\n";
	    }
	}
	return 0;
}
