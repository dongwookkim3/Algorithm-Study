#include <vector>
#include <cmath>
#include <iostream>
#include <algorithm>
using namespace std;
vector<int> solution(int brown, int yellow){
    vector<int> A;
    for (int i=2;i<=sqrt(brown+yellow);i++){
        if ((brown+yellow)%i==0){
            A.push_back((brown+yellow)/i);
        }
    }
    sort(A.begin(),A.end(),greater<int>());
    for (int i=0;i<A.size();i++){
        int m=(brown+yellow)/A[i]-2;
        if ((A[i]-2)*m==yellow){
            return {A[i],m+2};
        }
    }
}