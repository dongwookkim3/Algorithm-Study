#include <string>
#include <vector>
using namespace std;
string solution(vector<int> list){
    string a;
    for (int i=1;i<list.size();i++){
        int m=list[i]-list[i-1];
        if (m==1) a+="w";
        else if (m==-1) a+="s";
        else if (m==10) a+="d";
        else if (m==-10) a+="a";
    }
    return a;
}