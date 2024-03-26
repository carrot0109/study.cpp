#include <climits>
#include <iostream>
#include <iomanip>

#define TAX_RATE 0.15

void overflow();
void underflow();
void literal_contant1();
void literal_contant2();
int add_2(int x, int y);
int sub(int x, int y);
int mul(int x, int y);
int divide(int x, int y);

constexpr int add(int a, int b) {
    int tmp = a + b;
    return tmp;
}


int main(int argc, char* argv[]) {
    //overflow();
    //underflow();
    //literal_contant1();
    //literal_contant2();


    /*int radius{ 10 };
    const double PI{ 3.141592 };
    auto area = PI * radius * radius;
    std::cout << std::setprecision(16) << "area = " << area << "\n";*/


    //int salary = 3000;
    //auto income = salary - (TAX_RATE * salary);
    //std::cout << std::setprecision(16) << "income = " << income << "\n";


    //constexpr int SIZE{ 10 };
    //std::cout << "SIZE = " << SIZE << "\n";
    //const int TEMP{ 100 };
    //constexpr int SIZE_TEMP{ TEMP };
    //std::cout << "SIZE_TEMP = " << SIZE_TEMP << "\n";
    //int temp{ 100 };
    //const int SIZE_TEMP2{ temp };
    //// constexpr int SIZE_TEMP3{ temp };    // no variable


    //int re = add(10, 20);
    //    std::cout << "re = " << re << "\n";
    //int a{ 20 };
    //int b{ 30 };
    //re = add(a, b); 
    //    std::cout << "re = " << re << "\n";

    int x{ 5 };
    int y{ 2 };
    int a = add_2(x, y);
    int b = sub(x, y);
    int c = mul(x, y);
    int d = divide(x, y);
    std::cout << a << '\n';
    std::cout << b << '\n';
    std::cout << c << '\n';
    std::cout << d << '\n';
    return 0;
}

void overflow() {
    short s_money{ SHRT_MAX };
    unsigned short u_money{ USHRT_MAX };
    s_money = s_money + 1;      // maximum memory plus 1 --> overflow
    std::cout << "s_money = " << s_money << "\n";   // start from minimum number of short int
    u_money = u_money + 1;
    std::cout << "u_money = " << u_money << "\n";
}

void underflow() {
    short s_money{ SHRT_MIN };
    s_money = s_money - 1;
    std::cout << "s_money = " << s_money << "\n";
    unsigned short u_money{ 0 };    // not define minimum of unsigned type --> because it is obviously '0'
    u_money = u_money - 1;
    std::cout << "u_money = " << u_money << "\n";
    return;
}

void literal_contant1() {
    float pif = 3.141592F;
    double pid = 3.141592;
    if (pif == pid)
        std::cout << "true\n";
    else
        std::cout << "false\n";
    std::cout << std::setprecision(16) << "pif = " << pif << "\n";      // do not compare double type
    std::cout << "pid = " << pid << "\n";
}

void literal_contant2() {
    int x = 10;
    int y = 010;
    int z = 0x10;
    std::cout << "x = " << x << "\n";
    std::cout << "y = " << y << "\n";   // octal literal
    std::cout << "z = " << z << "\n";   // hexadecimal literal
}

int add_2(int x, int y) {
    int res = x + y;
    return res;
}

int sub(int x, int y) {
    int res = x - y;
    return res;
}

int mul(int x, int y) {
    int res = x * y;
    return res;
}

int divide(int x, int y) {
    int res = x / y;
    return res;
}
