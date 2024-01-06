#include <string>
#include <iostream>
using namespace std;

bool solution(string s){
    int py=0;
    for (int i=0;i<s.length();i++){
        if (s[i]=='P' || s[i]=='p') py++;
        else if (s[i]=='Y' || s[i]=='y') py--;
    }
    if (py) return false;
    else return true;
}