#include <bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int n;
    cin >> n;

    float i = 0;
    while ( i * i <= n) {
        i++;
    }

    i -= 1;
// start with 0.0  important here
    while ((i + 0.0) * (i + 0.0) <= n) {
        i += 0.1;
    }

    i -= 0.1;

    while ((i + 0.00) * (i + 0.00) <= n) {
        i += 0.01;
    }

    i -= 0.01;

    while ((i + 0.000) * (i + 0.000) <= n) {
        i += 0.001;
    }

    i -= 0.001;


    cout << "Square root of " << n << " with precision is :" << i;



    return 0;
}