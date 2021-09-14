/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW007/
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

              int t;
              cin>>t;
              while(t--)
              {
                  int n;
                  cin>>n;
                  int s=0;
                  while(n%10==0)
                  {
                      n/=10;
                  }
                  while(n>0)
                  {
                      s=(s*10)+(n%10);
                      n/=10;
                  }
                cout<<s<<"\n";
              }
              return 0;
}