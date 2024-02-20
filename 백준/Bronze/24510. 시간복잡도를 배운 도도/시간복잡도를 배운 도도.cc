#include <iostream>
#define MAX 2
using namespace std;
int main(){
    string B[MAX]={"for","while"};
    int n,m=0;
    cin >> n;
    while(n--){
        int s=0;
        string A;
        cin >> A;
        for (int i=0;i<A.length();i++){
            for (int j=0;j<MAX;j++){
                if (A.substr(i,B[j].length())==B[j]){
                    s++;
                }
            }
        }
        if (s>m){
            m=s;
        }
    }
    cout << m;
    return 0;
}