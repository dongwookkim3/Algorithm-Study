#include <string>
#include <vector>
#define MAX 1000
using namespace std;
int solution(vector<int> array){
    int A[MAX]={};
    int m=0,mn=0;
    for (int i=0;i<array.size();i++){
        A[array[i]]++;
        if (A[array[i]]>m){
            m=A[array[i]];
        }
    }
    for (int i=0;i<MAX;i++){
        if (A[i]==m){
            mn++;
        }
    }
    if (mn==1){
        for (int i=0;i<MAX;i++){
            if (A[i]==m){
                return i;
            }
        }
    }
    else return -1;
}