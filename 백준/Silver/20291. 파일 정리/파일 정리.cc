#include <iostream>
#include <vector>
#include <algorithm>
#include <sstream>
#include <map>
using namespace std;
int main(){
    map<string,int> A;
    vector<string> B;
    int n;
    cin >> n;
    while(n--){
        string a,b;
        cin >> a;
        istringstream iss(a);
        while(getline(iss,b,'.'));
        if (A.find(b)!=A.end()){
            A[b]++;
        }
        else {
            B.push_back(b);
            A[b]=1;
        }
    }
    sort(B.begin(),B.end());
    for (int i=0;i<B.size();i++){
        cout << B[i] << ' ' << A[B[i]] << "\n";
    }
    return 0;
}