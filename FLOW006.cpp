/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW006/
*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,sum,t;
	cin>>t;
	while(t)
	{
	    sum=0;
	cin>>n;
	while(n)
	{
	    sum=sum+n%10;
	    n/=10;
	}
	cout<<sum<<"\n";
	t--;
	}
	return 0;
}
