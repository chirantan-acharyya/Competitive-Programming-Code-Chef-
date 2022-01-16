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
                   int n; cin>>n;
                   if(360%n==0) //equal
                   {
                       cout<<"y ";
                   }
                   else
                   {
                       cout<<"n ";
                   }
                   if(n<=360) // may not be equal
                        cout<<"y ";
                   else
                        cout<<"n ";
                   if(n*(n+1)>>1<=360)
                        cout<<"y ";
                   else
                        cout<<"n ";

                   cout<<"\n";
              }


              return 0;
}