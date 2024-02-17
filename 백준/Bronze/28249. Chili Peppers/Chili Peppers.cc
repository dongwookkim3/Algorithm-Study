#include <iostream>
using namespace std;
int main(){
    int n,m=0;
    cin >> n;
    while(n--){
        string A;
        cin >> A;
        if (A=="Poblano") m+=1500;
        else if (A=="Mirasol") m+=6000;
        else if (A=="Serrano") m+=15500;
        else if (A=="Cayenne") m+=40000;
        else if (A=="Thai") m+=75000;
        else m+=125000;
    }
    cout << m;
    return 0;
}