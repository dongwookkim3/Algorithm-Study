using namespace std;
int solution(int n){
    int m=0;
    for (int i=1;i<=n;i++){
        if (n%2 && i%2) m+=i;
        else if (!(n%2) && !(i%2)) m+=i*i;
    }
    return m;
}