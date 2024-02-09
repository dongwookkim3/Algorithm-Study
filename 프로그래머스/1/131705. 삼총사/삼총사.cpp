#include <vector>
using namespace std;
int solution(vector<int> number){
    int m=0;
    for (int i=0;i<number.size();i++){
        for (int j=i+1;j<number.size();j++){
            for (int k=j+1;k<number.size();k++){
                if (number[i]+number[j]+number[k]==0){
                    m++;
                }
            }
        }
    }
    return m;
}