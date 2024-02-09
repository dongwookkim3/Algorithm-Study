#include <string>
using namespace std;
string solution(string my_string){
    for (int i=0;i<my_string.length();i++){
        if (my_string[i]>90){
            my_string[i]-=32;
        }
        else {
            my_string[i]+=32;
        }
    }
    return my_string;
}