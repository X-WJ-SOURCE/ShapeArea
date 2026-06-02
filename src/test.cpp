#include<iostream>
#define PI 3.14159
using namespace std;
class Shape
{
	public:
		Shape(){}
	    virtual float get_Area()=0;
};
class Circle :public Shape
{
    public:
	    Circle(float r):R(r)
	    {
	    }
	    float get_Area()
		{
			area =PI*R*R;
			return area;
		} 
	   
	    float R;	
	    float area;
};
class Square :public Shape
{
    public:
	    Square(float a):A(a)
	    {
	    }
	    float get_Area()
		{
			area =A*A;
			return area;
		} 
	   
	    float A;	
	    float area;
};
class Rectangle :public Shape
{
    public:
	    Rectangle(float w,float h):W(w),H(h)
	    {
	    }
	    float get_Area()
		{
			area =W*H;
			return area;
		} 
	   
	    float W;
		float H;	
	    float area;
};
class Trapezoid :public Shape
{
    public:
	    Trapezoid(float up,float bottom,float h1):Up(up),Bottom(bottom),H1(h1)
	    {
	    }
	    float get_Area()
		{
			area =(Up+Bottom)*H1/2;
			return area;
		} 
	   
	    float Up;
		float Bottom;
		float H1;	
	    float area;
};
class Triangle :public Shape
{
    public:
	    Triangle(float bottom_T,float h_T):Bottom_T(bottom_T),H_T(h_T)
	    {
	    }
	    float get_Area()
		{
			area =Bottom_T*H_T/2;
			return area;
		} 
	   
	    float Bottom_T;
		float H_T;	
	    float area;
};
int main()
{
	float arr[9]={0.0};
	float sum_Area;
	for(int i=0;i<9;i++)
	{
		cin >>arr[i];
	}
	Circle c(arr[0]);
	Square s(arr[1]);
	Rectangle r(arr[2],arr[3]);
	Trapezoid t1(arr[4],arr[5],arr[6]);
	Triangle t2(arr[7],arr[8]);
	sum_Area=c.get_Area()+s.get_Area()+r.get_Area()+t1.get_Area()+t2.get_Area();
	cout <<sum_Area<<endl;
}
