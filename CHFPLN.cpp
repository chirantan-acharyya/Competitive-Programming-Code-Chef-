/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/CHFPLN/

*/
#include<bits/stdc++.h>     //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
/* Sample Input:

Sample Output:
*/

int main()
{
              ios_base::sync_with_stdio(false);
              cin.tie(NULL);
              srand(time(NULL));

              //freopen("Input.txt","r",stdin);
              //freopen("Output.txt","w",stdout);

              int t;
              cin>>t;
              while(t--)
              {
                  int n;
                  cin>>n;
                  int a[n];
                  for(int i=0;i<n;i++)
                  {
                      cin>>a[i];
                  }
                  sort(a,a+n);

                  int k=a[0],count=0,sum=0;

                  for(int i=0;i<n+1;i++)
                  {
                      if(a[i]==k)
                      {
                          count++;
                      }
                      else
                      {
                         // cout<<a[i-1]<<" "<<count<<"\n";

                          if(count>=a[i-1])
                          {
                              sum+=a[i-1]-1;
                          }
                          else
                          {
                              sum+=count;
                          }

                          count=1;
                          k=a[i];
                      }
                  }

                  cout<<sum<<"\n";
              }
              return 0;
}