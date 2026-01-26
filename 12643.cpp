#include <bits/stdc++.h>

int main(void) {
    double N, i, j;
    while (std::cin >> N >> i >> j) {
        int count{ 1 };
        while (1) {
            if (std::ceil(i / 2) != std::ceil(j / 2)) {
                i = std::ceil(i / 2);
                j = std::ceil(j / 2);
                count++;
            }
            else {
                break;
            }
        }

        std::cout << count << '\n';
    }


    return 0;
}