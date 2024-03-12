#include <iostream>
int main(int argc, char* argv[]) {
    int n;
    n = 100;
    std::cout << "n = " << n << "\n";
    std::cout << "n = " << &n << "\n";

    int l = 10;
    int m{100};
    int n(1000);
    int o = {20};
    int p{};
    int q{0};
    int r = {0};
    int s = (0);
    int t(0);
    std::cout << "l = " << l << "\n";
    std::cout << "m = " << m << "\n";
    std::cout << "n = " << n << "\n";
    std::cout << "o = " << o << "\n";
    std::cout << "p = " << p << "\n";
    std::cout << "q = " << q << "\n";
    std::cout << "r = " << r << "\n";
    std::cout << "s = " << s << "\n";
    std::cout << "t = " << t << "\n";
  
    return 0;
}
