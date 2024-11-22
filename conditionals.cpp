#include <iostream>
#include <string>

using namespace std;

int main() {
    string name;
    cout << "What's your name? ";
    cin >> name;

    if (name == "Alice" || name == "Bob") {
        cout << "Hello, " << name << "! Welcome back!" << endl;
    }
    else {
        cout << "Hello, " << name << "!" << endl;
    }

    return 0;
}
