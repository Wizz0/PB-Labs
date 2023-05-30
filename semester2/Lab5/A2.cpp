//A1 нужно делать в тетради, в принципе можно "списать" и у
//input-файлов a2-a4, но в a4 немного по-другому

//A2

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
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (v[j] > v[j + 1]) {
                swap(v[j], v[j + 1]);
                swaps++;
            }
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
