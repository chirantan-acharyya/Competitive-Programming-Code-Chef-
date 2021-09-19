/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/ATM2/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n,sum;
	    cin>>n>>sum;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]<=sum)
	        {
	            cout<<1;
	            sum=sum-a[i];
	        }
	        else
	        {
	            cout<<0;
	        }
	    }
	    cout<<"\n";
	}
	return 0;
}
