#include <iostream>
#define MAX 3
using namespace std;
int main(){
    string A[MAX]={"pi","ka","chu"};
    string B;
    cin >> B;
    for (int i=0;i<B.length();i++){
        for (int j=0;j<MAX;j++){
            if (B.substr(i,A[j].length())==A[j]){
                i+=A[j].length()-1;
                break;
            }
            else if (j==MAX-1){
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
    return 0;
}