//B3

//Цифровой корень натурального числа получается следующим образом: cкладываем все
//цифры данного числа — получаем новое число. Повторяем процесс, пока в результате не
//будет получено однозначное число, которое и называется цифровым корнем числа.
//Напишите функцию int digit_root(long long n), которое выводит цифровой корень
//числа n.
//Надо unit-тестировать эту функцию.

#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"

#include <iostream>
using namespace std;

long long digit_root(long long n)
{
    long long x=0;
    long long y=0;
    long long res = n;
    while (res > 9){
        x = n/10;
        y = n%10;
        res = x + y;
        n = res;
    }
    return res;
}


/*
int main()
{
    int m, n;
    cin >> m >> n;
    for (int i=m; i<=n; i++){
        cout << digit_root(i) << " ";
    }
    return 0;
}
*/


TEST_CASE("Dulustan's tests"){
    CHECK(digit_root(8)==8);
    CHECK(digit_root(25)==7);
    CHECK(digit_root(99)==9);
    CHECK(digit_root(987)==6);
    CHECK(digit_root(777'777'777'777)==3);
}


TEST_CASE("Student's tests"){
    CHECK(digit_root(1)==1);
    CHECK(digit_root(10)==1);
    CHECK(digit_root(100)==1);
    CHECK(digit_root(12345)==6);
    CHECK(digit_root(888'888'888'888)==6);
}
