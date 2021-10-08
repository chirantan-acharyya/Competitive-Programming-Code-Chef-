
/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/BC106/

*/

#include <iostream>
using namespace std;

int main() {
	long long int a[10];
	int n;
	long long int sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
	    cin>>a[i];
	    sum+=a[i];
	}
	cout<<sum;
	return 0;
}
