#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    string s1 = "";
    for (int i = 0; i < s.length(); i++) {
        if ((s[i] >= 48 && s[i] <= 57) || (s[i] >= 65 && s[i] <= 90) || (s[i] >= 97 && s[i] <= 122)) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] = s[i] + 32;
            }
            s1 += s[i];
        }
    }
    for (int j = 0; j < s1.length(); j++) {
        if (s1[j] != s1[s1.length() - j - 1]) {
            return false;;
        }
    }
    return true;
}

int main() {
    
    cout << endl;
    system("pause");
    return 0;
}