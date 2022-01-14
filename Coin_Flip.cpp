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
              while(t--)
              {
                   int g;
                   cin>>g;
                   while(g--)
                   {
                        int a,n,c;
                        cin>>a>>n>>c;
                        if(n%2==0 || a==c)
                        {
                            cout<<(n>>1);
                        }
                        else
                        {
                                cout<<n-(n>>1);
                        }
                        cout<<'\n';
                   }
                   cout<<'\n';
              }
              return 0;
}