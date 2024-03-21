#include <iostream>
using namespace std;

int foo(int data);     // parameter --> not local variable(seems like local variable)

int main(int argc, char* argv[]) {
    //float f{ 3.141592 };
    //double lf{ 3.141592 };
    //long double llf{ 3.141592 };
    //cout << "typeid(f) = " << typeid(f).name() << "\n";
    //cout << "typeid(lf) = " << typeid(lf).name() << "\n";
    //cout << "typeid(llf) = " << typeid(llf).name() << "\n";
    //cout << "sizeof(f) = " << sizeof(f) << "\n";
    //cout << "sizeof(lf) = " << sizeof(lf) << "\n";
    //cout << "sizeof(llf) = " << sizeof(llf) << "\n";


    //short s{ 3 };
    //int n{ 100 };
    //long l{ 200 };
    //long long ll{ 300 };
    //std::cout << "typeid(s) = " << typeid(s).name() << "\n";
    //std::cout << "typeid(n) = " << typeid(n).name() << "\n";
    //std::cout << "typeid(l) = " << typeid(l).name() << "\n";
    //std::cout << "typeid(ll) = " << typeid(ll).name() << "\n";
    //unsigned short us{ 3 };
    //unsigned un{ 100 };     // Unsigned int
    //unsigned long ul{ 200 };
    //unsigned long long ull{ 300 };
    //std::cout << "typeid(us) = " << typeid(us).name() << "\n";
    //std::cout << "typeid(un) = " << typeid(un).name() << "\n";
    //std::cout << "typeid(ul) = " << typeid(ul).name() << "\n";
    //std::cout << "typeid(ull) = " << typeid(ull).name() << "\n";


    cout << "hello function main" << "\n";
    int data{ 10 };
    int re = foo(data);    
    cout << "main::data : " << data << '\n';
    cout << "main::data address : " << &data << "\n";   // Identify that address of each two data is different  
    cout << "return data : " << re << '\n';

    return 0;
}

int foo(int data) {    // Call by value
    cout << "hello function foo" << "\n";
    cout << "foo::data : " << data << '\n';
    data = 100;
    cout << "foo::data address : " << &data << '\n';
    int temp{ 300 };        // Local variable

    return data + 100;
}
