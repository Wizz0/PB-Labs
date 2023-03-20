//A1

//#define NDEBUG
#include<cassert>
#include<iostream>
using namespace std;

void sort3(double *a, double *b, double *c){
    double a1, b1, c1;
    if (*a <= *b && *b <= *c){
        a1 = *a;
        b1 = *b;
        c1 = *c;
    }
    else if (*a <= *c && *c <= *b){
        a1 = *a;
        b1 = *c;
        c1 = *b;
    }
    else if (*b <= *a && *a <= *c){
        a1 = *b;
        b1 = *a;
        c1 = *c;
    }
    else if (*b <= *c && *c <= *a){
        a1 = *b;
        b1 = *c;
        c1 = *a;
    }
    else if (*c <= *a && *a <= *b){
        a1 = *c;
        b1 = *a;
        c1 = *b;
    }
    else if (*c <= *b && *b <= *a){
        a1 = *c;
        b1 = *b;
        c1 = *a;
    }
    *a = a1;
    *b = b1;
    *c = c1;
}

int main()
{
    //Dulustan's tests
    {
        {
            double a=1, b=2, c=3;
            sort3(&a,&b,&c);
            assert(a==1 && b==2 && c==3);
        }
        
        {
            double a=-1, b=-2, c=-3;
            sort3(&a,&b,&c);
            assert(a==-3 && b==-2 && c==-1);
        }

        {
            double a=100, b=-10000, c=3.14;
            sort3(&a,&b,&c);
            assert(a==-10000 && b==3.14 && c==100);
        }

        cout << "SUCCESS!" << endl;
    }

    //Сделайте 3 теста
    //Student's tests
    {   
        {
            double a=10, b=-8.1, c=-499;
            sort3(&a,&b,&c);
            assert(a==-499 && b==-8.1 && c==10);
        }
        
        {
            double a=8800, b=555, c=3535;
            sort3(&a,&b,&c);
            assert(a==555 && b==3535 && c==8800);
        }
        
        {
            double a=0,b=0,c=-1;
            sort3(&a,&b,&c);
            assert(a==-1 && b==0 && c==0);
        }
        cout << "SUCCESS!" << endl;
    }
}