#include <iostream>
using namespace std;
int main() {


    for (int i = 1; i < 10; i += 2) {
        cout << i << " ";
    }

    for (int i = 0; i < 10; i++) {
        if (i  == 2) continue;
        cout << i << " ";
    }
}


