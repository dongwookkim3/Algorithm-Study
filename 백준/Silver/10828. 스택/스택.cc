#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int N;
    cin >> N;
    cin.ignore();  // 입력 버퍼 비우기

    stack<int> s;

    for (int i = 0; i < N; i++) {
        string command;
        getline(cin, command);

        if (command.substr(0, 4) == "push") {
            int X = stoi(command.substr(5));
            s.push(X);
        } else if (command == "pop") {
            if (!s.empty()) {
                cout << s.top() << "\n";
                s.pop();
            } else {
                cout << -1 << "\n";
            }
        } else if (command == "size") {
            cout << s.size() << "\n";
        } else if (command == "empty") {
            cout << (s.empty() ? 1 : 0) << "\n";
        } else if (command == "top") {
            if (!s.empty()) {
                cout << s.top() << "\n";
            } else {
                cout << -1 << "\n";
            }
        }
    }

    return 0;
}
