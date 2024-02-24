#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
int main(){
    vector<long long> A;
    long long n;
    cin >> n;
    for (long long i=2;i<sqrt(n);i++){
        while(n%i==0){
            A.push_back(i);
            n/=i;
        }
    }
    if (A.empty()){
        cout << "1\n" << n;
        return 0;
    }
    cout << A.size()+bool(n>=A.back()) << "\n";
    for (int i=0;i<A.size();i++){
        cout << A[i] << ' ';
    }
    if (n>=A.back()){
        cout << n;
    }
    return 0;
}