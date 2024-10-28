#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

void calculateGPA() {
    int sub;
    double sum = 0;
    double total;
    double totalcredit = 0;

    system("cls");
    cout << "-----------------------------------" << endl;
    cout << "|         GPA CALCULATOR          |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Enter number of subjects" << endl;
    cin >> sub;
    cout << endl;

    if (sub <= 0) {
        cout << "Invalid number of subjects. Press any key to return to the main menu...";
        getch();
        return;
    }

    vector<double> credit(sub);
    vector<double> point(sub);

    for (int i = 0; i < sub; i++) {
        cout << "Enter credit of subject " << i + 1 << " : " << endl;
        cin >> credit[i];
        cout << "Enter point of subject " << i + 1 << " : " << endl;
        cin >> point[i];
        cout << "-----------------------------------" << endl;
        cout << endl;
    }

    for (int i = 0; i < sub; i++) {
        total = credit[i] * point[i];
        sum += total;
    }
    for (int i = 0; i < sub; i++) {
        totalcredit += credit[i];
    }

    if (totalcredit == 0) {
        cout << "Total credits cannot be zero. Press any key to return to the main menu...";
        getch();
        return;
    }

    cout << endl << endl;
    cout << "Total Points: " << sum << endl;
    cout << "Total Credits: " << totalcredit << endl;
    cout << "Total GPA: " << sum / totalcredit << endl;

    cout << "\n Press any key to go back to main menu....";
    getch();
}

void calculateCGPA() {
    int sem;
    double semtotal = 0;

    system("cls");
    cout << "-----------------------------------" << endl;
    cout << "|         CGPA CALCULATOR         |" << endl;
    cout << "-----------------------------------" << endl;
    cout << "Enter number of semesters" << endl;
    cin >> sem;

    if (sem <= 0) {
        cout << "Invalid number of semesters. Press any key to return to the main menu...";
        getch();
        return;
    }

    vector<double> semesters(sem);

    for (int i = 0; i < sem; i++) {
        cout << "Enter semester #" << i + 1 << " GPA: " << endl;
        cin >> semesters[i];
    }
    for (int i = 0; i < sem; i++) {
        semtotal += semesters[i];
    }

    cout << "Your CGPA is : " << semtotal / sem << endl;
    cout << "\n Press any key to go back to main menu....";
    getch();
}

void Instruction() {
    system("cls");

    cout << "-----------------------------------" << endl;
    cout << "|         How to Calculate        |" << endl;
    cout << "-----------------------------------" << endl << endl;
    cout << "GPA = sum of (Credit * Point) / total number of credits" << endl;
    cout << "CGPA = sum of GPA / number of semesters" << endl;
    cout << endl << endl;
    cout << "Grade-Point Table" << endl;
    cout << "-----------------------------------" << endl;
    cout << "\tGrade  \t\t    Scale" << endl;
    cout << "-----------------------------------" << endl << endl;
    cout << "\tO  \t\t    10" << endl;
    cout << "\tA  \t\t    9" << endl;
    cout << "\tA+ \t\t    8" << endl;
    cout << "\tB  \t\t    7" << endl;
    cout << "\tB+ \t\t    6" << endl;
    cout << "\tC  \t\t    5" << endl;
    cout << "\tD  \t\t    4" << endl;
    cout << "\tF  \t\t    0" << endl;

    cout << "\n Press any key to go back to main menu....";
    getch();
}

int main() {
    do {
        system("cls");
        cout << "-----------------------------------" << endl;
        cout << "|         GPA CALCULATOR          |" << endl;
        cout << "-----------------------------------" << endl;
        cout << "1. GPA" << endl;
        cout << "2. CGPA" << endl;
        cout << "3. Instruction" << endl;
        cout << "4. Exit" << endl;
        cout << "Select Option" << endl;

        char op;
        cin >> op;

        if (op == '1') calculateGPA();
        else if (op == '2') calculateCGPA();
        else if (op == '3') Instruction();
        else if (op == '4') exit(0);

    } while (1);

    return 0;
}
