/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/CMED06/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c;
	    cin>>a>>b>>c;
	    int diff=b-a;
	    cout<<(diff*c)+b<<"\n";
	}
	return 0;
}
