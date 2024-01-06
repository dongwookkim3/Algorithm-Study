#include <vector>
#include <iostream>
#define MAX 50000
using namespace std;

int solution(vector<int> nums) {
    int answer=0;
    int A[MAX+1]={};
    for (int i=2;i*i<=MAX;i++){
        if (A[i]==0){
            for (int j=i*i;j<=MAX;j+=i){
                A[j]=1;
            }
        }
    }
    for (int i=0;i<nums.size();i++){
        for (int j=i+1;j<nums.size();j++){
            for (int k=j+1;k<nums.size();k++){
                if (A[nums[i]+nums[j]+nums[k]]==0){
                    answer++;
                }
            }
        }
    }
    return answer;
}