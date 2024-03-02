#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int n;
    cin >> n;
    int l=to_string(n).length();
    for (int i=0;i<l-1;i++){
        while ((n%(int)pow(10,i+1))/pow(10,i)!=0){
            if ((n%(int)pow(10,i+1))/pow(10,i)>=5){
                n+=pow(10,i);
            }
            else {
                n-=pow(10,i);
            }
        }
    }
    cout << n;
}