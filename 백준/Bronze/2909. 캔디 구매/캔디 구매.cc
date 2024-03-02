#include <iostream>
#include <cmath>
using namespace std;
int main(){
    long long n,k;
    cin >> n >> k;
    for (int i=0;i<k;i++){
        while((n%(long long)pow(10,i+1))/(long long)pow(10,i)!=0){
            if ((n%(long long)pow(10,i+1))/(long long)pow(10,i)>=5){
                n+=pow(10,i);
            }
            else {
                n-=pow(10,i);
            }
        }
    }
    cout << n;
    return 0;
}