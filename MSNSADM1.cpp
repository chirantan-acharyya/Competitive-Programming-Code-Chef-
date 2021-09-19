
/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/MSNSADM1/

*/
#include <iostream>
using namespace std;

int main() {
	int test;
	cin>>test;
	while(test--)
	{
	    int n;
	    cin>>n;
	    int a[n],b[n];
	    long long int max=0;
	    for(int i= 0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>b[i];
	    }
	    for(int i=0;i<n;i++)
	    {
	        long long int sum=(20*a[i])-(10*b[i]);
	        //cout<<20*a[i]<<" "<<10*b[i]<<"\n";
	        if(sum>max)
	        {
	            max=sum;
	        }
	    }
	    if(max<=0)
	    {
	        cout<<0<<"\n";
	    }
	    else
	    {
	        cout<<max<<"\n";
	    }
	}
	return 0;
}
