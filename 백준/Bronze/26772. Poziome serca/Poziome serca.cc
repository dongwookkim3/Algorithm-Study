#include <iostream>
#define MAX 9
using namespace std;
int main(){
    string A[MAX]={" @@@   @@@ ","@   @ @   @","@    @    @","@         @"," @       @ ","  @     @  ","   @   @   ","    @ @    ","     @     "};
    int n;
    cin >> n;
    for (int i=0;i<MAX;i++){
        for (int j=0;j<n;j++){
            cout << A[i] << ' ';
        }
        cout << "\n";
    }
    return 0;
}