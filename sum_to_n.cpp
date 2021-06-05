#include <bits/stdc++.h>
using namespace std;

int main(){
    int sum = 0, val = 1;
    int n;
    cin >> n;
    while(n--){
        sum += val;
        val++;
    }
    cout << sum << "\n";

    return 0;

}