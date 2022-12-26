//B2

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

int solve(string s)
{
    int size = 0;
    int max = 0;
    for (int i = 0; i<s.size(); i++) {
        if (s[i] == 'a' or s[i] == 'A') {
            size++;
        }
        else {
            if (size >= max){
                max = size;
            }
            size = 0;
        }
    }
    
    return max;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve("Laa A laaal LOL!") == 3);
    CHECK(solve("Arrrg aa cry aaaaaa yaaaa") == 6);
    CHECK(solve("AXAA AXAAXA AXXAAAXA AAAXAAAAAXAAAA AXAXAXAAXAAXA ") == 5);    
}

//??????? 4 ?????
//?????????? ?????????? ??????!
TEST_CASE("Student's tests"){
    CHECK(solve("AAye, stop bullying me :(") == 2);
    CHECK(solve("ayo ayo aayo aayo aaaaayo aaaaayo") == 5);
    CHECK(solve("HEHE HAHA") == 1);
    CHECK(solve("Yes, I believe in abaahy, like Yhaakh and live in D'okuuskay") == 2);
}

// main ???????? ?? ????-?????
// int main()
// {

// }
