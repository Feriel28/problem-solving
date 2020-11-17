
int getMoneySpent(vector<int> keyboards, vector<int> drives, int b) {
    int sumMax = -1;

    int lk = keyboards.size();
    int ld = drives.size();
    vector<int> sum(ld*lk, 0);
    bool res = true;
    int ss = 0;
    for (int i = 0; i < lk; i++) {
        for (int j = 0; j < ld; j++) {
            sum[ss] = keyboards[i] + drives[j];
            ss++;
        }
    }

    for (int i = 0; i < (lk * ld); i++) {
        if ((sum[i] >= sumMax) && (sum[i] <= b)) {
            sumMax = sum[i];
        }
    }
    return sumMax;
}

int main(int argc, char** argv) {
    int k;
    cout << "your budget" << endl;
    cin >> k;

    vector<int> a(0);
    int n;
    cout << "nb of keyboards" << endl;
    cin >> n;
    while (n--) {
        int input;
        cin >> input;
        a.push_back(input);
    }


    vector<int> q(0);
    int b;
    cout << "nb of drives" << endl;
    cin >> b;
    while (b--) {
        int inputb;
        cin >> inputb;
        q.push_back(inputb);
    }

    cout << "price" << endl;
    cout << getMoneySpent(a, q, k);
    return 0;
}
