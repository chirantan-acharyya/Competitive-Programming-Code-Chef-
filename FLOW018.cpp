/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/FLOW018/

*/
#include<bits/stdc++.h>     //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
#define unsigned long long int ll
/* Sample Input:

Sample Output:
*/
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    return n*fact(n-1);
}
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
                  int n;
                  cin>>n;
                  cout<<fact(n)<<"\n";
              }

              return 0;
}