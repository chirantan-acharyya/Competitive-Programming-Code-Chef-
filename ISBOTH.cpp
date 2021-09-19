/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/ISBOTH/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	if(n%5!=0 && n%11!=0)
	{
	    cout<<"NONE";
	}
	else
	{
	    if(n%5==0 && n%11==0)
	    {
	        cout<<"BOTH";
	    }
	    else if(n%5==0 || n%11==0)
	    {
	        cout<<"ONE";
	    }
	    else
	    {

	    }
	}
	return 0;
}
