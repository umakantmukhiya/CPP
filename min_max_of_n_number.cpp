#include <bits/stdc++.h>
using namespace std;

int main(){
    int n,var,min = INT32_MAX,max = INT32_MIN;
    cin >> n;

    while(n--){
        cin >> var;


        if(var > max){
            max = var;
        }

        if(var < min){
            min = var;
        }

    }

    cout << "Min "<< min <<" Max "<<max;

    return 0;
}