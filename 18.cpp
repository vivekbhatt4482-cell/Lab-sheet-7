#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char s1[100], s2[100];
    cin.getline(s1, 100);

    strncpy(s2, s1, 5); 
    s2[5] = '\0';       // terminate the string manually

    cout << "Copied (first 5 chars): " << s2;
    return 0;
}
