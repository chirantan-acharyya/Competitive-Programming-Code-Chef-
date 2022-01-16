#include<bits/stdc++.h>       //Time Complexity: O(...)
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
              cin.ignore();
              while(t--)
              {
                   long long int k;
                   cin>>k;
                   long long int x=(k>>1)+1;
                   if(k&1==1)
                      cout<<k-x<<' '<<x;
                   else
                      cout<<x<<' '<<k-x;
                   cout<<'\n';
              }


              return 0;
}