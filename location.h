#pragma once
#include<iostream>
using namespace std;
class location
{
	int x, y;
public:
	location(int a = 0, int b = 0)
	{
		this->x = a;
		this->y = b;
		cout << "location() is called!" << endl;
	}
	~location()
	{
		cout << "~location()is called!" << endl;
		getchar();
	}
	void move( )
	{
		cout << "请输入位移x:";
		int a;
		cin >> a;
		cout << "请输入位移y:";
		int b;
		cin >> b;
		x += a;
		y += b;
		cout <<endl<< "移动后的坐标：（" << x << "," << y << ")" << endl;

	}
	void display()
	{
		cout << "坐标：（" << x << "," << y << ")" << endl;
	}
};
class point :public location
{
public:
	point(int a=1,int b=1):location(a,b)
	{
	cout << "print() is called!" << endl;
	}
	~point()
	{
		cout << "~print()is called!" << endl;
	}
	void draw()
	{
		cout <<endl<< "一条直线！" << endl;
	}
	
};
class circle:public point
{
	int r;
public:
	circle(int c, int a = 2, int b = 2 ) :point(a, b)
	{
		this->r = c;
		cout << "circle() is called!" << endl;
	}
	~circle()
	{ 
		cout << "~circle() is called!" << endl;
		getchar();

	}
	void draw( )
	{
		cout << endl<<"一个圆！半径是"<<r << endl;
	}



};
