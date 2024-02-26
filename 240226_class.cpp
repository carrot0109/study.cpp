#include <iostream>
#include <cstring>
using namespace std;

/* 생성자 */
class SimpleClass {
private:
	int num1;
	int num2;
public:		// 생성자 (클래스와 함수 이름이 동일) 
	SimpleClass() {
		num1 = 0;
		num2 = 0;
	}
	SimpleClass(int n) {
		num1 = n;
		num2 = 0;
	}
	SimpleClass(int n1, int n2) {
		num1 = n1;
		num2 = n2;
	}
	void ShowData() const {
		cout << num1 << " " << num2 << endl;
	}
};

/* private 생성자 */
class AAA {
private:
	int num;
public:
	AAA() : num(0) {}
	AAA& CreateInitObj(int n) const {
		AAA* ptr = new AAA(n);
		return *ptr;
	}
	~AAA() { cout << "program finish, " << num << endl; }
	void ShowNum() const { cout << num << endl; }
private:
	AAA(int n) : num(n) {}
};

int main() {
	/* 생성자 */
	//SimpleClass sc1;
	//sc1.ShowData();

	//SimpleClass sc2(100);
	//sc2.ShowData();

	//SimpleClass sc3(100, 200);
	//sc3.ShowData();



	/* private 생성자 */
	AAA base;
	base.ShowNum();

	AAA& obj1 = base.CreateInitObj(3);
	obj1.ShowNum();

	AAA& obj2 = base.CreateInitObj(12);
	obj2.ShowNum();

	delete& obj1;
	delete& obj2;

	return 0;
}
