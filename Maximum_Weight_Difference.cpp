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
                   int n,k;
                   cin>>n>>k;
                   long long int a[n];
                   for(int i=0;i<n;i++)
                   {
                       cin>>a[i];
                   }
                   sort(a,a+n,greater<int>());
                   k=max(k,n-k);
                   long long int sum1=0,sum2=0;
                   int count=0;
                   while(count<k)
                   {
                       sum1=sum1+a[count++];
                   }
                   while(count<n)
                   {
                       sum2=sum2+a[count++];
                   }
                   cout<<sum1-sum2<<'\n';
              }


              return 0;
}