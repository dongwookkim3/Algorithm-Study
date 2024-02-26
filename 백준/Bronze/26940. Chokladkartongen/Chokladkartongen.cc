#include <iostream>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    int n,m=0;
    cin >> n;
    while(n--){
        int b;
        cin >> b;
        if (!A.empty() && b>A.back()){
            m++;
        }
        A.push_back(b);
    }
    cout << m;
    return 0;
}