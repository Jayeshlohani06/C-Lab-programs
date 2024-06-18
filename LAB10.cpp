//Write a C++ program function which handles array of bounds exception using C++.

#include <iostream>
using namespace std;
int read_array(int[],int );
int disp_array(int[],int);
int main()
{
    int arr[6],n,i;
    cout<<"Enter the number of elements to consider\n";
    cin>>n;
    try
    {
        if(n>6)
        {
            throw "Array out of Bound Exception error\n";
        }
        read_array(arr,n);
        disp_array(arr,n);
    }
    catch(const char *msg)
    {
        cout<<msg<<" Pls Enter the number of elements less than or equal to "<<6<<"\n";
    }
    return 0;
}

int read_array(int a[],int n)
{
    int i;
    cout<<"Enter the elements of array\n";
    for(i=0;i<n;++i)
    {  
        cin>>a[i]; 
    }
    return 0;
}

int disp_array(int a[],int n)
{
    int i;
    cout <<"The contents of array are\n";
    for(i=0;i<n;i++)
    {
        cout<<a[i]<<"\t";
    }
    cout<<"\n";
    return 0;
}

