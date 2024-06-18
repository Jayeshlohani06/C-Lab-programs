/*Write a function which throws a division by zero exception and catch it in catch block. Write a C++ program to demonstrate usage of try, catch and throw to handle exception.*/
#include <iostream>
using namespace std;
int fdivide(int,int);
int main()
{
   	 int numer,denom,res;
   	 cout<<"Enter the value of numerator and denominator\n";
   	 cin>>numer>>denom;
	res=fdivide(numer,denom);
	return 0;
}    
int fdivide(int n1,int n2)
{ 
                   try 
                   { 	
                    int c=0,a,b;
		           a=n1;
		           b=n2;
                    
		 if(b==0) 
                {
                    throw "error occured";
		        }
		        c=a/b;
                cout<<"Result="<<c; 
	         }
             catch(const char *msg) 
             {
                 cout<<msg<<endl<<"Cannot divide by zero"; 
             } 
}

