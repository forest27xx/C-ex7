#include<iostream>
#include"cla.h"
#include"file.cpp"
using namespace std;
int main()
{
	Circle b;
	Body a2;
	a2.p(b);
	cout << "输入圆柱的半径：";
	b.ain();
	cout << "输入圆柱的高：";
	a2.hin();
	cout << "圆柱的体积为：";
	cout << a2.volume() << endl;
	cout << "圆柱的表面积为：";
	cout << a2.surfaceArea() << endl << endl;
	Rectangle a;
	Body a1;
	a1.p(a);
	cout << "输入四棱柱底面的长：";
	a.ain();
	cout << "输入四棱柱底面的宽：";
	a.bin();
	cout << "四棱柱的高：";
	a1.hin();
	cout << "四棱柱的体积为：";
	cout << a1.volume() << endl;
	cout << "四棱柱的表面积为：";
	cout << a1.surfaceArea() << endl << endl;
	Triangle c;
	Body a3;
	for (;;)
	{
		a3.p(c);
		cout << "输入三棱柱底面顶点A的(x,y)坐标：";
		c.Ain();
		cout << "输入三棱柱底面顶点B的(x,y)坐标：";
		c.Bin();
		cout << "输入三棱柱底面顶点C的(x,y)坐标：";
		c.Cin();
		if (c.flag())
			cout << "error!重新输入" << endl;
		else
			break;
	}
	cout << "三棱柱的高：";
	a3.hin();
	cout << "三棱柱的体积为：";
	cout << a3.volume() << endl;
	cout << "三棱柱的表面积为：";
	cout << a3.surfaceArea() << endl;
}
