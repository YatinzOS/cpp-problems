#include <bits/stdc++.h>
using namespace std;

int main(void) {
    for (int i{}; i < 75; ++i) {
        int events{};
        cin >> events;

        if (events == 0) {
            break;
        }

        int expected{};
        int given{};
        for (int i{}; i < events; ++i) {
            int N;
            cin >> N;

            if (N == 0) {
                given++;
            } else {
                expected++;
            }
        }

        cout << "Case " << i+1 << ": " << expected-given << '\n';
    }
}