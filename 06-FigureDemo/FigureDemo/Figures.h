#include <windows.h>

class Figure
{
public:
	virtual void Draw(HDC hdc)=0;
};

class Point:public Figure
{
protected:
	int x1,y1;
public:
	Point(int x1,int y1) {
		this->x1=x1;
		this->y1=y1;
	}
	void Draw(HDC hdc) {
		Ellipse(hdc,(x1-2),(y1-2),(x1+2),(y1+2));
	}
};

class Circle:public Point
{
protected:
	int radius;
public:
	Circle(int x1,int y1,int radius):
	  Point(x1,y1) {
		this->radius=radius;
	}
	void Draw(HDC hdc) {
		Ellipse(hdc,(x1-radius),(y1-radius),(x1+radius),(y1+radius));
	}
};
class FArc:public Circle
{
protected:
	int x3,y3,x4,y4;
public:
	FArc(int x1,int y1,int radius,int x3,int y3,int x4,int y4):
	  Circle(x1,y1,radius) {
		  this->x3=x3;
		  this->y3=y3;
		  this->x4=x4;
		  this->y4=y4;
	  }
	  void Draw(HDC hdc) {
		  Arc(hdc,x1-radius,y1-radius,
			      x1+radius,y1+radius,
				  x3,y3,x4,y4);
		 
	  }
};

class Line : public Figure
{
protected:
	POINT pnt[2];
	Point *ends[2];
public:
	Line(int x1,int y1,int x2,int y2) {
		pnt[0].x=x1;
		pnt[0].y=y1;
		pnt[1].x=x2;
		pnt[1].y=y2;
		ends[0]=new Point(x1,y1);
		ends[1]=new Point(x2,y2);
	}
	void Draw(HDC hdc) {
		ends[0]->Draw(hdc);
		ends[1]->Draw(hdc);
		Polyline(hdc,pnt,2);
	}
};

	