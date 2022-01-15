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
                   long long int n;
                   cin>>n;
                   for(long long int i=0;i<n;i++)
                   {
                       long long int x;
                       cin>>x;
                   }
                       cout<<((n*(n-1))>>1);
                   cout<<'\n';
              }


              return 0;
}