//B2

#include<iostream>
#include<cstring>

using namespace std;

void strmult(char* str, int k) {
    int len = strlen(str);
    char* new_str = new char[len * k + 1];
    for (int i = 0; i < k; i++) {
        strcat(new_str, str);
    }
    strcpy(str, new_str);
}

int main() {
    char str[100];
    int k;
    cout << "Enter a string: ";
    cin.getline(str, 100);
    cout << "Enter a non-negative integer k: ";
    cin >> k;
    cin.ignore(); // добавляем эту строку
    strmult(str, k);
    cout << "Result: " << str << std::endl;
    return 0;
}