#include <iostream>
using namespace std;
int main(){
    int n;
    string A;
    cin >> n >> A;
    while(!A.empty() && A.front()!='I'){
        A.erase(A.begin());
    }
    while(!A.empty() && A.back()!='I'){
        A.pop_back();
    }
    if (A.length()>=3 && A.find('O')!=string::npos){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
    return 0;
}