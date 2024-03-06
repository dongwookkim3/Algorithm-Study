#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
    string A;
    int m=1;
    cin >> A;
    for (int i=0;i<A.length();i++){
        if (A.substr(i,to_string(m).length())!=to_string(m)){
            cout << -1;
            return 0;
        }
        m++;
    }
    cout << m-1;
    return 0;
}