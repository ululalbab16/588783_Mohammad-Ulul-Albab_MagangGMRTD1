#include <iostream>
using namespace std;

int main() {
    int k, n, m;
    cin >> k >> n >> m;

    if (n % 3 != 0 || m % 3 != 0) {
        cout << -1 << "\n";
        return 0;
    }

    long long barang2kg_diangkut = k / 2;
    long long langkah_n = 0;
    long long barang2kg_setiapkotak = n / 3;

    if (barang2kg_diangkut > 0) {
        langkah_n = 2 * (barang2kg_setiapkotak / barang2kg_diangkut) + 2 * (barang2kg_setiapkotak / barang2kg_diangkut);

        long long sisa_n1 = barang2kg_setiapkotak % barang2kg_diangkut;
        long long sisa_n2 = barang2kg_setiapkotak % barang2kg_diangkut;
        long long total_sisa_n = sisa_n1 + sisa_n2;

        if (total_sisa_n > 0) {
            if (total_sisa_n <= barang2kg_diangkut) langkah_n += 3;
            else langkah_n += 4;
        }
    }

 
    long long barang1kg_diangkut = k / 1;
    long long langkah_m = 0;
    long long barang1kg_setiapkotak = m / 3;

    if (barang1kg_diangkut > 0) {
        langkah_m = 2 * (barang1kg_setiapkotak / barang1kg_diangkut) + 2 * (barang1kg_setiapkotak / barang1kg_diangkut);

        long long sisa_m1 = barang1kg_setiapkotak % barang1kg_diangkut;
        long long sisa_m2 = barang1kg_setiapkotak % barang1kg_diangkut;
        long long total_sisa_m = sisa_m1 + sisa_m2;

        if (total_sisa_m > 0) {
            if (total_sisa_m <= barang1kg_diangkut) langkah_m += 3;
            else langkah_m += 4;
        }
    }

    cout << langkah_n + langkah_m << "\n";
    return 0;
}

