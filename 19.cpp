#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char finalStr[300] = "";
    char temp[100];
    int n;

    cin >> n;
    cin.ignore();

    for(int i = 0; i < n; i++) {
        cin.getline(temp, 100);
        strcat(finalStr, temp);
        strcat(finalStr, " ");   // add space after each word
    }

    cout << "Joined sentence: " << finalStr;
    return 0;
}
