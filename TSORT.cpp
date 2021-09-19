/*
     Problem Statement is given here:-
     https://www.codechef.com/problems/TSORT
*/
#include <iostream>
using namespace std;
void Merge(int arr[],int low,int mid,int high)
{
    int size1=mid-low+1;
    int size2=high-mid;
    int x[size1],y[size2];
    
    int i,j;

    for(i=0;i<size1;i++)
      x[i]=arr[low+i];
    for(i=0;i<size2;i++)
      y[i]=arr[mid+1+i]; 

    i=0,j=0;
    int k=low;
    while(i<size1 && j<size2) 
    {
           if(x[i]<y[j])
           {
                 arr[k]=x[i];
                 i++;
                 k++;
           }
           else
           {
                 arr[k]=y[j];
                 j++;
                 k++;
           }
    } 
    while(i<size1)
    {
          arr[k]=x[i];
          i++;
          k++;
    }
     while(j<size2)
    {
          arr[k]=y[j];
          j++;
          k++;
    }  
}
void Mergesort(int arr[],int low,int high)
{
    if(low<high)
    {
         int mid=(low+high)/2; 
         Mergesort(arr,low,mid);
         Mergesort(arr,mid+1,high);

         Merge(arr,low,mid,high);
    }       
}
int main() {
	// your code goes here
	int n,i;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++)
	  cin>>a[i];
	  
	Mergesort(a,0,n-1);
	for(i=0;i<n;i++)
	 cout<<a[i]<<"\n";
	  
	return 0;
}
