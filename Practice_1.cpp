//variant 2 Stavitskiy Dmitriy
#include <iostream>
#include <windows.h>

using namespace std;
//Ф.И.О., оценки (математика, физика, черчение, химия, сопромат)
struct Student
{
    char name[20];
    char surname[20];
    char secondName[20];
    int math;
    int chemistry;
    int physics;
    int mechanicalDrawing;
    int strengthOfMaterials;
};

int main()
{
    int quantity;
    cout << "Input quantity of students";
    cin >> quantity;
    Student students[quantity];
    for (int i = 0; i < quantity; i++)
    {
        cout << "Student # " << i + 1 << "\n";
        cout << "Surname: ";
        cin.getline(students[i].surname, 20);
        cout << "Name: ";
        cin.getline(students[i].name, 20);
        cout << "Second name: ";
        cin.getline(students[i].secondName, 20);
        cout << "Math grade: ";
        cin << students[i].math;
        cout << "Physics grade: ";
        cin << students[i].physics;
        cout << "Chemistry grade: ";
        cin << students[i].chemistry;
        cout << "Mechanical drawing grade: ";
        cin << students[i].mechanicalDrawing;
        cout << "Strength of materials grade: ";
        cin << students[i].strengthOfMaterials;
    }
    int count = 0;
    for (int i = 0; i < quantity; i++)
    {
        if (students[i].math == 5 && students[i].physics == 5 && students[i].mechanicalDrawing == 5 && students[i].strengthOfMaterials == 5 && students[i].chemistry == 5)
        {
            cout << "Student" << students[i].surname << " " << students[i].name << " " << students[i].secondName << "is a cool guy with A grades \n";
            count++;
        }
    }
    cout << "The number of A graders: " << count;
}