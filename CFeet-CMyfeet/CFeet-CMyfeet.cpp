// CFeet-CMyfeet.cpp : 定义控制台应用程序的入口点。
//动态存储分配

#include "stdafx.h"
#include<iostream>
using namespace std;
class CFeet
{
protected:
	int feet;
	int inches;
public:
	CFeet();
	void setfeet(int ft);//易调用
	void setinches(int ich);
	virtual void display();//virtual只能在类定义中的成员函数说明处使用，通过基累指针调用基类和派生类中都有的同名，同参数的叫虚函数。
	//所以要用virtual变成虚函数
	int getfeet();//可访问
	int getinches();
};
CFeet::CFeet()
{
	feet = 0;
	inches = 0;
}
void CFeet::setfeet(int ft)
{
	feet = ft;
}
void CFeet::setinches(int ich)
{
	inches = ich % 12;
	feet = feet + ich / 12;
}
void CFeet::display()
{
	cout << "基类  " << feet << "英尺" << inches << "英寸" << endl;
}
int CFeet::getfeet()
{
	return feet;
}
int CFeet::getinches()
{
	return inches;
}
class CMyfeet :public CFeet
{
public:
	void display();
};
void CMyfeet::display()
{
	cout << "派生类  " << feet << "英尺" << inches << "英寸" << endl;
}
int main()
{
	CMyfeet p;
	p.setfeet(3);
	p.setinches(8);
	p.display();
	p.CFeet::display();
	/*CFeet *p;
	p = new CMyfeet;//把CMyfeet变成了无名对象。是跟CMyfeet Afeet; p=&Afeet;一样的
	p->setfeet(3);// （->)的作用是跟(.)一样的
	p->setinches(8);
	p->display();//派生类
	p->CFeet::display();//基类*/
    return 0;
}

