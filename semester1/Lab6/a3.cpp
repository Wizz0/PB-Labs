//A3

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

bool solve(string s)
{
    string onlyWords;
    for (int i=0; i<s.size(); i++){
        if ((s[i]>='A' and s[i]<='Z') or (s[i]>='a' and s[i]<='z')){
            onlyWords.push_back(s[i]);
        }
    }
    
    bool res=true;
    for(int i=0; 2*i < onlyWords.size()-1; i++){
		if(tolower(onlyWords[i]) != tolower(onlyWords[onlyWords.size()-1-i])){
			res = false;
			break;
		}
	}
	if (res){
	    return true;
	}
	else return false;
}

TEST_CASE("Dulustan's tests"){
    CHECK(solve("F"));
    CHECK(solve("Madam, I’m Adam"));
    CHECK(solve("Do geese see God?"));
    CHECK(solve("No lemon, no melon"));
    CHECK(solve("Are we not drawn onward, we few, drawn onward to new era?"));  
    CHECK(!solve("Was it cat I saw?"));    
    CHECK(!solve("Borrow or robi"));    
    CHECK(!solve("xyztyx"));  
}

//??????? 2 ????????????? ????? ? 2 ????????????? ?????
//?????????? ?????????? ??????!
TEST_CASE("Student's tests"){
    CHECK(solve("Bob"));
    CHECK(solve("As I pee sir, I see Pisa!"));
    CHECK(!solve("Dima, delai istoriyu"));
    CHECK(!solve("Chort"));
}

// main ???????? ?? ????-?????
// int main()
// {

// }
