#include <iostream>
#include "cla.h"
#include <math.h>
using namespace std;
float Body::volume()
{
	return pbasic->area() * high;
}
float Body::surfaceArea()
{
	return pbasic->girth() * high + 2 * pbasic->area();
}
void Body::p(Plane& k)
{
	pbasic = &k;
}
void Rectangle::ain()
{
	for (;;)
	{
		cin >> a;
		if (a < 0)
			cout << "error,重新输入" << endl;
		else break;
	}
}
void Rectangle::bin()
{
	for (;;)
	{
		cin >> b;
		if (b < 0)
			cout << "error,重新输入" << endl;
		else break;
	}
}
float Rectangle::area()
{
	return a * b;
}
float Rectangle::girth()
{
	return 2 * a + 2 * b;
}
void Body::hin()
{
	for (;;)
	{
		cin >> high;
		if (high < 0)
			cout << "error,重新输入" << endl;
		else break;
	}
}
void Circle::ain()
{
	for (;;)
	{
		cin >> a;
		if (a < 0)
			cout << "error,重新输入" << endl;
		else break;
	}
}
float Circle::area()
{
	return 3.14 * a * a;
}
float Circle::girth()
{
	return 2 * 3.14 * a;
}
void Triangle::Ain()
{
	cin >> A.x >> A.y;
}
void Triangle::Bin()
{
	cin >> B.x >> B.y;
}
void Triangle::Cin()
{
	cin >> C.x >> C.y;
}
float Triangle::area()
{
	return fabs((A.x * B.y + A.y * C.x + B.x * C.y - A.x * C.y - A.y * B.x - B.y * C.x) / 2);
}
float Triangle::girth()
{
	return sqrt((A.x - B.x) * (A.x - B.x) + (A.y - B.y) * (A.y - B.y)) + sqrt((C.x - B.x) * (C.x - B.x) + (C.y - B.y) * (C.y - B.y)) + sqrt((A.x - C.x) * (A.x - C.x) + (A.y - C.y) * (A.y - C.y));
}
int Triangle::flag()
{
	if ((A.x == B.x && A.x == C.x && B.x == C.x) || (A.y == B.y && A.y == C.y && B.y == C.y))
		return 1;
	else
		return 0;
}
