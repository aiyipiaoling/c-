#include<iostream>
using namespace std;

class Shape{
public:
	Shape(){};
	~Shape(){};
	virtual float Area()=0;
};

class Circle:public Shape
{
private:
	float L;
public:
	Circle(float l):L(l){};
	float Area(){return 3.14159*L*L;}
};

class Rectangle:public Shape
{
private:
	float L;
	float W;
public:
	Rectangle(float l, float w):L(l),W(w){};
	float Area(){return L*W;}
};

class Triangle:public Shape
{
private:
	float D;
	float H;
public:
	Triangle(float d, float h):D(d),H(h){};
	float Area(){return 0.5*D*H;}
};

int main(){
	Shape *sp1;
	Shape *sp2;
	Shape *sp3;
	sp1 = new Circle(100.0);
	sp2 = new Rectangle(10.0,20.0);
	sp3 = new Triangle(10.0,20.0);
	cout<<sp1->Area()<<endl;
	cout<<sp2->Area()<<endl;
	cout<<sp2->Area()<<endl;
	return 0;
}