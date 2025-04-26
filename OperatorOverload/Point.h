#pragma once

class Point {

public:
	float x, y;

	public 
		
		Point() {}

	void Write(std::ostream& ostream)

		void Add(Point& point)

	Point& operator + (Point& point) {

		Point p; 
		p.x = x + point.x;
		p.y = y + point.y;
		return p;

	}

};
