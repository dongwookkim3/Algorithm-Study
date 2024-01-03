#include <iostream>
#include <cmath>
using namespace std;
bool f(long long n){
	for (int i=2;i<=sqrt(n);i++){
		if (n%i==0){
			return 1;
		}
	}
	return 0;
}
int main(){
	ios_base :: sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n;
    cin >> n;
    while(n--){
    	long long A;
    	cin >> A;
    	cout << A << ": ";
    	if (!f(A)){
    		cout << "prime";
		}
		else {
			for (int i=2;;i++){
				while (A%i==0){
					cout << i << ' ';
					A/=i;
				}
				if (!f(A)){
					cout << A;
					break;
				}
			}
		}
		cout << "\n";
	}
	return 0;
}