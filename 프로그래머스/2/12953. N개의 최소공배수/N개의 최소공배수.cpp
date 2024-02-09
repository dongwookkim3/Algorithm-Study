#include <vector>
using namespace std;
int GCD(int A,int B){
    if (B==0) return A;
    else return GCD(B,A%B);
}
int LCM(int A,int B){
    return A*B/GCD(A,B);
}
int solution(vector<int> arr){
    for (int i=1;i<arr.size();i++){
        arr[i]=LCM(arr[i-1],arr[i]);
    }
    return arr[arr.size()-1];
}