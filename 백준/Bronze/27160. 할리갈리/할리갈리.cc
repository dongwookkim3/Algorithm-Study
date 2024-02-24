#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    map<string,int> A;
    vector<string> B;
    int n;
    cin >> n;
    while(n--){
        string a;
        int m;
        cin >> a >> m;
        if (find(B.begin(),B.end(),a)==B.end()){
            B.push_back(a);
        }
        if (A.find(a)!=A.end()){
            A[a]+=m;
        }
        else {
            A[a]=m;
        }
    }
    for (int i=0;i<B.size();i++){
        if (A[B[i]]==5){
            cout << "YES";
            break;
        }
        else if (i==B.size()-1){
            cout << "NO";
        }
    }
    return 0;
}