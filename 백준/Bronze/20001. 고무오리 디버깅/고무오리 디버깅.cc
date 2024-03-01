#include <iostream>
#include <vector>
using namespace std;
int main(){
    string A;
    int m=0;
    while(getline(cin,A) && A!="고무오리 디버깅 끝"){
        if (A=="문제"){
            m++;
        }
        else if (A=="고무오리"){
            if (m==0){
                m+=2;
            }
            else {
                m--;
            }
        }
    }
    if (m==0){
        cout << "고무오리야 사랑해";
    }
    else {
        cout << "힝구";
    }
    return 0;
}