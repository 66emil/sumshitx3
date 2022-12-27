#include <iostream>
#include <vector>

int main() {
    std::vector<int> a;
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++) {
        int h;
        std::cin >> h;
        a.push_back(h);
    }
    std::vector<std::vector<int>> b;
    std::vector<int> mas;
    std::vector<int> d;
    std::vector<int> e;
    int t;
    for (int i = 0; i < a.size(); i++) {
        if (a[i] % 3 == 0) {
            mas.push_back(i);
            e.push_back(i);
            d.push_back(a[i]);
        }
    }
    for (int i = 0; i < d.size(); i++) {
        for (int j = 0; j < d.size() - 1 - i; j++) {
            if (d[j] > d[j + 1]) {
                int x = d[j];
                d[j] = d[j + 1];
                d[j + 1] = x;
                int y = mas[j];
                mas[j] = mas[j + 1];
                mas[j + 1] = y;
            }
        }
    }
    int x, y, z;
    x = a[mas[0]];
    y = a[mas[1]];
    z = a[mas[2]];
    a[e[0]] = x;
    a[e[1]] = y;
    a[e[2]] = z;
    for (int i = 0; i < a.size(); i++) {
        std::cout << a[i] << " ";
    }
}
