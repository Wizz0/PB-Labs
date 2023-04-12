//A1

#include <iostream>
#include <string>

using namespace std;

class IT_Student{
    private:
        string name;
        string surname;
        string group;
        int grades[5];
        string favouriteLang;
    
    public:
        IT_Student(string name, string surname, string group, int grades[], string favouriteLang){
            this->name = name;
            this->surname = surname;
            this->group = group;
            for(int i=0; i<5; i++)
                this->grades[i] = grades[i];
            this->favouriteLang=favouriteLang;
        }
        
        void student_data(){
            cout << "Name: " << name << endl;
            cout << "Surname: " << surname << endl;
            cout << "Group number: " << group << endl;
            cout << "Grades: ";
            for (int i=0; i<5; i++)
                cout << grades[i] << " ";
            cout << endl;
            cout << "Favourite programming language: " << favouriteLang << endl;
        }
};

int main(){
   int n; cin >> n;
   
   IT_Student students[n];
   
   for (int i=0; i<n; i++){
       string name, surname, group, favouriteLang;
       int grades[5];
       cout << "Name: ";
       cin >> name;
       cout << "Surname: ";
       cin >> surname;
       cout << "Group: ";
       cin >> group;
       cout << "Grades: ";
       for (int j=0; j<5; j++)
        cin >> grades[j];
       cout << "Favourite programming language: ";
       cin >> favouriteLang;
       
       students[i] = IT_Student(name, surname, group, grades, favouriteLang);
       for (int i=0; i<n; i++){
           students[i].student_data();
           cout << endl;
       }
   }
}