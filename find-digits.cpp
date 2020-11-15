int findDigits(int n) {

    string nstr = to_string(n);
    int l = nstr.length();
    int nb = 0;
    int istr[l] = {0};

    for (int i = 0; i <= l; i = i + 1) {
        istr[i] = nstr[i] - '0';
        /*istr[i] = atoi(nstr[i]);*/
        if (istr[i] != 0) {
            if (n % istr[i] == 0) {
                nb++;
            }
        }
    }
    return (nb);
}
