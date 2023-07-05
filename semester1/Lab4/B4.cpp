//B4

//Напишите функцию int my_gcd(int a, int b), которая находит НОД (наибольший общий
//делитель) чисел a и b. Используйте реализацию алгоритма Евклида через цикл while.
//Напишите функцию void simplify(int &num, int &denom), которая сокращает дробь
//num/denom , используя написанную вами функцию my_gcd. Также напишите функцию main,
//чтобы она делала ввод числителя и знаменателя, и выводила числитель и знаменатель
//сокращенной дроби. А само сокращение должно делаться через вашу функцию.
//Надо unit-тестировать обе функции my_gcd и simplify.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

int my_gcd(int a, int b)
{
    int res = 0;
    while (a != b){
        if (a>b){
            a = a -b;
        }
        else if (b>a){
            b = b -a;
        }
    }
    return a;
}
void simplify(int &num, int &denom)
{
    int x = my_gcd(num, denom);
    num = num / x;
    denom = denom / x;
}

/*
int main()
{
    
}
*/

TEST_CASE("Dulustan's tests GCD"){
    CHECK(my_gcd(12,20)==4);
    CHECK(my_gcd(35,56)==7);
    CHECK(my_gcd(100,9900)==100);
    CHECK(my_gcd(999,2775)==111);   
}

TEST_CASE("Student's tests GCD"){
	CHECK(my_gcd(5,20)==5);
	CHECK(my_gcd(13,26)==13);
	CHECK(my_gcd(6,3)==3);
	CHECK(my_gcd(100,20)==20);
	CHECK(my_gcd(11000,11)==11);
}

TEST_CASE("Dulustan's tests Simplify"){
    int a=15, b=20;
    simplify(a,b);
    CHECK(a==3); CHECK(b==4);

    a=48, b=120; 
    simplify(a,b);  
    CHECK(a==2); CHECK(b==5);

    a=1680, b=4620; 
    simplify(a,b);  
    CHECK(a==4); CHECK(b==11);   
}

TEST_CASE("Student's tests GCD"){
    int a=34, b=6;
    simplify(a,b);
    CHECK(a==17); CHECK(b==3);
    
    a=100, b=50;
    simplify(a,b);
    CHECK(a==2); CHECK(b==1);
    
    a=66, b=3;
    simplify(a,b);
    CHECK(a==22); CHECK(b==1);
    
    a=580, b=80;
    simplify(a,b);
    CHECK(a==29); CHECK(b==4);
    
    a=12345, b=123;
    simplify(a,b);
    CHECK(a==4115); CHECK(b==41);
}
