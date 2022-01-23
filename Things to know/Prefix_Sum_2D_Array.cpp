/*
Given 2d array a of N*N integers. Given Q
queries and in each query given a, b, c and d
print sum of square represented by (a,b) as
top left point and (c,d) as top bottom right
point
Constraints
1 <= N <= 10^3
1 <= a[i] [j] <= 10^9
1 <= Q <= 10^5
1 <= a,b,c,d <= N
*/
#include<bits/stdc++.h>       //Time Complexity: O(N)
using namespace std;         //Space Complexity: O(1)
/* Sample Input:
                    3
                    3 6 2
                    8 9 2
                    3 4 1
                    2
                    1 1 2 2
                    1 2 3 3
Sample Output:
                    26
                    24
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
              long long int arr[n+1][n+1];
              for(int i=1;i<=n;i++)
              {
                  for(int j=1;j<=n;j++)
                  {
                       cin>>arr[i][j];
                       arr[i][j] +=  arr[i-1][j]  +  arr[i][j-1]  -  arr[i-1][j-1];
                  }
              }
              int t;
              cin>>t;
              while(t--)
              {
                   int a,b,c,d;
                   cin>>a>>b>>c>>d;
                   cout<<arr[c][d]   -  arr[a-1][d]  -  arr[c][b-1] + arr[a-1][b-1];
                   cout<<'\n';
              }

              return 0;
}
