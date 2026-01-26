#include <bits/stdc++.h>

int main(void) {
    int T;
    std::cin >> T;

    for (int i{}; i < T; ++i) {
        int N;
        std::cin >> N;

        int Mcost{};
        int Jcost{};
        for (int j{}; j < N; ++j) {
            int time;
            std::cin >> time;

            Mcost += 10 * (time / 30 + 1);
            Jcost += 15 * (time / 60 + 1);

        }

        std::cout << "Case " << i + 1 << ": ";
        if (Mcost == Jcost) {
            std::cout << "Mile Juice " << Mcost << '\n';
        }
        else if (Mcost < Jcost) {
            std::cout << "Mile " << Mcost << '\n';
        }
        else if (Jcost < Mcost) {
            std::cout << "Juice " << Jcost << '\n';
        }


    }


    return 0;
}