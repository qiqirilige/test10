// 1.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include"iostream"
using namespace std;
class CTestCopy
{
	int x;
	int y;
public:
	CTestCopy();
	CTestCopy(int a, int b);
	void CTest(CTestCopy &om);
	void setXY(int a, int b);
	void display();
	
};
CTestCopy(int x,int y)
{

}
CTestCopy(int a;int b)
{
	x = a;
	y = b;
}
CTestCopy(CTestCopy &om)
{
	x = om.x * 2;
	y = om.y * 2;
	cout << "**********" << endl;
}
void setXY(int a, int b)
{
	x = a;
	y = b;
}
void display()
{
	cout << "x=" << x << "y=" << y << endl;
}
void CMytest display(CTestCopy temp)
{
	temp.display;
}


int main()
{
	CTestCopy ot(10, 20);
	void CMytest display();
	return 0;
}

