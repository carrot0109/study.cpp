#include <iostream>     // <typeinfo> operator included in <iostream>
#include <limits>

int main(int argc, char* argv[]) {
    //bool b{ true };
    //char c{ 'A' };
    //int n{ 10 };
    //long l{ 100L };     // L --> show it is long type
    //float f{ 3.141592f };
    //double p{ 3.141592 };
    //std::cout << "typeid(b) = " << typeid(b).name() << "\n";    // using method 'name' of returned class
    //std::cout << "typeid(c) = " << typeid(c).name() << "\n";
    //std::cout << "typeid(n) = " << typeid(n).name() << "\n";
    //std::cout << "typeid(l) = " << typeid(l).name() << "\n";
    //std::cout << "typeid(f) = " << typeid(f).name() << "\n";
    //std::cout << "typeid(p) = " << typeid(p).name() << "\n";


    //int n{ 10 };
    //std::cout << "n = " << n << "\n";
    //// int m;     -------------------------------------------------------- <1>
    //// m{ 100 };  -------------------------------------------------------- <2> 
    //// <2> : (uniform initialization --> x) ==> m = 100; because 'm' is already initialized


    //int l = 3.141592; // ---------------------------------------------- <1>
    //std::cout << l << "\n"; // ---------------------------------------- <2>
    //int m{ 3.141592 }; // --------------------------------------------- <3>
    //std::cout << m << "\n"; // ---------------------------------------- <4>
    //// <3> : 3.141592 is not int type
    //// so int m{(int)3.141592} is possible


    //bool b{ true };         // 1
    //char c{ 'A' };          // 1
    //int n{ 10 };            // 4
    //long l{ 100L };         // 4 
    //float f{ 3.141592f };   // 4
    //double p{ 3.141592 };   // 8
    //std::cout << "sizeof(b) = " << sizeof(b) << "\n";
    //std::cout << "sizeof(c) = " << sizeof(c) << "\n";
    //std::cout << "sizeof(n) = " << sizeof(n) << "\n";
    //std::cout << "sizeof(l) = " << sizeof(l) << "\n";
    //std::cout << "sizeof(f) = " << sizeof(f) << "\n";
    //std::cout << "sizeof(p) = " << sizeof(p) << "\n";


    //auto b{ true };     // auto --> bool
    //auto c{ 'A' };
    //auto n{ 10 };
    //auto l{ 100L };     // L --> long (if not 100L but 100, type is 'int')
    //auto f{ 3.141592f };
    //auto p{ 3.141592 };
    //std::cout << "typeid(b) = " << typeid(b).name() << "\n";
    //std::cout << "typeid(c) = " << typeid(c).name() << "\n";
    //std::cout << "typeid(n) = " << typeid(n).name() << "\n";
    //std::cout << "typeid(l) = " << typeid(l).name() << "\n";
    //std::cout << "typeid(f) = " << typeid(f).name() << "\n";
    //std::cout << "typeid(p) = " << typeid(p).name() << "\n";


    /*char ch{ 'B' };
    std::cout << "ch = " << ch << "\n";
    std::cout << "sizeof(ch) = " << sizeof(ch) << "\n";*/


    /*std::cout << "signed char.min = "
        << (int)std::numeric_limits<signed char>::min() << "\n";
    std::cout << "signed char.max = "
        << (int)std::numeric_limits<signed char>::max() << "\n";*/


    /*for (char ch = 'a'; ch <= 'z'; ++ch) {
        std::cout << "ch = " << ch << "\n";
    }*/


    //bool b{ true };
    //std::cout << "b = " << b << "\n";
    //std::cout << "b = " << std::boolalpha << b << "\n";     // boolalpha : int --> bool
    //std::cout << "b = " << b << "\n";
    //std::cout << "b = " << std::noboolalpha << b << "\n";   // noboolalpha : bool --> int
    //std::cout << "b = " << b << "\n";


    //bool b = -10;
    //std::cout << "b = " << std::boolalpha << b << "\n";
    //std::cout << "b = " << b << "\n";
    //bool b1{ -10 };   // narrowing conversion error(0 or 1 is fine)
    //std::cout << "b = " << b1 << "\n";


    int n{ 0 };
    bool b2 = n;
    std::cout << "b2 = " << b2 << "\n";
    bool b3{ n };       // narrowing conversion error : put 4 byte(int) into 1byte(bool)
    std::cout << "b3 = " << b3 << "\n";

    return 0;
}
