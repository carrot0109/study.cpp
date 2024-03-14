#include <iostream>
using namespace std;

void foo();     // 선언

int main(int argc, char* argv[]) {      // return_type function_name(param1, param2)
    /* 인자값 입력 */
    /*std::string title{ "Command Line Arguments" };        // under --> statements
    std::cout << title << "\n";
    std::cout << "argc = " << argc << "\n";
    std::cout << "argv[0] = " << argv[0] << std::endl;
    std::cout << "argv[1] = " << argv[1] << std::endl;*/


    /* 함수 */
    // foo();


    /* 변수(문자열) */
    cout << 'a' << endl;    // endl(x) --> \n(o)
    string a = "hello";     // char[32](x) --> string
    cout << a;

    return 0;
}

void foo() {    // 정의
    std::cout << "hello world" << "\n";
}
