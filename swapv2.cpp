#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
// swap method using algorithm

int main() {
    int num;
    cout << "Input Number: ";
    cin >> num;
    string numStr = to_string(num); // <== convert to string to get specific element e.g [0]=1, [1]=2, [2]=3, [3]=4
    
    swap(numStr[0], numStr[3]);
    
    int result = stoi(numStr); // convert string to back to integer
    int add_result = (numStr[1] - '0') + (numStr[2] - '0'); // <== convert char back to integer
    cout << numStr[1] << "+" << numStr[2] << "=" << add_result << endl;
    cout << "Original: " << num << endl;
    cout << "Swapped: " << result << endl;
    
    return 0;
}