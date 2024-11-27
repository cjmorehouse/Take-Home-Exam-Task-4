
#include <iostream>
#include "Ackermann.h"
using namespace std;

int main() {
    int testValues[][2] = {{0, 0}, {0, 1}, {1, 1}, {1, 2}, {1, 3}, {2, 2}, {3, 2}};
    for (auto& test : testValues) {
        int m = test[0], n = test[1];
        cout << "A(" << m << ", " << n << ") = " << ackermann(m, n) << endl;
    }
    return 0;
}
