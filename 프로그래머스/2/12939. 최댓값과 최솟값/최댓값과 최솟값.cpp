#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;
string solution(string s){
    vector<int> A;
    string B;
    istringstream iss(s);
    while(getline(iss,B,' ')){
        A.push_back(stoi(B));
    }
    sort(A.begin(),A.end());
    return to_string(A[0])+' '+to_string(A[A.size()-1]);
}