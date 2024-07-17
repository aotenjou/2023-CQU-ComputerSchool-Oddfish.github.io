#include<bits/stdc++.h>
using namespace std;
class Point
{
	int x,y;
public:
	Point(int xx=0, int yy=0):x(xx),y(yy){}
	friend Point operator+(Point &c1, Point &c2);
	friend Point operator-(Point &c1, Point &c2);
    friend Point operator+=(Point &c1, Point &c2);
	friend bool operator==(Point &c1, Point &c2);
	friend ostream &operator<<(ostream &out, Point &c); 
};

Point operator+(Point &c1, Point &c2)
{
	return Point(c1.x+c2.x, c1.y+c2.y);
}

Point operator-(Point &c1, Point &c2)
{
	return Point(c1.x-c2.x, c1.y-c2.y);
}

Point operator+=(Point &c1, Point &c2)
{
	return Point(c1.x+=c2.x, c1.y+=c2.y);
}

bool operator==(Point &c1, Point &c2)
{
	if(c1.x==c2.x && c1.y==c2.y)  return 1;
	else  return 0;
}
	
ostream &operator<<(ostream &out, Point &c)   
{
	out<<c.x<<","<<c.y;
	return out;
}
