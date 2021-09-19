/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/AMR15A/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int odd=0,even=0;
	for(int i=1;i<=n;i++)
	{
	    int k;
	    cin>>k;
	    if(k%2==0)
	    {
	        even++;
	    }
	    else
	    {
	        odd++;
	    }
	}
	if(even>odd)
	{
	    cout<<"READY FOR BATTLE";
	}
	else
	{
	    cout<<"NOT READY";
	}
	return 0;
}
