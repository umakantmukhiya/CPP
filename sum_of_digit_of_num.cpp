#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,sum = 0;
    cin >> n;
     while(n != 0){
         sum += n%10;
         n /= 10;
     }

     cout << "Sum of digits is " << sum;

     return 0;

}