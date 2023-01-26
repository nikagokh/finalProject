#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> stak;
    string cmd;

    while (cin >> cmd) {
        if (cmd == "push") {
            int n;
            cin >> n;
            stak.push(n);
            cout << "ok" << endl;
        }

        if (cmd == "pop") {
            cout << stak.top() << endl;
            stak.pop();
        }

        if (cmd == "back") {
            cout << stak.top() << endl;
        }

        if (cmd == "size") {
            cout << stak.size() << endl;
        }

        if (cmd == "clear") {
            while (!stak.empty()) {
                stak.pop();
            }
            cout << "ok" << endl;
        }

        if (cmd == "exit") {
            cout << "bye" << endl;
            break;
        }
    }

    return 0;
}
