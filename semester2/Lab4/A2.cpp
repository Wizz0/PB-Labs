//A2

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream fin("prob2_in.txt");
    ofstream fout("prob2_out.txt");

    while (!fin.eof()){
        string s;
        getline(fin,s);
        for (int i=0; i<s.size(); i++){
            if (s[i] != ' ') {
                if ((s[i+1] != ' ') and (s[i+1] != '\0'))
                    fout << s[i] << "*";
                else
                    fout << s[i];
            }
            else
                fout << ' ';
        }
        fout << endl;
    }
    fin.close();
    fout.close();
    return 0;
}
