#include <iostream>
#include <cstring>
using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore();

    char arr[50][100];

    for(int i=0; i<n; i++)
        cin.getline(arr[i], 100);

    // Bubble Sort
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
            if(strcmp(arr[j], arr[j+1]) > 0)
                swap(arr[j], arr[j+1]);

    cout << "Sorted Strings:\n";
    for(int i=0; i<n; i++)
        cout << arr[i] << endl;

    return 0;
}
