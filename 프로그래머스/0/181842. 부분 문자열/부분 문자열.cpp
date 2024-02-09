#include <string>
using namespace std;
int solution(string str1, string str2){
    return (str2.find(str1)!=string::npos);
}