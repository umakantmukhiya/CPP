#include <bits/stdc++.h>
using namespace std;

int power(int val,int len){
    int power = 1;
    while(len > 0){
         power *= val;
         len--;
    }
    return power;
       
}

int main(){
    int n,binary;

    cin >> n;
    while(n--){
        cin >> binary;
        int decimal = 0,i = 0;
        while(binary > 0){
            decimal += (binary % 10) * power(2,i);
           
            binary /= 10;
            i++;
            
        }
        
         cout << decimal <<" ";
    }

   

    return 0;
}