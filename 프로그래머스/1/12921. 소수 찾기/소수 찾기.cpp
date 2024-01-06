#include <string>
#include <vector>
#define MAX 1000000
using namespace std;
int solution(int n){
    int answer=0;
    int A[MAX+1]={1,1};
    for (long long i=2;i*i<=MAX;i++){
        if (A[i]==0){
            for (long long j=i*i;j<=MAX;j+=i){
                A[j]=1;
            }
        }
    }
    for (int i=1;i<=n;i++){
        if (A[i]==0) answer++;
    }
    return answer;
}