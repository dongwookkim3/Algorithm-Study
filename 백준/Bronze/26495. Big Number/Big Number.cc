#include <iostream>
using namespace std;
int main(){
  string A;
  getline(cin,A);
  for (int i=0;i<A.length();i++){
    if (A[i]=='0'){
      cout << "0000\n"  << "0  0\n" << "0  0\n" << "0  0\n" << "0000\n";
    }
    else if (A[i]=='1'){
      cout << "   1\n"  << "   1\n" << "   1\n" << "   1\n" << "   1\n";
    }
    else if (A[i]=='2'){
      cout << "2222\n"  << "   2\n" << "2222\n" << "2\n" << "2222\n";
    }
    else if (A[i]=='3'){
      cout << "3333\n"  << "   3\n" << "3333\n" << "   3\n" << "3333\n";
    }
    else if (A[i]=='4'){
      cout << "4  4\n"  << "4  4\n" << "4444\n" << "   4\n" << "   4\n";
    }
    else if (A[i]=='5'){
      cout << "5555\n"  << "5\n" << "5555\n" << "   5\n" << "5555\n";
    }
    else if (A[i]=='6'){
      cout << "6666\n"  << "6\n" << "6666\n" << "6  6\n" << "6666\n";
    }
    else if (A[i]=='7'){
      cout << "7777\n"  << "   7\n" << "   7\n" << "   7\n" << "   7\n";
    }
    else if (A[i]=='8'){
      cout << "8888\n"  << "8  8\n" << "8888\n" << "8  8\n" << "8888\n";
    }
    else if (A[i]=='9'){
      cout << "9999\n"  << "9  9\n" << "9999\n" << "   9\n" << "   9\n";
    }
    cout << "\n";
  }
  return 0;
}