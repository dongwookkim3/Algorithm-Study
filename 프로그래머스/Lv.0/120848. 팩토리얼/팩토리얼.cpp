using namespace std;
int solution(int n){
    int m=1;
    for (int i=1;;i++){
        m*=i;
        if (m>n){
            return --i;
        }
    }
}