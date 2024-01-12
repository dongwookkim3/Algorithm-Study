#include <string>
#include <vector>
using namespace std;
string solution(vector<string> A){
    string a;
    for (int i=0;i<A.size();i++){
        a+=A[i];
    }
    return a;
}