#include <bits/stdc++.h>

int main(void) {
    int T;
    std::cin >> T;

    for (int i{}; i < T; ++i) {
        long long P, R, F;
        std::cin >> P >> R >> F;

        int t{};
        while (P <= F) {
            P = P * R;
            t++;
        }

        std::cout << t << '\n';
    }

    return 0;
}