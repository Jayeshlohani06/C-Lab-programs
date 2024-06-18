/*Write a C++ program to demonstrate function overloading for the following prototypes.
 add(int a, int b) 
 add(double a, double b)*/
#include <iostream> 
using namespace std; 
void add(int a, int b)
{
	int c;
	cout<< "Integer number1: " << a<< endl;
	cout<< " and Integer number2: " << b << endl;
	c=a+b;
	cout<<"Add of 2 numbers: "<<c;
}
 
void add(double p, double q) 
{
	double d; 
     cout << "Double number1: " << p << endl; 
     cout << "Double number2: " << q << endl;
     d=p+q;
cout<<"Addition of 2 double numbers"<<d;
}
int main()
{
    int x = 5 , y=10; 
   double l = 5.5, m=10.5;
      add(x,y);
     add(l, m);
  return 0;
}

