//A2

//Напишите программу, которая вводит с клавиатуры один символ, и выводит DIGIT, этот
//символ является цифрой, CAPITAL — если за- главной латинской буквой, LOWERCASE — если
//строчной, и выводит NON-ALPHANUMERIC в противном случае.

#include <iostream>
using namespace std;

int main() {
    char x;
    cin >> x;
    if (x>='0' and x<='9') {
        cout << "DIGIT";
    }
    else if (x>='A' and x<='Z'){
        cout << "CAPITAL";
    }
    else if (x>='a' and x<='z'){
        cout << "LOWERCASE";
    }
    else {
        cout << "NON-ALPHANUMERIC";
    }
}
