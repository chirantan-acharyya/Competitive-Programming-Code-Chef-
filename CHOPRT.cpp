/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/CHOPRT
*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int test;
	cin>>test;
	while(test--)
	{
	    int a,b;
	    cin>>a>>b;
	    if(a>b)
	     cout<<">\n";
	     else if(a<b)
	     cout<<"<\n"; 
	     else
	      cout<<"=\n";
	}
	return 0;
}
