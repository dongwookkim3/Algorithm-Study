using namespace std;
int solution(int n){
    int a=0;
    for (int i=1;i<=n;i++){
        int m=0;
        for (int j=1;j<=i;j++){
            if (i%j==0){
                m++;
            }
        }
        if (m>=3){
            a++;
        }
    }
    return a;
}