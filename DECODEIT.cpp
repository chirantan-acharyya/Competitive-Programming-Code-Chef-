/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/DECODEIT/

*/
#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a[]={0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
	          int n;
	          cin>>n;
	          while(n--)
	          {
              int p;
              cin>>p;
			  string s;
			  cin>>s;
			  int low=0;
			  while(low<p)
			  {
				  int beg=0;
				  int end=15;
				  while(beg<=end)
				  {
					  int mid=(beg+end)/2;
					  if(beg==end)
					  {
						  cout<<(char)(97+beg);
						  break;
					  }
					  if(s[low]=='0')
					  {
						  end=mid;
					  }
					  if(s[low]=='1')
					  {
						  beg=mid+1;
					  }
					  low++;
				  }
			   }cout<<"\n";
	        } 
	return 0;
}
