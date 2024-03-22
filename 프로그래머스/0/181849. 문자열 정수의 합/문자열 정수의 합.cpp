#include <string>
using namespace std;
int solution(string num_str){
    int m=0;
    for (int i=0;i<num_str.length();i++){
        m+=num_str[i]-48;
    }
    return m;
}