#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    cin.getline(str1, 100);

    strcpy(str2, str1);

    cout << "Copied String: " << str2;
    return 0;
}
