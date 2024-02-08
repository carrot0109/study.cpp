#include <iostream>

#define SQUARE1(x) ((x)*(x))

void Myfunc(void) { std::cout << "Myfunc(void) called" << std::endl; }

void Myfunc(char c) { std::cout << "Myfunc(char c) called" << std::endl; }

void Myfunc(int a, int b) {	std::cout << "Myfunc(int a, int b) called" << std::endl; }

// inline : 함수가 main함수 밑에 따로 정의되어있는지 검토하지 않아 효율적
inline int SQUARE(int x) { return x * x; }

namespace BestComImpel { 
	void SimpleFunc(void) { 
		std::cout << "BestCom이 정의한 함수" << std::endl; 
	} 
}

namespace ProgComImpel {
	void SimpleFunc(void) {
		std::cout << "ProgCom이 정의한 함수" << std::endl;
	}
}

int main() {
	/* 출력	*/
	//int num = 20;
	//std::cout << "Hello World!" << std::endl;	// endl : 줄마침(개행문자 역할)
	//std::cout << "Hello " << "World!" << std::endl;
	//std::cout << num << ' ' << 'A';		// 장점 : 다른 형식을 같이 사용할 수 있음
	//std::cout << ' ' << 3.14 << std::endl;
	


	/* 입력 */
	//int val1;
	//std::cout << "첫 번째 숫자 입력: ";
	//std::cin >> val1;

	//int val2;
	//std::cout << "두 번째 숫자 입력: ";
	//std::cin >> val2;

	//int result = val1 + val2;
	//std::cout << "덧셈결과: " << result << std::endl;



	/* 여러개의 입력 */
	//int val1, val2;
	//int res = 0;
	//std::cout << "두 개의 숫자입력: ";
	//std::cin >> val1 >> val2;

	//if (val1 < val2) {
	//	for (int i = val1 + 1; i < val2; i++) {
	//		res += i;
	//	}
	//}
	//else {
	//	for (int i = val2 + 1; i < val1; i++) {
	//		res += i;
	//	}
	//}

	//std::cout << "두 수 사이의 정수 합: " << res << std::endl;



	/* 문자열 입출력 */
	/*char name[100];
	char lang[200];

	std::cout << "이름은 무엇입니까? ";
	std::cin >> name;

	std::cout << "좋아하는 프로그래밍 언어는 무엇인가요? ";
	std::cin >> lang;

	std::cout << "내 이름은 " << name << "입니다.\n";
	std::cout << "제일 좋아하는 언어는 " << lang << "입니다." << std::endl;*/



	/* 오버로딩 */
	//Myfunc();
	//Myfunc('A');
	//Myfunc(12, 13);

	
	
	/* inline 함수 */
	//std::cout << SQUARE(5) << std::endl;
	//std::cout << SQUARE(12) << std::endl;
	


	/* namespace */
	//BestComImpel::SimpleFunc();
	//ProgComImpel::SimpleFunc();


	return 0;
}
