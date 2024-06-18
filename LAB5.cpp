/*Create a class named Shape with a function that prints "This is a shape". Create another class named Polygon inheriting the Shape class with the same function that prints "Polygon is a shape". Create two other classes named Rectangle and Triangle having the same function which prints "Rectangle is a polygon" and "Triangle is a polygon" respectively. Again, make another class named Square having the same function which prints "Square is a rectangle”. Now, try calling the function by the object of each of these classes.*/

#include <iostream>
//#include <iomanip> 
using namespace std;

class Shape
{ 
	public:
	void show();
};
void Shape::show()
{
cout << "This is a Shape" << endl;
}

class Polygon : public Shape
{ 
	public:
	void show();
};
void Polygon::show()
{
cout << "Polygon is a Shape" << endl;
}

class Triangle : public Polygon
{
	 public:
	void show();
};
void Triangle::show()
{
cout << "Triangle is a Polygon" << endl;
}

class Rectangle : public Polygon
{
	 public:
	void show();
};
void Rectangle::show()
{
cout << "Rectangle is a Polygon" << endl;
}
class Square : public Rectangle
{ 
	public:	
	void show();
};
void Square::show()
{
cout << "Square is a Rectangle" << endl;

}
int main()
 {
 Shape s1;
 Polygon p1;
 Rectangle r1;
 Triangle t1;
 Square sq1;

 s1.show();
 p1.show();
 r1.show();
 t1.show();
 sq1.show();
 return 0;
 }

