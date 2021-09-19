/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/HOWMANY/

*/
#include <iostream>
using namespace std;

int main() {
    int n;
	cin>>n;
	if(n>-1 && n<10)
	{
	    cout<<1;
	}
	else if(n>9 && n<100)
	{
	    cout<<2;
	}
	else if(n>99 && n<1000)
	{
	    cout<<3;
	}
	else
	{
	    cout<<"More than 3 digits";
	}
	return 0;
}
