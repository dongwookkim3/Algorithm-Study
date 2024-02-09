#include <string>
#include <vector>
#include <sstream>
using namespace std;
vector<string> solution(string my_string){
    vector<string> A;
    string B;
    istringstream iss(my_string);
    while(getline(iss,B,' ')){
        if (B!=""){
            A.push_back(B);
        }
    }
    return A;
}