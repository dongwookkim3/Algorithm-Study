#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string A;
        int a,b;
        cin >> A >> a >> b;
        A.erase(A.begin()+a,A.begin()+b);
        cout << A << "\n";
    }
    return 0;
}