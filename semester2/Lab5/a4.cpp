//A4

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
    for (int i = 1; i < n; i++) {
        int j = i;
        while (j > 0 && v[j] > v[j - 1]) {
            swap(v[j], v[j - 1]);
            swaps++;
            j--;
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
