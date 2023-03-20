//B1

//#define NDEBUG
#include<cassert>
#include<iostream>

using namespace std;

int wordcount(char* s){
    int res = 0;
    bool isWord = false;
    for (int i = 0; i < strlen(s); i++){
        if (s[i] == ' ' || s[i] =='\t' || s[i] == '\n'){
            isWord = false;
        }
        else if (!isWord){
            isWord = true;
            res++;
        }
    }
    return res;
}

int main()
{
    //Dulustan's tests
    {
        {
            char s[100] = "a bcd ef gg!";
            assert(wordcount(s) == 4);
        }
        
        {
            char s[100] = "captain, oh captain!!";
            assert(wordcount(s) == 3);
        }

        {
            char s[100] = "x xx xxx xxxxxxxxx x x x";    
            assert(wordcount(s) == 7);
        }

        cout << "SUCCESS!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {   
        {
            char s[100] = "Hello world!";
            assert(wordcount(s) == 2);
        }
        
        {
            char s[100] = "Remember the time that I spilled the cup";
            assert(wordcount(s) == 8);
        }
        
        {  
            char s[100] = "Of apple juice in the hall!";
            assert(wordcount(s) == 6);
        }
        
        cout << "SUCCESS!" << endl;
    }
}