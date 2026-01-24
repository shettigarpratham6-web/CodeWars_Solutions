#include <iostream>
#include <string>

using namespace std;

int getCount(const string& inputStr) {
    int num_vowels = 0;
    int len = inputStr.size();

    for (int i = 0; i < len; i++) {
        if (inputStr[i] == 'a' || inputStr[i] == 'e' ||
            inputStr[i] == 'i' || inputStr[i] == 'o' ||
            inputStr[i] == 'u') {
            num_vowels++;
        }
    }

    return num_vowels;
}

int main() {
    string s;
    cin >> s;                
    cout << getCount(s);      
    return 0;
}
