#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    strrev(str);

    cout << "Reversed: " << str;
    return 0;
}
