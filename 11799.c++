#include <bits/stdc++.h>
using namespace std;

int main(void) {

    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;

        int best = numeric_limits<int>::min();

        for (int i{}; i < N; ++i) {
            int x{};
            cin >> x;

            best = max(x, best);
        }

        cout << "Case " << i+1 << ": " << best << '\n';

    }

    return 0;


}