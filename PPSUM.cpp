/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/PPSUM/

*/
#include <iostream>
using namespace std;

int sum(int n)
{
    if(n==1)
    {
        return 1;
    }
    else
    {
        return n+sum(n-1);
    }
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b;
	    cin>>a>>b;
	    for(int i=0;i<a;i++)
	    {
	        b=sum(b);
	    }
	    cout<<b<<"\n";
	}
	return 0;
}
