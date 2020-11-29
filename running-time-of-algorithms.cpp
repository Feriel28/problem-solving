#include <bits/stdc++.h>
#include<string>
//#include <chrono>



using namespace std;
 
int runningTime(vector<int> arr) {
    int nb = 0;
    int temp = 0;
        for (int i=0; i<arr.size();i++){
        cout<<"arr1 :";
        cout<<arr[i]<<endl;
    }
    for (int i=0; i<arr.size();i++){
        int x =arr[i];
        for (int j=0;j<i;j++){
            if (x<arr[j]){
            temp = arr[j];
            arr[j]=arr[i];
            arr[i]=temp;
            nb = nb+1;
        }
        }
        }
        return nb;
        

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
    
    vector<int> r = {4, 4 ,3, 4}; 

    
    
    auto begin = chrono::high_resolution_clock::now();
    int v = runningTime(r);
    auto end = std::chrono::high_resolution_clock::now();
    auto elapsed = chrono::duration_cast<std::chrono::nanoseconds>(end - begin); 
//    cout << "time :";
//    cout << elapsed<< endl;
    cout << "vector output h" << endl;
        cout << v<<endl;
    
    return 0;
}