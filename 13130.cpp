#include <bits/stdc++.h>

int main(void) {
    int T;
    std::cin >> T;

    for (int i{}; i < T; ++i) {

        std::vector<int> cacho(5);
        for (int j{}; j < 5; ++j) {
            std::cin >> cacho[j];
        }

        bool escala = true;
        for (int j{1}; j < 5; ++j) {
            if (cacho[j] != cacho[j - 1] + 1) {
                escala = false;
                break;
            }
        }

        if (escala) {
            std::cout << 'Y' << '\n';
        } else {
            std::cout << 'N' << '\n';
        }
    }


    return 0;
}