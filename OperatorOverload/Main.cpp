#include <iostream>
#include "AudioEngineEndpoint.h"

using namespace std
using namespace ost;

Point& operator + (Point& p1, Point& p2) {

	Point point;

	p1.x += p2.x;
	p1.y += p2.y;

}

int main() {

	Point point1(10, 14);

	point1.Write(cout);

	Point point2(5, 8);

	Point point3 = point1 + point2;

	point3.Write(cout);
	
	point1 + point2;



}