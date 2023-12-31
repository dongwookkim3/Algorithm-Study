#include <iostream>
using namespace std;
int f(int n){
    if (n>9) return n%10+f(n/10);
    else return n;
}
int solution(int n){
    int answer = 0;
    answer=f(n);
    return answer;
}