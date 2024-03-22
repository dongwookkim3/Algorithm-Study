#include <string>
using namespace std;
string solution(string n_str){
    while(n_str.front()=='0'){
        n_str.erase(n_str.begin());
    }
    return n_str;
}