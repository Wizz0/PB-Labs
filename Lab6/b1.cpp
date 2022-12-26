//B1

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

string solve(string s)
{
    int wordSize=0;
    int maxSize=0;
    int x=0;
    for (int i = 0; i<s.size(); i++) {
        if (s[i] != ' ') {
            wordSize++;
        }
        else if ((s[i] == ' ') or (i==s.size()-1)) {
            if (wordSize >= maxSize) {
                maxSize = wordSize;
                x = i-wordSize;
                }
            wordSize = 0;
        }
    }
    
    return s.substr(x,maxSize);
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve("A jack of all trades is a master of none") == "master");
    CHECK(solve("An idle brain is devils workshop") == "workshop");
    CHECK(solve("Once bitten twice shy") == "bitten");    
    CHECK(solve("The grass is greener on the other side of fence") == "greener");
}

//??????? 4 ?????
//?????????? ?????????? ??????!
TEST_CASE("Student's tests"){
        
}

// main ???????? ?? ????-?????
// int main()
// {

// }
