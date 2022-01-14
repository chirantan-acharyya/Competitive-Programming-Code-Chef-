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
                   string s;
                   cin>>s;
                   int sum=0;
                   for(int i=0;i<s.length();i++)
                   {
                        if(s[i]>='0' && s[i]<='9')
                             sum+=s[i]-'0';
                   }
                    cout<<sum;
                   cout<<'\n';
              }


              return 0;
}