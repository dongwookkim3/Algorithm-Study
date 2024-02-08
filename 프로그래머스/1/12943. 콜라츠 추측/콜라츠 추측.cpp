using namespace std;
int solution(int num){
    int i;
    long long n=num;
    for (i=0;n!=1 && i<=500;i++){
        if (n%2==0){
            n/=2;
        }
        else {
            n=n*3+1;
        }
    }
    if (i<500){
        return i;
    }
    else {
        return -1;
    }
}