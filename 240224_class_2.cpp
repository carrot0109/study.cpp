//Point.h
#ifndef __POINT_H_
#define __POINT_H_

class Point {
private:
	int x;
	int y;

public:
	bool InitMembers(int xpos, int ypos);
	int GetX() const;	// 값 변경을 허용하지 않는 형태
	int GetY() const;
	bool SetX(int xpos);
	bool SetY(int ypos);
};

#endif

///////////////////////////////////////////////////////

//Point.cpp
#include <iostream>
#include "Point.h"
using namespace std;

bool Point::InitMembers(int xpos, int ypos) {
	if (SetX(xpos) == false || SetY(ypos) == false) {
		return false;
	}
	return true;
}

int Point::GetX() const{
	return x;
}

int Point::GetY() const {
	return y;
}

bool Point::SetX(int xpos) {
	if (0 > xpos || xpos > 100) {
		cout << "벗어난 범위의 X 값 전달" << endl;
		return false;
	}
	x = xpos;
	
	return true;
}

bool Point::SetY(int ypos) {
	if (0 > ypos || ypos > 100) {
		cout << "벗어난 범위의 Y 값 전달" << endl;
		return false;
	}
	y = ypos;

	return true;
}

/////////////////////////////////////////////////

//Rectangle.h
#ifndef __RECTANGLE_H_
#define __RECTANGLE_H_

#include "Point.h"

class Rectangle {
private:
	Point upLeft;
	Point lowRight;

public:
	bool InitMembers(const Point& ul, const Point& lr);
	void ShowRecInfo() const;
};

#endif

//////////////////////////////////////////////////

//Rectangle.cpp
#include <iostream>
#include "Rectangle.h"
using namespace std;

bool Rectangle::InitMembers(const Point& ul, const Point& lr) {
	if (ul.GetX() > lr.GetX() || ul.GetY() > lr.GetY()) {
		cout << "잘못된 위치정보 전달" << endl;
		return false;
	}
	upLeft = ul;
	lowRight = lr;
	return true;
}

void Rectangle::ShowRecInfo() const {
	cout << "좌 상단: " << '[' << upLeft.GetX() << ", ";
	cout << upLeft.GetY() << "]" << endl;
	cout << "우 하단: " << '[' << lowRight.GetX() << ", ";
	cout << lowRight.GetY() << "]" << endl << endl;
}

//////////////////////////////////////////////////

//RectangleFaultFind.cpp
#include <iostream>
#include "Point.h"
#include "Rectangle.h"
using namespace std;

int main(void) {
	Point pos1;
	if (!pos1.InitMembers(-2, 4))
		cout << "초기화 실패" << endl;
	if (!pos1.InitMembers(2, 4))
		cout << "초기화 실패" << endl;

	Point pos2;
	if (!pos2.InitMembers(5, 9))
		cout << "초기화 실패" << endl;

	Rectangle rec;
	if (!rec.InitMembers(pos2, pos1))
		cout << "직사각형 초기화 실패" << endl;

	if (!rec.InitMembers(pos1, pos2))
		cout << "직사각형 초기화 실패" << endl;

	rec.ShowRecInfo();
	return 0;
}
