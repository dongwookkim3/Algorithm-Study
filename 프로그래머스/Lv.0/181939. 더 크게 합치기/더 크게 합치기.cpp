#include <string>
#include <algorithm>
using namespace std;
int solution(int a,int b){
    string A,B;
    A+=to_string(a),A+=to_string(b),B+=to_string(b),B+=to_string(a);
    return max(stoi(A),stoi(B));
}