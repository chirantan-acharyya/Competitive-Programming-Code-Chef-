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
                   int x,y,k,n,flag=0;
                   cin>>x>>y>>k>>n;
                   while(n--)
                   {
                       long int a,b;
                       cin>>a>>b;
                       if(flag==0 && a+y>=x && b<=k)
                       {
                           flag=1;
                       }
                   }
                   if(flag==1)
                   {
                       cout<<"LuckyChef";
                   }
                   else
                   {
                       cout<<"UnluckyChef";
                   }
                   cout<<'\n';
              }


              return 0;
}