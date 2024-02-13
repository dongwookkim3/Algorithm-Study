#include <iostream>
#include <cmath>
using namespace std;
int main(){
    string n;
    long long A=1,B=1,z=0;
    cin >> n;
    if (n.length()==1){
        cout << "NO";
        return 0;
    }
    for (int i=0;i<n.length();i++){
        if (n[i]==48) z++;
        B*=n[i]-48;
    }
    if (z==1){
        cout << "NO";
        return 0;
    }
    else if (z>=2){
        cout << "YES";
        return 0;
    }
    for (int i=0;i<n.length();i++){
        A*=n[i]-48;
        B/=n[i]-48;
        if (A==B){
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}