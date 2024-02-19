#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

/* 구조체 내의 함수 */
namespace car_const {
	enum {
		id_len = 20, 
		max_spd = 200,
		fuel_step = 2,
		acc_step = 10,
		brk_step = 10
	};
}

struct Car {
	char gamerID[car_const::id_len];
	int fuelGauge;
	int curSpeed;

	void ShowCarState();
	void Accel();
	void Break();
};

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

/* 클래스와 객체*/
class Car2 {
private:	// class 특징
	char gamerID[car_const::id_len];
	int fuelGauge;
	int curSpeed;
public:
	void InitMembers(char* ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

void Car2::InitMembers(char* ID, int fuel) {
	strcpy(gamerID, ID);
	fuelGauge = fuel;
	curSpeed = 0;
}

void Car2::ShowCarState() {
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car2::Accel() {
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

void Car2::Break() {
	if (curSpeed < car_const::brk_step) {
		curSpeed = 0;
		return;
	}

	curSpeed -= car_const::brk_step;
}

int main() {
	/* 구조체 내의 함수 */
	/*Car run99 = {"run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();*/



	/*클래스와 객체*/
	/*Car run99 = {"run99", 100};
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();*/

	return 0;
}
