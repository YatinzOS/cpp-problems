#include <bits/stdc++.h>

double price(int p, int a, int k, int b, int c, int d) {
    return p * (std::sin(a * k + b) + std::cos(c * k + d) + 2);
}

int main(void) {

    int p, a, b, c, d, n;
    std::cin >> p >> a >> b >> c >> d >> n;

    double max = price(p, a, 1, b, c, d);
    double diff = max - price(p, a, 2, b, c, d);
    if (n == 1) {
        diff = -1;
    }

    for (int i{ 3 }; i < n + 1; ++i) {
        double current = price(p, a, i, b, c, d);
        if (current > max) {
            max = current;
        }

        if (max - current > diff) {
            diff = max - current;
        }

    }

    if (diff < 0) {
        diff = 0;
    }

    std::cout << std::fixed << std::setprecision(10) << diff << '\n';


    return 0;
}

