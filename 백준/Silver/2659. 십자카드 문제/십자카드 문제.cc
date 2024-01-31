#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main(){
    vector<int> A;
    for (int i=1;i<=9;i++){
        for (int j=1;j<=9;j++){
            for (int k=1;k<=9;k++){
                for (int l=1;l<=9;l++){
                    int MIN=min(min(i*1000+j*100+k*10+l,j*1000+k*100+l*10+i),min(k*1000+l*100+i*10+j,l*1000+i*100+j*10+k));
                    A.push_back(MIN);
                }
            }
        }
    }
    sort(A.begin(),A.end());
    A.erase(unique(A.begin(),A.end()),A.end());
    int B[8]={};
    for (int i=1;i<=4;i++){
        cin >> B[i];
    }
    for (int i=5;i<=7;i++){
        B[i]=B[i-4];
    }
    int MIN=9999;
    for (int i=1;i<=4;i++){
        if (MIN>B[i]*1000+B[i+1]*100+B[i+2]*10+B[i+3]){
            MIN=B[i]*1000+B[i+1]*100+B[i+2]*10+B[i+3];
        }
    }
    for (int i=0;i<A.size();i++){
        if (A[i]==MIN){
            cout << ++i;
            break;
        }
    }
    return 0;
}