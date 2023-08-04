#include <iostream>
using namespace std;
struct student
{
    int roll;
    float cgpa;
    string name;
    string fname;
    string dob;
    float m1, m2, m3, percent;
    char grade;
};
student a[100];
void add(int i)
{
    cout << endl
         << "Enter student roll no. :";
    cin >> a[i].roll;
    cout << "Enter student CGPA :";
    cin >> a[i].cgpa;
    cin.ignore(1, '\n');
    cout << "Enter student's name :";
    getline(cin, a[i].name);
    cout << "Enter student's father name :";
    getline(cin, a[i].fname);
    cout << "Enter student's date of birth :";
    getline(cin, a[i].dob);
    cout << "Enter marks of subject 1:";
    cin >> a[i].m1;
    cout << "Enter marks of subject 2:";
    cin >> a[i].m2;
    cout << "Enter marks of subject 3:";
    cin >> a[i].m3;
    a[i].percent = (float)(a[i].m1 + a[i].m2 + a[i].m3) / 3 ;
    if (a[i].percent >= 60)
        a[i].grade = 'A';
    else if (a[i].percent >= 40)
        a[i].grade = 'B';
    else
        a[i].grade = 'F';
}
void display(int n)
{
    cout << "\nThe student record is as folllows ....." << endl;

    for (int j = 1; j <= n; j++)
    {

        cout << endl
             << "\nFor student " << j << ":" << endl;
        cout << "\nStudent name :" << a[j].name;
        cout << "\nSudent CGPA :" << a[j].cgpa;
        cout << "\nStudent roll :" << a[j].roll;
        cout << "\nStudent father name :" << a[j].fname;
        cout << "\nStudent date of birth :" << a[j].dob;
        cout << "\nSubject 1 marks :" << a[j].m1;
        cout << "\nSubject 2 marks :" << a[j].m2;
        cout << "\nSubject 3 marks :" << a[j].m3;
        cout << "\nPercentage :" << a[j].percent;
        cout << "\nGrade :" << a[j].grade;
    }
}
void search(int n)
{
    int r;
    cout << "\nPlease enter the roll of the student you want to search :";
    cin >> r;
    for (int j = 1; j <= n; j++)
    {
        if (a[j].roll == r)
        {
            cout << "\nThe student record is as folllows ....." << endl;
            cout << "\nStudent name :" << a[j].name;
            cout << "\nSudent CGPA :" << a[j].cgpa;
            cout << "\nStudent roll :" << a[j].roll;
            cout << "\nStudent father name :" << a[j].fname;
            cout << "\nStudent date of birth :" << a[j].dob;
            cout << "\nSubject 1 marks :" << a[j].m1;
            cout << "\nSubject 2 marks :" << a[j].m2;
            cout << "\nSubject 3 marks :" << a[j].m3;
            cout << "\nPercentage :" << a[j].percent;
            cout << "\nGrade :" << a[j].grade;
            break;
        }
        else
            cout << "\n Student record not found ";
    }
}

int main()
{

    int choice, n = 0;
    cout << endl
         << endl;
    cout << "\t\t.................Welcome to Student Management System........................";
    while (true)
    {
        cout << endl
             << "\n**************************************************************************************";
        cout << "\nPlease choose a option from the given menu :" << endl;
        cout << "\n1.Enter a student's record ";
        cout << "\n2.Display the student's information ";
        cout << "\n3.Search a student's information";
        cout << "\n4.Exit" << endl;
        cout << "\n**************************************************************************************";
        cout << "\nEnter a choice :";
        cin >> choice;
        if (choice == 1)
            n++;
        switch (choice)
        {
        case 1:
            add(n);
            break;
        case 2:
            display(n);
            break;
        case 3:
            search(n);
            break;
        case 4:
            return 0;
            break;
        default:
            cout << "\nInvalid choice!!!";
        }
    }
}