/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/ZOZ/

*/
#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int n,k,sum=0,count=0;
	    cin>>n>>k;
	    int a[n];
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	        sum=sum+a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]+k>sum-a[i])
	        {
	            count++;
	        }
	    }
	    cout<<count<<"\n";
	}
	return 0;
}
