#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char str[100];
    cin.getline(str, 100);

    int count = 0;
    int len = strlen(str);

    for(int i = 0; i < len; i++) {
        char ch = tolower(str[i]);
        if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
            count++;
    }

    cout << "Vowels = " << count;
    return 0;
}
