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
	void setfeet(int ft);//�׵���
	void setinches(int ich);
	virtual void display();//virtualֻ�����ඨ���еĳ�Ա����˵����ʹ�ã�ͨ������ָ����û�����������ж��е�ͬ����ͬ�����Ľ��麯����
	//����Ҫ��virtual����麯��
	int getfeet();//�ɷ���
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
	cout << "������  " << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
int main()
{
	CMyfeet p;
	p.setfeet(3);
	p.setinches(8);
	p.display();
	p.CFeet::display();
	/*CFeet *p;
	p = new CMyfeet;//��CMyfeet��������������Ǹ�CMyfeet Afeet; p=&Afeet;һ����
	p->setfeet(3);// ��->)�������Ǹ�(.)һ����
	p->setinches(8);
	p->display();//������
	p->CFeet::display();//����*/
    return 0;
}

