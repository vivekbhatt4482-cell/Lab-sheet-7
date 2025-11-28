#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);

    int result = strcmp(s1, s2);

    if(result == 0)
        cout << "Strings are equal";
    else if(result < 0)
        cout << "First string is smaller";
    else
        cout << "First string is greater";

    return 0;
}
