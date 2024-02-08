#include <string>
using namespace std;
string solution(int n){
    string A;
    for (int i=0;i<n/2;i++){
        A+="수박";
    }
    if (n%2==1){
        A+="수";
    }
    return A;
}