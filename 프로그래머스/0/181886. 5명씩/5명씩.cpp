#include <string>
#include <vector>
using namespace std;
vector<string> solution(vector<string> names){
    vector<string> A;
    for (int i=0;i<names.size();i+=5){
        A.push_back(names[i]);
    }
    return A;
}