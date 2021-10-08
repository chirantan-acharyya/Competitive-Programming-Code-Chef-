/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW005/

*/
#include<bits/stdc++.h>     //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
#define unsigned long long int ll
/* Sample Input:

Sample Output:
*/

int main()
{
              ios_base::sync_with_stdio(false);
              cin.tie(NULL);

              //freopen("Input.txt","r",stdin);
              //freopen("Output.txt","w",stdout);

              int t; cin>>t;
              int a[6]={100,50,10,5,2,1};
              while(t--)
              {
                  int count =0;
                  int n;
                  cin>>n;
                  for(int i=0;i<6;i++)
                  {
                      if(n>=a[i])
                      {
                          count=count+(n/a[i]);
                          n=n%a[i];
                      }
                  }
                  cout<<count<<"\n";
              }
              return 0;
}