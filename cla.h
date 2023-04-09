#ifndef lei
#define lei
class Plane
{
public:
	virtual float area() = 0;
	virtual float girth() = 0;
};
class Body
{
private:
	Plane* pbasic;
	float high;
public:
	void hin();
	void p(Plane&);
	float volume();
	float surfaceArea();
};
class Rectangle : public Plane
{
private:
	float a, b;
public:
	void ain();
	void bin();
	virtual float area();
	virtual float girth();
};
class Circle : public Plane
{
private:
	float a;
public:
	void ain();
	virtual float area();
	virtual float girth();
};
class Point
{
public:
	float x, y;
};
class Triangle : public Plane
{
private:
	Point A, B, C;
public:
	void Ain();
	void Bin();
	void Cin();
	int flag();
	virtual float area();
	virtual float girth();
};

#endif
