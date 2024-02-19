//Car.h
#ifndef __CAR_H__
#define __CAR_H__

namespace car_const {
	enum {
		id_len = 20,
		max_spd = 200,
		fuel_step = 2,
		acc_step = 10,
		brk_step = 10
	};
}

class Car {
private:
	char gamerID[car_const::id_len];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(const char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif


///////////////////////////////////////////////////////////

//RacingMan.cpp
#include "Car.h"

int main() {
	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	return 0;
}

/////////////////////////////////////////////////////////////

//Car2.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
#include "Car.h"

using namespace std;

void Car::InitMembers(const char* ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car::ShowCarState() {
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel() {
	if (fuelGauge <= 0)
		return;
	else
		fuelGauge -= car_const::fuel_step;

	if ((curSpeed + car_const::acc_step) >= car_const::max_spd) {
		curSpeed = car_const::max_spd;
		return;
	}

	curSpeed += car_const::acc_step;
}

void Car::Break() {
	if (curSpeed < car_const::brk_step) {
		curSpeed = 0;
		return;
	}

	curSpeed -= car_const::brk_step;
}
