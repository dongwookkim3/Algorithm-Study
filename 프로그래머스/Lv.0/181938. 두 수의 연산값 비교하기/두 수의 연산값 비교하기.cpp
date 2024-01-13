#include <string>
#include <algorithm>
using namespace std;
int solution(int a,int b){
    string A;
    A+=to_string(a),A+=to_string(b);
    return max(2*a*b,stoi(A));
}