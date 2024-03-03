#include <iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    while(n--){
        string A,B;
        int m=0;
        cin >> A >> B;
        for (int i=0;i<A.length();i++){
            if (A.substr(i,B.length())==B){
                i+=B.length()-1;
            }
            m++;
        }
        cout << m << "\n";
    }
    return 0;
}