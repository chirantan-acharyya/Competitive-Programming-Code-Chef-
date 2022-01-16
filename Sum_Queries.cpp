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

              long long int n;
              cin>>n;
              long long int t;
              cin>>t;
              while(t--)
              {
                   int k;
                   cin>>k;
                   if (k>=n+2 && k<=(n<<1)+1)
                   {
                       cout<<k-(n+1);
                   }
                   else if(k>((n<<1)+1) && k<=n*3)
                   {
                       cout<<(n*3)+1-k;
                   }
                   else
                   {
                       cout<<0;
                   }
                   cout<<'\n';
              }


              return 0;
}