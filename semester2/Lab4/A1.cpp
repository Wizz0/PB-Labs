//A1

//суть заданий, связанных с файлами - создать файл prob№_in.txt
//куда нужно записать вводные данные (как через cin типа), а вывод
//выводится (сорян за тавтологию) в prob№_out.txt. Поэтому заранее
//создай файл prob№_in.txt в папке проекта. Да, в онлайн IDE это не
//получится, на наших компах вроде только DevC++ и CodeBlocks более
//менее рабочие.

//P.S эта лаба работает только с ЦИФРАМИ: т.е в in.txt напиши цифры 0-9

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
