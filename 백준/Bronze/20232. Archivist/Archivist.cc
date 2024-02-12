#include <iostream>
#define MAX 25
using namespace std;
int main(){
    string A[MAX]={"ITMO","SPbSU","SPbSU","ITMO","ITMO","SPbSU","ITMO","ITMO","ITMO","ITMO","ITMO","PetrSU, ITMO","SPbSU","SPbSU","ITMO","ITMO","ITMO","ITMO","SPbSU","ITMO","ITMO","ITMO","ITMO","SPbSU","ITMO"};
    int n;
    cin >> n;
    cout << A[n-1995];
    return 0;
}