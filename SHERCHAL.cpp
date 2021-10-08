/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/SHERCHAL/

*/
#include<bits/stdc++.h>     //Time Complexity: O(...)
using namespace std;       //Space Complexity: O(...)
int main()
{
               ios_base::sync_with_stdio(false);
               cin.tie(NULL);
               srand(time(NULL));

             // freopen("Input.txt","r",stdin);
             // freopen("Output.txt","w",stdout);

             int t;
             cin>>t;
             while(t--)
             {
                   int n;
                   cin>>n;
                   string s;
                   cin>>s;
                   map<char,int> mp;
                   for(int i=0;i<n;i++)
                   {
                                mp[s[i]]++;
                   }
                   int k;
                   string j="herlock";
                   k=mp['s'];
                   for(int i=0;i<j.length();i++)
                   {
                         k=min(k,mp[j[i]]);
                   }
                   cout<<k<<"\n";
             }

             return 0;
}