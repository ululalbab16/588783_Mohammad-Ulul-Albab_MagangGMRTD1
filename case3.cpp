#include <iostream>
using namespace std;

int main() {
    int A[9];
    for (int i = 1; i <= 8; i++) {
        cin >> A[i];
    }

    bool berhasil = false;

    for (int start = 1; start <= 8 && !berhasil; start++) {
        bool opened[9] = { false };
        int cur = start;

        while (cur != 0 && !opened[cur]) {
            opened[cur] = true;
            cur = A[cur];
        }

        bool semuaTerbuka = true;
        for (int i = 1; i <= 8; i++) {
            if (!opened[i]) {
                semuaTerbuka = false;
                break;
            }
        }

        if (semuaTerbuka) berhasil = true;
    }

    cout << (berhasil ? "YES" : "NO") << endl;

    return 0;
}
