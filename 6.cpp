#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fname[50], lname[50];
    cin.getline(fname, 50);
    cin.getline(lname, 50);

    strcat(fname, " ");
    strcat(fname, lname);

    cout << "Full Name: " << fname;
    return 0;
}
