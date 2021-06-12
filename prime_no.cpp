#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;

    int i = 2;
    while(i <= sqrt(n)){
        if(n%i == 0){
            cout << "Not prime\n";
            exit(0);
        }
        i++;
    }

    cout << "Prime\n";

    return 0;
}