#include <bits/stdc++.h>

int FindValue(char a) {
    if (2 <= a - '0' && a - '0' <= 9) {
        return a - '0';
    } else {
        return 10;
    }

}

int main(void) {
    int N;
    std::cin >> N;

    for (int i{}; i < N; ++i) {
        std::vector<std::string> cards(52);

        for (int j{ 51 }; j >= 0; --j) {
            std::cin >> cards[j];
        }

        int k{ 25 };
        int Y{};
        for (int j{}; j < 3; ++j) {
            int X = FindValue(cards[k][0]);

            Y += X;
            k += (11 - X);
        }

        std::cout << "Case" << " " << i + 1 << ": ";

        for (int j{ k }; j < 52; ++j) {
            Y--;
            if (Y == 0) {
                std::cout << cards[j] << '\n';
                break;
            }
        }

        for (int j{ 25 }; j > 0; --j) {
            if (Y == 0) {
                std::cout << cards[j] << '\n';
                break;
            }
            Y--;

        }

    }


    return 0;
}

