#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    vector<string> A;
    A.push_back("ChongChong");
    int n;
    cin >> n;
    while (n--){
        string a,b;
        cin >> a >> b;
        if (find(A.begin(),A.end(),a)!=A.end() && find(A.begin(),A.end(),b)==A.end()){
            A.push_back(b);
        }
        else if (find(A.begin(),A.end(),a)==A.end() && find(A.begin(),A.end(),b)!=A.end()){
            A.push_back(a);
        }
    }
    cout << A.size();
    return 0;
}