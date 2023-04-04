//B3

#include <iostream>

using namespace std;

int range(int* a, int n){
    int min = a[0];
    int max = a[0];
    for (int i=0; i<n; i++){
        if (a[i] < min)
            min = a[i];
        if (a[i] > max)
            max = a[i];
    }
    return max - min;
}

int main(){
    int n; cin >> n;
    int a[n];
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    cout << range(a, n);
}