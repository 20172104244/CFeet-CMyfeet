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
	void setfeet(int ft);
	void setinches(int ich);
	virtual void display();//变成虚函数
	int getfeet();
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
int main()
{
    return 0;
}

