#include <bits/stdc++.h>

int main(void) {
    int t;
    std::cin >> t;

    int result{};
    for (int i{}; i < t; ++i) {
        double L, Wi, D, We;
        std::cin >> L >> Wi >> D >> We;

        bool allowed = false;
        if ((L <= 56 && Wi <= 45 && D <= 25 && We <= 7) ||
            (L + Wi + D <= 125 && We <= 7)) {
            allowed = true;
        }

        if (allowed) {
            ++result;
        }

        std::cout << allowed << '\n';
    }

    std::cout << result << '\n';

    return 0;
}