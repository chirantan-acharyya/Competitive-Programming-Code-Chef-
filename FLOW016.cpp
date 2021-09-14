/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW016/
*/
#include <iostream>
using namespace std;
int HCF(int a,int b)
{
    if(b==0)
    {
        return a;
    }
    return HCF(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t)
	{
	    long a,b,maxi,n;
	    cin>>a>>b;
	    maxi=HCF(max(a,b),min(a,b));
	    cout<<maxi<<" "<<((a*b)/maxi)<<"\n";
	    t--;
	}
	return 0;
}
