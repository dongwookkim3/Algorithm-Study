using namespace std;
long long solution(long long n){
    for (unsigned long long i=1;;i++){
        if (i*i==n){
            return (i+1)*(i+1);
        }
        else if (i*i>n){
            return -1;
        }
    }
}