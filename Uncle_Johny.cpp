#include<bits/stdc++.h>       //Time Complexity: O(...)
using namespace std;         //Space Complexity: O(...)
/* Sample Input:

Sample Output:
*/
int compare(const void* ap, const void* bp)
{
     const int* a = (int*)ap;
     const int* b = (int*)bp;

     if (*a < *b)
         return -1;
     else if (*a > *b)
         return 1;
     else
     return 0;
}
int binary_search(int *a,int n,int key)
{
         int *x = (int*)bsearch(&key, a, n, sizeof(a[0]), compare);
         if(x)
            return x-a;
         return -1;
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
                   int n;
                   cin>>n;
                   int a[n];
                   for(int i=0;i<n;i++)
                   {
                       cin>>a[i];
                   }
                   int k;
                   cin>>k;
                   k--;
                   k=a[k];
                   sort(a,a+(sizeof(a)/sizeof(a[0])));
                   cout<<binary_search(a,n,k)+1;
                   cout<<'\n';
              }


              return 0;
}