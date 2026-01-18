#include <bits/stdc++.h>
using namespace std;

int main(void) {
    long long n;
    cin >> n;
    
    while (n > 0) {
        long long a;
        cin >> a;

        long long x;
        x = -0.5 + sqrt((0.5)*(0.5) + 4 * 0.5 * a);
        cout << x << '\n';

        n--;
    }

    return 0;
}