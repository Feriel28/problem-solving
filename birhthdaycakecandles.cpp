#include <bits/stdc++.h>
#include<string>


using namespace std;
//test pour git 

int birthdayCakeCandles(vector<int> candles) {
int cMax = candles[0];
int nb = 0;
    for (int i = 0; i < candles.size(); i++) {
        if (candles[i] >= cMax) {
            cMax = candles[i];
        }
        }
        
        for (int i = 0; i < candles.size(); i++) {
            if (candles[i] == cMax) {
                nb ++;

            }
        }

return nb;
    
}

int main(int argc, char** argv) {
    vector<int> c(0);
    int  n;
    cin >> n; 
    while(n--) {
        int input;
        cin >> input;
        c.push_back(input);
    }
        
    cout << birthdayCakeCandles(c);
    return 0;
}
