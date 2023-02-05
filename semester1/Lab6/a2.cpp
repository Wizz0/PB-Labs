//A2

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

int solve(string s)
{
    int res=0;
    for (int i=0; i<s.size(); i++){
        if (i==0 and (s[i]=='A' or s[i]=='a')){
            res++;
        }
        else if (s[i-1]==' ' and (s[i]=='A' or s[i]=='a')){
            res++;
        }
    }
    return res;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve("Madam, I’m Adam")==1);
    CHECK(solve("An apple is a fruit of all fruits")==4);
    CHECK(solve("i love algorithms and automata do you")==3);    
}

TEST_CASE("Student's tests"){
    CHECK(solve("As soon as possible")==2);
    CHECK(solve("a banana")==1);
    CHECK(solve("Come as you are, as you were, as I want you to be, as a friend, as a friend, as an old enemy")==10);
    CHECK(solve("Take your time, hurry up, choice is yours, don't be late, take a rest as a friend, as an old memoria")==5);
}


// int main()
// {

// }
