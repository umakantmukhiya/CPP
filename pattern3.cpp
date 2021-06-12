#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;

    cin >> n;

    for(int i = 1 ; i <= n; i++){
        // for spacing
        for( int j = n; j > i; j--){
            cout << " ";
        }

        int j = i;
        // for increasing values
       for(int tmp = i; tmp > 0; tmp--,j++){
           cout << j;
       }
        // for decreasing values
        for(int k = 1 ; k < i; k++,j--){
            cout << j-2;
            
        }

        cout <<"\n";
    }

    return 0;
}