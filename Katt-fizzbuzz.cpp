#include <bits/stdc++.h>

int main(void) {
    int X;
    std::cin >> X;

    int Y;
    std::cin >> Y;

    int N;
    std::cin >> N;
    for (int i{1}; i <= N; ++i) {
        if (!(i % X) && !(i % Y)) {
            std::cout << "FizzBuzz" << '\n';
        } else if (!(i % X)) {
            std::cout << "Fizz" << '\n';
        } else if (!(i % Y)) {
            std::cout << "Buzz" << '\n';
        } else {
            std::cout << i << '\n';
        }

    }
    

    return 0;
}