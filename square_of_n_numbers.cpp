#include <bits/stdc++.h>
using namespace std;

int main() {


#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif


    int n, num;
    cin >> n;

    while (n--) {
        cin >> num;
        cout << num*num << " ";
    }

    return 0;
}