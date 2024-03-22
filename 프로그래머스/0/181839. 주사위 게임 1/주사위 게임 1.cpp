#include <algorithm>
using namespace std;
int solution(int a, int b){
    if (a%2 && b%2){
        return a*a+b*b;
    }
    else if (a%2 || b%2){
        return 2*(a+b);
    }
    return abs(a-b);
}