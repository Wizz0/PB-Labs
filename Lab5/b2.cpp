//B2

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
#include <vector>
using namespace std;

vector<int> solve(vector<int> v)
{
    vector<int> w;
    for (int i = 0; i < v.size(); i++) {
	    bool notPrime = false;
	    for (int j = 2; j <= v[i]/2; j++){
	        if ((v[i]%j) == 0){
	            notPrime = true;
	        }
	    }
	    if (!notPrime or (v[i]==1)){
	        w.push_back(i);
	    }
    }
    return w;
}


TEST_CASE("Dulustan's tests"){
    CHECK(solve({1,2,3,4,5,6,7,8,9}) == vector<int>{0,1,2,4,6});       
    CHECK(solve({1,2,4,8,16,32,64}) == vector<int>{0,1});
    CHECK(solve({11,13,21,23,31,33,41,43,51,53,61,63}) == vector<int>{0,1,3,4,6,7,9,10});
    CHECK(solve({183,177,179,147,149,143,107}) == vector<int>{2,4,6});    
}

//??????? 4 ?????
TEST_CASE("Student's tests"){
   CHECK(solve({8,800,555,35,35,1}) == vector<int>{5}); 
   CHECK(solve({10,11,12,13,14}) == vector<int>{1,3});
   CHECK(solve({333,343,353,363,}) == vector<int>{2});
   CHECK(solve({88,89,80,13,27}) == vector<int>{1,3});
}

// main ???????? ?? ????-?????
// int main()
// {

// }
