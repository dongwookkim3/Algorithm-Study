#include <string>
#include <vector>
using namespace std;
vector<int> solution(vector<int> n,string d){
    vector<int> a;
    if (d=="right"){
        a.push_back(n[n.size()-1]);
        for (int i=0;i<n.size()-1;i++){
            a.push_back(n[i]);
        }
    }
    else {
        for (int i=1;i<n.size();i++){
            a.push_back(n[i]);
        }
        a.push_back(n[0]);
    }
    return a;
}