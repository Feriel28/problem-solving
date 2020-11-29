#include <bits/stdc++.h>
#include<string>
//#include <chrono>



using namespace std;

long marcsCakewalk(vector<int> calorie) {
    sort(calorie.begin(), calorie.end());
    reverse(calorie.begin(), calorie.end());
    long sum = 0;
    for (int i=0;i<calorie.size();i++){
        sum = sum + pow(2,i)*calorie[i];
    }
    return sum;

}

int main(int argc, char** argv) {
//    vector<int> r(0);
//    int  n;
//    cout<<"nb ranked :"<<endl;
//    cin >> n; 
//    while(n--) {
//        int input;
//        cin >> input;
//        r.push_back(input);
//    }
//    
//    vector<int> p(0);
//    int  k;
//    cout<<"nb player :"<<endl;
//    cin >> k; 
//    while(k--) {
//        int input;
//        cin >> input;
//        p.push_back(input);
//    }
    
    vector<int> r = {1, 3, 2}; 

    
    
    auto begin = chrono::high_resolution_clock::now();
    long v = marcsCakewalk(r);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin); 
//    cout << "time :";
//    cout << elapsed<< endl;
    cout << "vector output h" << endl;
        cout << v<<endl;
    
    return 0;
}
