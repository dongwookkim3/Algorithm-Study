#include <iostream>
using namespace std;
int main(){
    float K,D1,D2;
    cin >> K >> D1 >> D2;
    if (D1==D2){
        cout << K*K;
    }
    else {
        cout << K*K-((D1-D2)/2)*((D1-D2)/2);
    }
    return 0;
}