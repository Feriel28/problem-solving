#include <bits/stdc++.h>
#include<string>


using namespace std;

int pickingNumbers(vector<int> a) {
    int nb = 0;
    int nbMax = -1;
    for (int i=0; i<a.size();i++){
        string as = "";
        for (int j=0;j<a.size();j++){
            if (abs((a[i]-a[j])) <=1){
                char ac = '0' + a[j];
                as = as+ac;
                nb = as.length();
            }
            if (nbMax<=nb){
                nbMax=nb;
            }
        }
    }
    return nbMax;

}
//int pickingNumbers(vector<int> a) {
//    int nb = 0;
//    int nbMax = -1;
//    for (int i=0; i<a.size();i++){
//        string as = "";
//        for (int j=0;j<a.size();j++){
//            if (abs((a[i]-a[j])) <=1){
//                char ac = '0' + a[j];
//                as = as+ac;
//                nb = as.length();
//            }
//            if (nbMax<=nb){
//                nbMax=nb;
//                for (int k=0;as.length();k++){
//                    
//                }
//            }
//        }
//    }
//    return nbMax;p
//
//}

//int main(int argc, char** argv) {
//    vector<int> c(0);
//    int  n;
//    cout<<"nb of variables :"<<endl;
//    cin >> n; 
//    while(n--) {
//        int input;
//        cin >> input;
//        c.push_back(input);
//    }
//        
//    cout << pickingNumbers(c);
//    return 0;
//}
// SOLUTION INTERESSANTE sur Hackerrank
//#include <cmath>
//#include <cstdio>
//#include <vector>
//#include <iostream>
//#include <algorithm>
//using namespace std;
//
//int main() {
//   int n,k,max = 0;
//    cin>>n;
//    int a[100]={0};
//    for(int i = 0;i<n;i++){
//        cin>>k;
//        a[k]++;
//    }
//    for(int i = 0;i<n-1;i++){
//        if(a[i]+a[i+1]> max) max = a[i]+a[i+1];
//    }
//    cout<<max;
//    return 0;
//}