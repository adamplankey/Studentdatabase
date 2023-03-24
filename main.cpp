//adam plankey
#include <iostream>
#include "Student.h"

using namespace std;

int main() {
    // Get student information from user
    float testscores [3];
    int a = 1;
    int id;
    float temp;
    string name;
    cout << "Enter student ID: ";
    cin >> id;
    cout << "Enter student name: ";
    cin >> name;

    // Create initial student object
    Student s1(id, name);
    
    // Create two more student objects using copy constructor and assignment operator
    Student s2 = s1; // copy constructor
    Student s3;
    s3 = s1; // assignment operator

    
    for(int i = 0; i < 3;i++){
        cout << "enter test score "<< a++ << endl;
        cin >> temp;
        testscores[i] = temp;
    }
    a = 1;
    // Demo addCourse() and deleteCourse()
    Course c1(101, "Intro to Computer Science",testscores);
        for(int i = 0; i < 3;i++){
        cout << "enter test score "<< a++ << endl;
        cin >> temp;
        testscores[i] = temp;
    }
    a = 1;
    Course c2(201, "Data Structures and Algorithms",testscores);
        for(int i = 0; i < 3;i++){
        cout << "enter test score "<< a++ << endl;
        cin >> temp;
        testscores[i] = temp;

    }
    Course c3(301, "Database Systems",testscores);
    s1.addCourse(c1);
    s1.addCourse(c2);
    s1.addCourse(c3);
    cout << "After adding courses:\n" << s1 << endl;
    s1.deleteCourse(c2);
    cout << "After deleting a course:\n" << s1 << endl;
    
    return 0;
}
