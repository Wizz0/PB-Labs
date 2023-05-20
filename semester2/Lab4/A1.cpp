//A1

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin("prob1_in.txt");
    ofstream fout("prob1_out.txt");
    char max = 0;

    while (!fin.eof()){
        string s;
        getline(fin,s);
        max = s[0];
        for (int i=0; i<s.size(); i++){
            if (s[i] >= max)
                max = s[i];
        }
        fout << max << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
