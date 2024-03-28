#include <iostream>

int print_size_1(int arr[]);
int print_size_2(int arr[], const int size);
int print_size_3(int arr[5]);

int main(int argc, char* argv[]) {
    /*const int SIZE = 5;       
    int arr[SIZE]{ 1, 2, 3, 4, 5 };     // SIZE --> const
    std::cout << "arr[0] = " << arr[0] << "\n";
    std::cout << "arr[1] = " << arr[1] << "\n";
    std::cout << "arr[2] = " << arr[2] << "\n";
    std::cout << "arr[3] = " << arr[3] << "\n";
    std::cout << "arr[4] = " << arr[4] << "\n";*/


    /*const int SIZE = 5;
    int arr[SIZE]{ 1, 2, 3, 4, 5 };
    std::cout << "arr[0] = " << &arr[0] << "\n";
    std::cout << "arr[1] = " << &arr[1] << "\n";
    std::cout << "arr[2] = " << &arr[2] << "\n";
    std::cout << "arr[3] = " << &arr[3] << "\n";
    std::cout << "arr[4] = " << &arr[4] << "\n";*/
    // difference of each addresses is 4byte


    /*const int SIZE = 5;
    int arr[SIZE]{ 1, 2, 3, 4, 5 };
    std::cout << "sizeof(int) = " << sizeof(int) << "\n";       
    std::cout << "sizeof(arr) = " << sizeof(arr) << "\n";*/       


    /*const int SIZE = 5;
    int arr[SIZE]{ 1, 2, 3, 4, 5 };
    std::cout << "sizeof(int) = " << sizeof(int) << "\n";
    std::cout << "sizeof(arr) = " << sizeof(arr) << "\n";
    std::cout << "print_size(arr) = " << print_size_1(arr) << "\n";*/


    /*const int SIZE = 5;
    int arr[SIZE]{ 1, 2, 3, 4, 5 };
    std::cout << "sizeof(int) = " << sizeof(int) << "\n";
    std::cout << "sizeof(arr) = " << sizeof(arr) << "\n";
    std::cout << "print_size(arr) = " << print_size_2(arr, SIZE) << "\n";*/


    /*const int SIZE = 5;
    int arr[SIZE]{ 1, 2, 3, 4, 5 };
    std::cout << "sizeof(int) = " << sizeof(int) << "\n";
    std::cout << "sizeof(arr) = " << sizeof(arr) << "\n";
    std::cout << "print_size(arr) = " << print_size_3(arr) << "\n";*/
    return 0;
}

int print_size_1(int arr[]) {
    return sizeof(arr);
}

int print_size_2(int arr[], const int size) {
    return sizeof(arr[0]) * size;
}

int print_size_3(int arr[5]) {
    return sizeof(arr[0]) * 5;
}
