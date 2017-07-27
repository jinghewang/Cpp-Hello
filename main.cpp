#include <iostream>
using namespace std;

#define LENGTH 10;

int func(int z);

int main() {
    std::cout << "Hello, World!" << std::endl;

    const int LENGTH2 = 10;

    int a = 1;
    int b = 2;
    int z = func(b);
    cout << "a+b=" << a+b << endl << "z:" << z << LENGTH;
    return 0;
}

int func(int z){
    return z+1;
}