//A2

//#define NDEBUG
#include<cassert>
#include<iostream>

using namespace std;

bool is_pal(double a[],int size){
    int n = size-1;
    for (int i=0; i<n; i++){
        if (a[i] != a[n]){
            return false;
        }
        n--;
    }
    return true;
}
int main()
{
    //Dulustan's tests
    {
        {
            double a[]{1,2,3,2,1};        
            assert(is_pal(a, 5));
        }
        
        {
            double a[]{1,-2,3,4,999,4,3,-2,1};        
            assert(is_pal(a, 9));
        }
        
        {
            double a[]{1,2,3,3,1};        
            assert(!is_pal(a, 5));
        }
                
        {
            double a[]{-77,23,365,366,23,-77};        
            assert(!is_pal(a, 6)); 
        }        

        cout << "SUCCESS!" << endl;
    }

    //Сделайте 2 позитивных и 2 негативных теста
    //Student's tests
    {        
        {
            double a[]{1,2,3,4,5};
            assert(!is_pal(a,5));
        }
        {
            double a[]{10,20,31,12};
            assert(!is_pal(a,4));
        }
        {
            double a[]{1,1,1,1,1};
            assert(is_pal(a,5));
        }
        {
            double a[]{9,8,7,6,7,8,9};
            assert(is_pal(a,7));
        }
        cout << "SUCCESS!" << endl;
    }
}