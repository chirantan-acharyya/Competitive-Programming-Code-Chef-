/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/WATSCORE/

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
	    int a[9];// 0 1 2 3 4 5 6 7 8
	    for(int i=0;i<9;i++)
	    {
	        a[i]=0;
	    }
	    int sum=0;
	    for(int i=0;i<n;i++)
	    {
	        int pos,value;
	        cin>>pos>>value;
	        if(pos<9 &&pos>0 && a[pos]<value)
	        {
	            a[pos]=value;
	            //cout<<pos<<"  "<<a[pos]<<"\n";
	        }
	    }
	    for(int i=0;i<9;i++)
	    {
	        sum+=a[i];
	    }
	    cout<<sum<<"\n";
	}
	return 0;
}
