//A5

//Напишите функцию bool perfect(int n), которая принимает целое число n и проверяет,
//является ли оно совершенным числом. Совершенное число — число, равное сумме всех
//своих делителей.
//Напишите с ее помощью программу, которая вводит целые числа 0 < M ⩽ N и выводит
//все совершенные числа на диапазоне [M,N ] в порядке возрастания.
//Пример.
//Ввод: 3 500 Вывод: 6 28 496
//Надо unit-тестировать только функцию perfect.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

bool perfect(int n)
{
    int s=0;
    if (n==0){
    	return false;
	}
	
	for (int i=1; i<n; i++){
        if (n%i == 0){
            s+=i;
        }
    }
    if (s == n)
        return true;
    else
        return false;
}

//int main()
//{
   
//}


TEST_CASE("Dulustan's tests"){
    CHECK(perfect(6));
    CHECK(perfect(28));
    CHECK(perfect(496));
    CHECK(perfect(8128));
    CHECK(!perfect(36));
    CHECK(!perfect(490));
    CHECK(!perfect(812));
    CHECK(!perfect(6458));
}

TEST_CASE("Student's tests"){
    CHECK(perfect(33550336));
    CHECK(!perfect(12));
    CHECK(!perfect(13));
    CHECK(!perfect(14));
    CHECK(!perfect(15));
    CHECK(!perfect(100));
    CHECK(!perfect(1));
    CHECK(!perfect(-1));
    CHECK(!perfect(0));
}
