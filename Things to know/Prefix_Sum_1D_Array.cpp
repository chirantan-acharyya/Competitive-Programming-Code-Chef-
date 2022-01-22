/*   Given array a of N integers. Given Q queries
     and in each query given L and R print sum of
     array elemnts from indexL to R(L, R included)
     Constraints
     1 <= N <= 10^5
     1 <= a[i] <= 10^9
     1 <= Q <= 10^5
     1 <= L, R <= N
*/

#include<bits/stdc++.h>       //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
/* Sample Input:
                       6
                       3 6 2 8 9 2
                       4
                       2 3
                       4 6
                       1 5
                       3 6

Sample Output:
                       8
                       19
                       28
                       21
*/
int main()
{
              ios_base::sync_with_stdio(false);
              cin.tie(NULL);
              srand(time(NULL));

              //freopen("Input.txt","r",stdin);
              //freopen("Output.txt","w",stdout);

              int n;
              cin>>n;
              long long int a[n+1];
              for(int i=1;i<=n;i++)
              {
                   cin>>a[i];
                   a[i]+=a[i-1];
              }
              int q;
              cin>>q;
              while(q--)
              {
                  int l,r;
                  cin>>l>>r;
                  cout<<a[r]-a[l-1]<<"\n";
              }

              return 0;
}