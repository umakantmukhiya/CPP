#include <bits/stdc++.h>
using namespace std;

int main(){
    int fah = 0,cel = 0;
    while( fah <= 300){
        cel = 5*(fah-32)/9;
        cout << setw(3) << fah << setw(5) << cel << "\n";
        fah += 20;
        
    }

    return 0;
    
}