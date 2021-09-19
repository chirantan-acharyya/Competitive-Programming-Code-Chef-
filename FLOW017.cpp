/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW017/

*/

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,max,min;
	    cin>>a>>b>>c;
	    
	    if(a>b && a>c)
	      max=a;
	    else if(b>a && b>c)
	      max=b;
	    else
	      max=c;
	      
	       if(a<b && a<c)
	      min=a;
	    else if(b<a && b<c)
	      min=b;
	    else
	      min=c;
	      
	      cout<<(a+b+c-max-min)<<"\n";
	}
	return 0;
}
