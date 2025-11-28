#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char mainStr[100], subStr[100];

    cin.getline(mainStr, 100);
    cin.getline(subStr, 100);

    if(strstr(mainStr, subStr))
        cout << "String found";
    else
        cout << "String not found";

    return 0;
}
