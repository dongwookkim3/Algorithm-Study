#include <string>
#include <vector>
using namespace std;
vector<string> solution(vector<string> strArr){
    for (int i=0;i<strArr.size();i++){
        for (int j=0;j<strArr[i].length();j++){
            if (i%2==0){
                if (strArr[i][j]<=90){
                    strArr[i][j]+=32;
                }
            }
            else {
                if (strArr[i][j]>90){
                    strArr[i][j]-=32;
                }
            }
        }
    }
    return strArr;
}