#include <bits/stdc++.h>

int main(void) {
    int T;
    std::cin >> T;

    for (int i{}; i < T; ++i) {

        int imports = 0;
        int prev = 1;
        int current;
        while (std::cin >> current) {
            if (current == 0) {
                break;
            }

            if (current > 2 * prev) {
                imports = imports + current - 2 * prev;
            }

            prev = current;
        }

        std::cout << imports << '\n';

    }


    return 0;
}