//A1

//Дана строка, состоящая из латинских букв, цифр, пробелов и знаков пунктуации. Подсчитайте
//три числа: число заглавных латинских букв, число строчных латинских букв, число цифр во
//введенной строке и выведет эти три числа.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(string s)
{
    int lil = 0;
    int big = 0;
    int num = 0;
    for (int i=0; i < s.size(); i++){
        if (s[i] >= 'A' and s[i] <= 'Z'){
            big++;
        }
        else if (s[i] >= 'a' and s[i] <= 'z'){
            lil++;
        }
        else if (s[i] >= '0' and s[i] <= '9'){
            num++;
        }
    }
    vector<int> info(3);
    info[0] = big;
    info[1] = lil;
    info[2] = num;
    return info;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve("Wanted Dead or Alive 200000$") == vector<int>{3, 14, 6});
    CHECK(solve("One Piece 1997") == vector<int>{2, 6, 4});
    CHECK(solve("10! is 3628800") == vector<int>{0, 2, 9});    
}


TEST_CASE("Student's tests"){
    CHECK(solve("Hello world") == vector<int>{1, 9, 0});
    CHECK(solve("12345") == vector<int>{0, 0, 5});
    CHECK(solve("C3PO") == vector<int>{3, 0, 1});
    CHECK(solve("Im 21") == vector<int>{1, 1, 2});
}

// int main()
// {

// }
