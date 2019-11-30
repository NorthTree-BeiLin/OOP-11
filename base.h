#pragma once
#include<iostream>
using namespace std;
class base
{
private:
	int a;
	
protected:
	int b;
public:


	static int count;
	int c;
	
	base(int x =0, int y = 0, int z = 0)
	{
		this->a = x;
		this->b = y;
		this->c = z;
		cout << "base( int x,int y,int z)is called!" << endl;
		count++;
	}
	~base()
	{
		cout << "~base() is called!" << endl;
		getchar();
		count--;
	}
	
    static void  statistic();
	
	void display()
	{
		cout << "a:" << a << "b:" << b<<"c:" << c << endl;
	}
};
class derived1 : public base
{
	int d1;
public:
	derived1(int b = 1) :base(10,10,10)
	{
		this->d1 = b;
		cout << "derived1() is called!" << endl;
		base::count--;
	}
	~derived1()
	{
		cout << "~derived1() is called!" << endl;
		getchar();
	}
	void display()
	{
		//a = 100;
		b = 100;
		c = 100;
		base::display();
		cout << "自身添加数据成员：d1=" << d1 << endl;
	}
};
class derived2 : protected base
{
	int d2;
public:
	derived2(int c = 2) :base(20,20,20)
	{
		base::count--;

		this->d2 = c;
		cout << "derived2() is called!" << endl;
	}
	~derived2()
	{
		cout << "~derived2() is called!" << endl;
		getchar();
	}
	void display()
	{
		//a = 200;
		b = 200;
		c = 200;
		base::display();
		cout << "自身添加数据成员：d2=" << d2<< endl;
	}
};
class derived3 :  virtual private base
{
	int d3;
public:
	derived3(int d= 3) :base(30,30,30)
	{
		base::count--;

		this->d3 = d;
		cout << "derived3() is called!" << endl;
	}
	~derived3()
	{
		cout << "~derived3() is called!" << endl;
		getchar();
	}
	void display()
	{
		//a = 300;
		b = 300;
	    c = 300;
		base::display();
		cout << "自身添加数据成员：d3=" << d3 << endl;
	}
};
 void base::statistic()
{
	cout <<"base类的对象的个数是："<<base::count << endl;
	cout << "*********************" << endl;
	getchar();

}
