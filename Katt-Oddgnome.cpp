#include <bits/stdc++.h>

int main(void) {
    int groups;
    std::cin >> groups;

    for (int i{}; i < groups; ++i) {
        int size;
        std::cin >> size;

        std::vector<int> gnomes(size);
        for (int j{}; j < size; ++j) {
            std::cin >> gnomes[j];
        }

        for (int j{1}; j < size; ++j) {
            if (gnomes[j] != gnomes[j - 1] + 1) {
                std::cout << j + 1 << '\n';
                break;
            }
        }


    }

    return 0;
}