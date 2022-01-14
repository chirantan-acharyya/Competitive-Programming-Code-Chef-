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
                   int a,b;
                   cin>>a>>b;
                   if(a>=__INT8_MAX__ || b>=__INT8_MAX__ || a+b>__INT8_MAX__)
                   {
                       cout<<"Impossible";
                   }
                   else if(b%2==0)
                   {
                        cout<<"Even";
                   }
                   else
                   {
                       cout<<"Odd";
                   }

                   cout<<'\n';
              }


              return 0;
}