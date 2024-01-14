#define MAX 31
int A[MAX+1][MAX+1]={};
int solution(int n,int m){
    for (int i=1;i<=MAX;i++){
        for (int j=1;j<=i;j++){
            if (i==j || j==1){
                A[i][j]=1;
            }
            else {
                A[i][j]=A[i-1][j]+A[i-1][j-1];
            }
        }
    }
    return A[++n][++m];
}