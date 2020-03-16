#include <iostream>

using namespace std;

char fun(int x ,int y)
{
    if(x>y)
    return '>';
    if(x<y)
    return '<';
    if(x==y)
    return '=';
}



int main()
{
    int n,a,b;
    cin>>n;
    char *arr = new char[n] ;
    for(int i=0;i<n;i++)
    {
        cin>>a>>b;    
        arr[i]=fun(a,b); 
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl; 
    }
}


