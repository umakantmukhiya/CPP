#include <bits/stdc++.h>
using namespace std;

int main() {

#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    int x, y;
    char ch;

    x = y = 0;

    ch = cin.get();

    while ( ch != '\n') {
        if ( ch == 'N' || ch == 'n') {
            y++;
        }

        else if (ch == 'S' || 's') {
            y--;
        }

        else if (ch == 'E' || 'e') {
            x++;
        }

        else {
            x--;
        }

        ch = cin.get();
    }

    cout << x << " " << y << endl;

    if (x >= 0 && y >= 0) {
        while (x--) {
            cout << "E ";
        }

        while (y--) {
            cout << "N ";
        }

    }

    else if (x <= 0 && y >= 0) {
        while (x++) {
            cout << "W ";
        }

        while (y--) {
            cout << "N ";
        }
    }

    else if (x >= 0 && y <= 0) {
        while (x--) {
            cout << "E ";
        }

        while (y++) {
            cout << "S ";
        }
    }

    else {
        while (x++) {
            cout << "W ";
        }

        while (y++) {
            cout << "S ";
        }
    }


    return 0;

}