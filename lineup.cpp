#include <bits/stdc++.h>

int main(void) {
    int N;
    std::cin >> N >> std::ws;

    std::vector<std::string> names(N);
    for (int i{}; i < N; ++i) {
        std::getline(std::cin, names[i]);
    }

    bool ascending = false;
    bool descending = false;
    for (int i{ 1 }; i < N; ++i) {
        int j{};
        while (names[i][j] == names[i - 1][j]) {
            ++j;
        }

        if (names[i][j] > names[i - 1][j]) {
            ascending = true;
        }
        else if (names[i][j] < names[i - 1][j]) {
            descending = true;
        }
    }

    if ((ascending && descending) || (!ascending && !descending)) {
        std::cout << "NEITHER" << '\n';
    }
    else if (ascending) {
        std::cout << "INCREASING" << '\n';
    }
    else if (descending) {
        std::cout << "DECREASING" << '\n';
    }

    return 0;
}