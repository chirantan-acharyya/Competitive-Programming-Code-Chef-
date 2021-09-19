/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/NAME2/

*/
#include<bits/stdc++.h>     //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
#define unsigned long long int ll
/* Sample Input:

Sample Output:
*/

int main()
{
              ios_base::sync_with_stdio(false);
              cin.tie(NULL);

              //freopen("Input.txt","r",stdin);
              //freopen("Output.txt","w",stdout);

              int t;
              cin>>t;
              while(t--)
              {
                  string s1,s2;
                  cin>>s1>>s2;
                  int k=-1;
                  int p=s1.length();
                  int q=s2.length();
                  int count=0;
                  int i=0,j=0;
                  while(i<p &&j<q)
                  {
                      if(s1[i]==s2[j])
                      {
                          i++;
                          j++;
                          count++;
                      }
                      else
                      {
                          j++;
                      }
                  }
                  if(count==p)
                  {
                      cout<<"YES\n";
                      k=1;
                  }
                  else {
                  count=0;
                  i=0,j=0;
                  while(i<p &&j<q)
                  {
                      if(s1[i]==s2[j])
                      {
                          i++;
                          j++;
                          count++;
                      }
                      else
                      {
                          i++;
                      }
                  }
                  if(count==q)
                  {
                      cout<<"YES"<<"\n";
                      k=1;
                  }}
                  if (k==-1)
                  {
                      cout<<"NO"<<"\n";
                  }

              }

              return 0;
}