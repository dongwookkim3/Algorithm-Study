#include <vector>
#include <algorithm>
using namespace std;
int solution(vector<string> s1, vector<string> s2){
    int m=0;
    for (int i=0;i<s1.size();i++){
        if (find(s2.begin(),s2.end(),s1[i])!=s2.end()){
            m++;
        }
    }
    return m;
}