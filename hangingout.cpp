#include <bits/stdc++.h>

int main(void) {
    int L, x;
    std::cin >> L >> x >> std::ws;

    int current{};
    int result{};
    for (int i{}; i < x; ++i) {
        std::string command;
        int n;
        std::cin >> command >> n;
        if (command == "enter") {
            if (current + n <= L) {
                current += n;
            }
            else result++;
        }
        else if (command == "leave") {
            current -= n;
        }
    }

    std::cout << result << '\n';

    return 0;
}