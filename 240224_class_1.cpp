#include <iostream>
#include <cstring>

using namespace std;

/* 과일 */
class FruitSeller {
private:
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;

public:
	void InitMembers(int price, int num, int money) {
		APPLE_PRICE = price;
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money) {
		int num = money / APPLE_PRICE;	// 받은 돈으로 살 수 있는 사과 갯수
		numOfApples -= num;
		myMoney += money;
		return num;
	}
	void ShowSalesResult() {
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer {
	int myMoney;	// private
	int numOfApples;	// private

public:
	void InitMembers(int money) {
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller& seller, int money) {
		numOfApples += seller.SaleApples(money);	// 구매한 사과의 갯수
		myMoney -= money;	// 남은 돈
	}
	void ShowBuyResult() {
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

/* 정보은닉 */
class Point {
public:
	int x;	// x좌표의 범위는 0이상 100이하
	int y;  // y좌표의 범위는 0이상 100이하
};

class Rectangle {
public:
	Point upLeft;
	Point lowRight;

public:
	void ShowRecInfo() {
		cout << "좌 상단: " << '[' << upLeft.x << ", ";
		cout << upLeft.y << ']' << endl;
		cout << "우 하단: " << '[' << lowRight.x << ", ";
		cout << lowRight.y << ']' << endl;
	}
};

int main() {
	/* 과일 장사 */
	//FruitSeller seller;
	//seller.InitMembers(1000, 20, 0);
	//FruitBuyer buyer;
	//buyer.InitMembers(5000);
	//buyer.BuyApples(seller, 2000);

	//cout << "과일 판매자의 현황" << endl;
	//seller.ShowSalesResult();
	//cout << "과일 구매자의 현황" << endl;
	//buyer.ShowBuyResult();

	//// 동적 할당 방식(리스트에 따로 저장하여 접근)
	//for (int i = 0; i < 5; i++) {	
	//	FruitBuyer* buyer_T = new FruitBuyer;
	//	buyer_T -> InitMembers((i + 1) * 1000);
	//	buyer_T -> ShowBuyResult();
	//}



	/* 정보 은닉 */
	Point pos1 = { -2, 4 };
	Point pos2 = { 5, 9 };
	Rectangle rec = { pos2, pos1 };
	rec.ShowRecInfo();
	return 0;
}
