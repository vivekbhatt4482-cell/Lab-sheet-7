#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main() {
    char s1[100], s2[100];
    cin.getline(s1, 100);
    cin.getline(s2, 100);

    // lengths different → not anagram
    if(strlen(s1) != strlen(s2)) {
        cout << "Not Anagrams";
        return 0;
    }

    // sort both strings
    sort(s1, s1 + strlen(s1));
    sort(s2, s2 + strlen(s2));

    if(strcmp(s1, s2) == 0)
        cout << "Anagrams";
    else
        cout << "Not Anagrams";

    return 0;
}
