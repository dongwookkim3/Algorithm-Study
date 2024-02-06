using namespace std;
int solution(int n){
    if (n>9) return solution(n/10)+n%10;
    else return n;
}