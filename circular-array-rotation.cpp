

#include <bits/stdc++.h>
#include<string>
#include <iostream>


using namespace std;

vector<string> split_string(string);

// Complete the circularArrayRotation function below.

vector<int> circularArrayRotation(vector<int> a, int k, vector<int> queries) {
    int l = a.size();
    vector<int> b(l, 0);
    //b[k] = a[0];
    for (int i = 0; i < l; i++) {
        int left =  (k+i)%l ;
        //int right = 1 + l % i;
        //cout << left << endl;
        b[left] = a[i];

    }
    int lq = queries.size();
    vector<int> bq(lq, 0);
    for (int i = 0; i < lq; i++) {
        bq[i] = b[queries[i]];

    }
    return (bq);
}

int main(int argc, char** argv) {
    int k;
    cout << "nb de rotation"<< endl;
    cin >> k;

    vector<int> a(0);
    int n;
    cout << "taille du vecteur"<< endl;
    cin >> n;
    while (n--) {
        int input;
        cin >> input;
        a.push_back(input);
    }


    vector<int> q(0);
    int b;
    cout << "nb of queries"<< endl;
    cin >> b;
    while (b--) {
        int inputb;
        cin >> inputb;
        q.push_back(inputb);
    }

    cout << "output" << endl;
    auto v = circularArrayRotation(a, k, q);
    cout << "vector output" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        cout << "\n";
    }

    return 0;
}


