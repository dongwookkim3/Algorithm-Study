#include <iostream>
#include <vector>
using namespace std;
int main(){
    int n,m,s=0;
    cin >> n >> m;
    while(n--){
        string A;
        cin >> A;
        for (int i=0;i<m;i++){
            if (A[i]=='+'){
                s++;
                break;
            }
        }
    }
    cout << s;
    return 0;
}