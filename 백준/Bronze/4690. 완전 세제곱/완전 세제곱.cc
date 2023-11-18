#include <iostream>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	for (int i=1;i<=100;i++){
		for (int j=2;j*j*j<=i*i*i;j++){
			for (int k=j+1;j*j*j+k*k*k<=i*i*i;k++){
				for (int l=k+1;j*j*j+k*k*k+l*l*l<=i*i*i;l++){
					if (j*j*j+k*k*k+l*l*l==i*i*i){
						cout << "Cube = " << i << ", Triple = (" << j << ',' << k << ',' << l << ")\n";
					}
				}
			}
		}
	}
	return 0;
}