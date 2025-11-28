#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], ch;
    cin.getline(str, 100);
    cin >> ch;

    char *pos = strrchr(str, ch);

    if(pos)
        cout << "Last found at position: " << (pos - str);
    else
        cout << "Character not found";

    return 0;
}
