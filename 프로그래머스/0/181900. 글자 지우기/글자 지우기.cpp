#include <string>
#include <vector>
#include <algorithm>
using namespace std;
string solution(string my_string, vector<int> indices){
    string A;
    sort(indices.begin(),indices.end());
    for (int i=0;i<my_string.length();i++){
        if (!binary_search(indices.begin(),indices.end(),i)){
            A+=my_string[i];
        }
    }
    return A;
}