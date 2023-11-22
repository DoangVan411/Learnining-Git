#include "testlib.h"
#include <bits/stdc++.h>
using namespace std;

const int TESTLIB_VER = 0; // 0 or 1
const long long TESTLIB_SEED = 1;

void gentest() {
    int m = rnd.next(100, 10000);
    int n = rnd.next(100, m);
    int t = rnd.next(1, 100);
    int x = rnd.next(1, 100);
    int k = rnd.next(1, 1000);
    cout << "\n";
    cout << m << " " << n << " " << t << " " << x << "\n" << k << endl;
    for (int i = 0; i < k; i++) {
        cout << rnd.next(1, 10000) << "\n";
    }
}

int main(int argc, char *argv[]) {
    registerGen(argc, argv, TESTLIB_VER);
    rnd.setSeed(TESTLIB_SEED);

    for (int i = 21; i <= 50; i++) {
        const char *c = ("input/" + to_string(i) + ".in").c_str();
        FILE *f = freopen(c, "w", stdout);
        gentest();
        fclose(f);
    }
}
