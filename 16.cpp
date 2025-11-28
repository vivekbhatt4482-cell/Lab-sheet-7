#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[200];
    cin.getline(str, 200);

    int len = strlen(str);
    int words = 0;

    for(int i = 0; i < len; i++)
        if(str[i] == ' ')
            words++;

    if(len > 0) words++;  // last word

    cout << "Total words = " << words;
    return 0;
}
