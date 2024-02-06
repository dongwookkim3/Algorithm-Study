#include <string>
using namespace std;
int solution(string str1, string str2){
    if (str1.find(str2)!=string::npos){
        return 1;
    }
    else {
        return 2;
    }
}