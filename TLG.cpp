/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/TLG/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,maxa=0,maxb=0,suma=0,sumb=0;
	cin>>n;
	int a[10000],b[10000];
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    cin>>b[i];
	    suma=suma+a[i];
	    sumb=sumb+b[i];
	    //cout<<suma<<" "<<sumb<<"\n";
	    if(suma>sumb && suma-sumb>maxa)
	    {
	        maxa=suma-sumb;
	    }
	    if(sumb>suma && sumb-suma>maxb)
	    {
	        maxb=sumb-suma;
	    }
	}
	if(maxa>maxb)
	{
	    cout<< 1 <<" "<<maxa;
	}
	else
	{
	    cout<< 2 <<" "<<maxb;
	}
	return 0;
}