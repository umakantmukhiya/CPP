#include <bits/stdc++.h>
using namespace std;

int main(){
    int var = 1;

    for( int i = 1 ; i <= 4; i++){
        for( int j = 1 ; j <= i; j++){
            cout << var++ << " ";
        }
        cout<<"\n";
    }

    return 0;
}