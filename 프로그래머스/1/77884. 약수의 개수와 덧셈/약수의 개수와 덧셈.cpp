using namespace std;
int solution(int left, int right){
    int m=0;
    for (int i=left;i<=right;i++){
        int n=0;
        if (i==1) m-=2;
        for (int j=2;j<i;j++){
            if (i%j==0){
                n++;
            }
        }
        if (n%2==0){
            m+=i;
        }
        else {
            m-=i;
        }
    }
    return m;
}