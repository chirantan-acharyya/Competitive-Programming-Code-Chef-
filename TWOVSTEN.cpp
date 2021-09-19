/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/TWOVSTEN
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
	    if(n%10==0)
	      cout<<0<<"\n";
	    else if(n%10==5)
	       cout<<1<<"\n";
	    else
	       cout<<-1<<"\n";
	}
	return 0;
}
