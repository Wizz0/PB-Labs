//B2

#include <iostream>
#include <cstring>

using namespace std;

void transform(char* str){
    int len = strlen(str);
    char c = 'a';
    for (int i=0; i<len; i++){
        if (str[i]=='*'){
            str[i] = c;
            c++;
        }
    }
}
int main(){
    char str[100];
    cin.getline(str,100);
    transform(str);
    cout << str;
}