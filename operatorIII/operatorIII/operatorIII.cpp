
// operatorplus.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include <iostream>
using namespace std;
class CFeet
{
private:
	int feet;
	int inches;
public:
	void setvalue(int fe, int in);
	void display();
	CFeet minus(CFeet & objk);
	CFeet operator -(CFeet & objk);
};
void CFeet::setvalue(int fe, int in)
{
	feet = fe + in / 12;
	inches = in % 12;
}
void CFeet::display()
{
	cout << feet << "Ӣ��" << inches << "Ӣ��" << endl;
}
CFeet CFeet::minus(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet - objk.feet, inches - objk.inches);
	return temp;
}
CFeet CFeet ::operator -(CFeet & objk)
{
	CFeet temp;
	temp.setvalue(feet - objk.feet, inches - objk.inches);
	return temp;
}
int main()
{
	CFeet A, B, C;
	A.setvalue(23, 24);
	B.setvalue(3, 2);
	C = A - B;
	C.display();
	return 0;
}

