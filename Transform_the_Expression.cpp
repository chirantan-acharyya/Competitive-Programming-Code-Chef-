#include<bits/stdc++.h>       //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
/* Sample Input:

Sample Output:
*/
int preced(char x)
{
    switch (x)
    {
          case  '^': return 5;
          case  '/': return 4;
          case  '*': return 4;
          case  '+': return 3;
          case  '-': return 3;
    }
    return 0;
}
void postfix(string exp)
{
    stack<char>st;
    int n=exp.length();
    for(int i=0;i<n;i++)
    {
        if(exp[i]=='(')
        {
            st.push(exp[i]);
        }
        else if(exp[i]>=97 && exp[i]<=122)
        {
            cout<<exp[i];
        }
        else if(exp[i]==')')
        {
            while(st.top()!='(')
            {
                cout<<st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            if(st.top()=='(' || preced(st.top())<=preced(exp[i]))
            {
                   st.push(exp[i]);
            }
            else if(st.empty() || preced(st.top())>preced(exp[i]))
            {
                while(st.top()!='(' || preced(st.top())>preced(exp[i]))
                {
                    cout<<st.top();
                    st.pop();
                }
            }
        }
    }
}
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
                   postfix(s);
                   cout<<'\n';
              }


              return 0;
}