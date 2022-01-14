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
                   int sum=0;
                       int x,y;
                   for(int i=0;i<3;i++)
                   {
                       cin>>x>>y;
                       sum=max(sum,x+y);
                   }
                         cout<<sum;
                   cout<<'\n';
              }


              return 0;
}