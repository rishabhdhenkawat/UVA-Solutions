#include<iostream>
using namespace std;

int check(int n,int b,int h,int w,int p,int l)
{
   int m=p*n;
    if(l<n)
    return (b+1);
    else
    if(m<=b)
    return m;
}


int findSmallestElement(int arr[], int n){
  
   int temp = arr[0];
   for(int i=0; i<n; i++) {
      if(temp>arr[i]) {
         temp=arr[i];
      }
   }
   return temp;
}

int main()
{
    int n,b,h,w,p,a;
    while(cin>>n>>b>>h>>w)
    {
       int q=(w*h);
    int *arr = new int[w] ;
    int *brr = new int[q] ;
    for(int i=0,j=0;i<h,j<q;i++,j++)
    {
        cin>>p;
        for(int j=0;j<w;j++)
        cin>>arr[j];
        for(int k=0;k<w;k++)
        {
            //cout<<check(n,b,h,w,p,arr[k])<<endl;
               
            int y=check(n,b,h,w,p,arr[k]);
            if(y!=0)
            brr[j]=y;
            
        }    
    }
    
    //for(int i=0;i<q;i++)
    //cout<<brr[i]<<" ";
    int f=findSmallestElement(brr,  q);
    if(f==(b+1))
    cout<<"stay home"<<endl;
    else
    cout<<f<<endl;

    }
    return 0;
}