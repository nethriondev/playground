#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int a = 5, b = 10;
    
    cout << "Before swap: a = " << a << ", b = " << b << endl;
    
    swap(a, b);
    
    cout << "After swap: a = " << a << ", b = " << b << endl;
    
    return 0;
}