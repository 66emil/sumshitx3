#include <iostream>

int main() {
    double eps = 0.0001, detx = 0.05, exe = 0;
    int x = 0;
    std::cout << x + 0.1;
    for(int j = 0; j > 1; j += 0.1) {
        for(int i = 1; i < 100000000;) {
            exe += x^2 * i + 1;
            exe /= 4 * (i ^ 2);
            exe *= (-1)^i+1;
            std::cout << exe;
        }
    }
}
