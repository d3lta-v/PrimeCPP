// PrimeBench Prime Number Calculation Benchmark
// 
// C++ Implementation
//
// v1.0 StatiX Industries
// All rights reserved
//

#include <iostream>
#include <array>
#include <cmath>

using namespace std;

int main() {
    int n = 1000000;
    bool A[n];
    fill_n(A, n, true);
    int i;

    for (i=2; i<=sqrt(n); i++) {
        if (A[i]==true) {
            for (int j=pow(i, 2); j<=n; j+=i) {
                A[j]=false;
            }
        }
    }

    for (int x=2; x<n; x++){
        if (A[x]==true)
            cout << x << " ";
    }
    cout << endl;
    return 0;
}
