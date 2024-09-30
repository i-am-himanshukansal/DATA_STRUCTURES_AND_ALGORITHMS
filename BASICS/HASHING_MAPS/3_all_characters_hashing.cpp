#include <iostream>
#include <bits/stdc++.h> 
using namespace std;

int main() {
    string s;
    cout << "Enter string: ";
    cin >> s;

    int hash[256] = {0};
    for (int i = 0; i < s.size(); i++) {
        hash[s[i]]++; 
        }
    for (int i = 0; i < 256; i++) {
           if(hash[i]>0){
             cout << "Frequency of the character '" << char(i) << "' : " << hash[i] << endl;
           }
    }

    return 0;
}
