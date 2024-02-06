#include <string>
#include <vector>
using namespace std;
vector<int> solution(vector<string> strlist){
    vector<int> A;
    for (int i=0;i<strlist.size();i++){
        A.push_back(strlist[i].length());
    }
    return A;
}