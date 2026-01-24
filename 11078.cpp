#include <bits/stdc++.h>

int main(void) {
    int test_case;
    std::cin >> test_case;

    for (int i{}; i < test_case; ++i) {
        int students;
        std::cin >> students;

        int senior;
        std::cin >> senior;

        int current;
        std::cin >> current;
        int difference = senior - current;
        senior = std::max(senior, current);
        for (int j{}; j < students - 2; j++) {
            std::cin >> current;
            difference = std::max(difference, senior - current);
            senior = std::max(senior, current);
        }

        std::cout << difference << '\n';
    }


    return 0;
}