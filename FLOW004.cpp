/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW004/
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t>0)
	{
	    int n;
	    cin>>n;
	    int x=n%10;
	    int y=0;
	    while(n>0)
	    {
	        y=n%10;
	        n=n/10;
	    }
	    cout<<(x+y)<<"\n";
	    t--;
	}
	return 0;
}
