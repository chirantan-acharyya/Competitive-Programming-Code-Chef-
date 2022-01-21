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



              cout<<[](int x,int y){return x+y;}(3,2)<<'\n';//  To add to Numbers

              auto product=[](int x,int y){return x*y;};// Product of two Numbers
              cout<<product(5,6)<<'\n';

              /*
                       Swap Two Numbers
              */
              int x=10,y=20;
              cout<<"Before Swapping x= "<<x<<"  y= "<<y<<'\n';
              [](int *x,int *y){int temp=*x; *x=*y; *y=temp; return;}(&x,&y);
              cout<<"After Swapping x= "<<x<<"  y= "<<y<<'\n';



              vector<int> v{1,2,3,4,5};
              // all_of function checks for all values in the vector and returns result in boolean
              cout<<all_of(v.begin(),v.end(),[](int x){return x>0;})<<'\n';


              // all_of function checks for all values in the vector and returns result in boolean
              cout<<any_of(v.begin(),v.end(),[](int x){return x>0;})<<'\n';


              // all_of function checks for all values in the vector and returns result in boolean
              cout<<none_of(v.begin(),v.end(),[](int x){return x>0;})<<'\n';
              return 0;
}