#include <iostream>
#define MAX 100000
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    bool Prime[MAX]={true,true};
    for (long long i=2;i<MAX;i++){
        if (!Prime[i]){
            for (long long j=i*i;j<MAX;j+=i){
                Prime[j]=true;
            }
        }
    }
    string A;
    while(cin >> A && A!="0"){
        int m=0;
        for (int i=5;i>=1;i--){
            for (int j=0;j<=A.length()-i;j++){
                if (!Prime[stoi(A.substr(j,i))]){
                    m=max(m,stoi(A.substr(j,i)));
                }
            }
        }
        cout << m << "\n";
    }
    return 0;
}