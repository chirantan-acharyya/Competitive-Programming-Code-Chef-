/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/KTTABLE/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int a[n];
	    int b[n];
	    int x=0;
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    if(a[0]>=b[0]&& a[0]!=0)
	    {
	        count++;
	    }
	    for(int i=1;i<n;i++)
	    {
	        if(a[i]-a[i-1]>=b[i])
	             count++;
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
