// CFeet-CMyfeet.cpp : �������̨Ӧ�ó������ڵ㡣
//��̬�洢����

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
	virtual void display();//����麯��
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
	cout << "����  " << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
    return 0;
}

