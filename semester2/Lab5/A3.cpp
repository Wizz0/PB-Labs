//A3

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

int main() {
    ifstream fin("input.txt");
    ofstream fout("output.txt");

    int n;
    fin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        fin >> v[i];
    }

    int swaps = 0;
    for (int i = n - 1; i >= 0; i--) {
        int maxI = i;
        for (int j = i - 1; j >= 0; j--) {
            if (v[j] > v[maxI]) {
                maxI = j;
            }
        }
        if (maxI != i) {
            swap(v[i], v[maxI]);
            swaps++;
        }
        for (int k = 0; k < n; k++) {
            fout << v[k] << " ";
        }
        fout << endl;
    }

    fout << "Swaps: " << swaps << endl;

    fin.close();
    fout.close();
    return 0;
}
