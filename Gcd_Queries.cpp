/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/GCDQ
*/

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
                   int n,q;
                   cin>>n>>q;
                   int a[n+1],front[n+1],back[n+1];
                   for(int i=1;i<=n;i++)
                   {
                         cin>>a[i];
                         front[i]=__gcd(a[i],front[i-1]);
                   }
                   back[n]=a[n];
                   for(int i=n-1;i>=1;i--)
                   {
                         back[i]=__gcd(a[i],back[i+1]);
                   }
                   for(int i=0;i<q;i++)
                   {
                         int x,y;
                         cin>>x>>y;
                         cout<<__gcd(front[x-1],back[y+1])<<'\n';
                   }
                   cout<<'\n';
              }


              return 0;
}