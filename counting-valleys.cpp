#include <bits/stdc++.h>
#include<string>
#include <iostream>


using namespace std;


int countingValleys(int steps, string path) {
    int sea_lev = 0;
    int valley = 0;
    
    for (int i = 0; i < path.length(); i++) {
        if (path[i] == 'U') {
            sea_lev = sea_lev + 1;
            if (sea_lev == 0)
                valley++;
        } else {
            sea_lev = sea_lev - 1;
        }
    }
 return (valley);

}

int main(int argc, char** argv) {
    string path = "";
    int steps;

    cout << "steps" << endl;
    cin>> steps;

    cout << "path" << endl;
    while (steps--) {
        char ch;
        cin >> ch;
        path = path + ch;
    }
    cout << countingValleys(steps,path) << endl;
    return 0;
}

