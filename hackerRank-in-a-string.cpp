#include <bits/stdc++.h>

using namespace std;

// Complete the hackerrankInString function below.
string hackerrankInString(string s) {
    int l = s.length();
    string ref = "hackerrank";
    string rep;
    int ns = 0;
    for (int i = 0; i <= l; i = i + 1) {
        if (s[i] == ref[ns]) {
            ns++;
        }
    }
    
    if (ns == ref.length()+1) {
        rep = "YES";
    } else {
        rep = "NO";
    }

    return rep;
}

