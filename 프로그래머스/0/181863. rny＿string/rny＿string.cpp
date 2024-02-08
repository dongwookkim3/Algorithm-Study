#include <string>
using namespace std;
string solution(string rny_string){
    for (int i=0;i<rny_string.length();i++){
        if (rny_string[i]=='m'){
            rny_string.erase(i,1);
            rny_string.insert(i,"rn");
        }
    }
    return rny_string;
}