//A2

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class IT_Student{
    private:
        string name;
        string surname;
        string group;
        int grades[5];
        string favouriteLang;
        float GPA;
    
    public:
        IT_Student(string name, string surname, string group, int grades[], string favouriteLang){
            this->name = name;
            this->surname = surname;
            this->group = group;
            for(int i=0; i<5; i++)
                this->grades[i] = grades[i];
            this->favouriteLang=favouriteLang;
            float sum = 0;
            for(int i=0; i<5; i++)
                sum+=grades[i];
            this->GPA = sum / 5.0;
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
            cout << "GPA: " << GPA << endl;
        }
        void update_grades(int new_grades[]){
            for (int i=0; i<5; i++)
                this->grades[i] = new_grades[i];
            float sum = 0;
            for (int i=0; i<5; i++)
                sum += grades[i];
            this->GPA = sum / 5.0;
        }
};

int main(){
    int n; cin >> n;
    vector<IT_Student> students;
    for (int i=0; i<n; i++){
        string name, surname, group, favouriteLang;
        int grades[5];
        cout << i+1 << " STUDENT" << endl;
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
        IT_Student student(name, surname, group, grades, favouriteLang);
        students.push_back(student);
    }
    for (int i=0; i<n; i++){
        cout << i+1 << " Student info" << endl;
        students[i].student_data();
    }
    cout << "Update grades? Which student [enter a number]: " << endl;
    int x; cin >> x;
    int new_grades[5];
    for (int k=0; k<5; k++)
        cin >> new_grades[k];
    students[x-1].update_grades(new_grades);
    students[x-1].student_data();
    return 0;
}