/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/CHFPARTY/

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
                  int count=0;
                  for(int i=0;i<n;i++)
                  {
                     if(a[i]==0)
                     {
                         count++;
                     }
                     else if(a[i]<=count)
                     {
                         count++;
                     }

                  }
                  cout<<count<<"\n";
              }

              return 0;
}