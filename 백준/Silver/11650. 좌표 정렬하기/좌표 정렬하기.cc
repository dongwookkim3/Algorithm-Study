#include <iostream>
#include <algorithm>
#define MAX 100000
using namespace std;
struct XY{
	int X;
	int Y;
};

bool cmp(const XY& A,const XY& B){
	if (A.X==B.X) return A.Y<B.Y;
    return A.X<B.X;
}
int main(){
	int n;
	cin >> n;
	XY XY[MAX];
	for (int i=0;i<n;i++){
		cin >> XY[i].X >> XY[i].Y;
	}
	sort(XY,XY+n,cmp);
	for (int i=0;i<n;i++){
		cout << XY[i].X << ' ' << XY[i].Y << "\n";
	}
	return 0;
}