#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100], rev[100];

    cin.getline(str, 100);

    strcpy(rev, str);
    strrev(rev);

    if(strcmp(str, rev) == 0)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
