#include <bits/stdc++.h>

int main(void) {
    int T;
    std::cin >> T >> std::ws;

    for (int i{}; i < T; ++i) {
        std::string command;
        std::vector<int> LED(100, 0);

        int j{};
        std::getline(std::cin, command);
        int len = command.size();
        for (int k{}; k < len; ++k) {
            if (command[k] == '>') {
                ++j;
            } else if (command[k] == '<') {
                --j;
            } else if (command[k] == '+') {
                ++LED[j];
            } else if (command[k] == '-') {
                --LED[j];
            }

            if (j > 99) {
                j = 0;
            } else if (j < 0) {
                j = 99;
            }

            if (LED[j] > 255) {
                LED[j] = 0;
            } else if (LED[j] < 0) {
                LED[j] = 255;
            }
        }

        std::cout << std::dec << "Case " << i + 1 << ':';

        for (int j{ 0 }; j < 100; ++j) {
            std::cout << ' ' << std::hex << std::uppercase << std::setfill('0') << std::setw(2) << LED[j];
        }

        std::cout << '\n';

    }



    return 0;
}