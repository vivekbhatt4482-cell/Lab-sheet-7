#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str1[100], str2[100];
    
    cin.getline(str1, 100);
    cin.getline(str2, 100);

    char *pos = strstr(str1, str2);

    if(pos)
        cout << "Substring found at position: " << (pos - str1);
    else
        cout << "Substring NOT found";

    return 0;
}
