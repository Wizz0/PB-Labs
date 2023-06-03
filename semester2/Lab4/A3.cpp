//A3

#include <iostream>
#include <fstream>
#include <vector>
#include <random>
#include <ctime>

using namespace std;

class Nonsense_Gen {
private:
    int s;
    vector<string> dictionary;
    mt19937 gen;

public:
    Nonsense_Gen() {
        s = 1;
        ifstream fin("Cool_dictionary.txt");
        if (fin.is_open()) {
            string word;
            while (fin >> word) {
                dictionary.push_back(word);
            }
            fin.close();
        }
        gen.seed(time(nullptr));
    }

    void generate() {
        string filename = "nonsense_" + to_string(s) + ".txt";
        ofstream fout(filename);
        if (fout.is_open()) {
            for (int i = 0; i < 10; i++) {
                int j = gen() % dictionary.size();
                fout << dictionary[j] << " ";
            }
            fout.close();
            s++;
        }
    }
};

int main() {
    Nonsense_Gen generator;
    int n;
    cout << "How many random things do you need?" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        generator.generate();
    }
    return 0;
}
