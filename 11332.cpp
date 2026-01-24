#include <bits/stdc++.h>

int f(int x) {
    int sum{};
    for (int i{9}; i >= 0; --i) {
        sum = sum + static_cast<int>(x / std::pow(10, i));
        x = x - static_cast<int>(x / std::pow(10, i)) * pow(10, i); 
    }
    return sum;
}

int main(void) {
    while (1) {
        int n;
        std::cin >> n;
        
        if (n == 0) {
            break;
        }

        n = f(n);
        while (n > 9) {
            n = f(n);
        }

        std::cout << n << '\n';
    }
    
    return 0; 
}
