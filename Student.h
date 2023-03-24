//adam plankey

#include <iostream>
#include <string>
#include "Course.h"

using namespace std;

class Student {
private:
    int id;
    string name;
    Course* courses;
    int numOfCourses;

public:
    Student() {}

    Student(int i, string n) : id(i), name(n), numOfCourses(0), courses(nullptr) {}

    Student(const Student& s) {
        id = s.id;
        name = s.name;
        numOfCourses = s.numOfCourses;
        courses = new Course[numOfCourses];
        for (int i = 0; i < numOfCourses; i++) {
            courses[i] = s.courses[i];
        }
    }

    Student& operator=(const Student& s) {
        if (this != &s) {
            id = s.id;
            name = s.name;
            numOfCourses = s.numOfCourses;
            delete[] courses;
            courses = new Course[numOfCourses];
            for (int i = 0; i < numOfCourses; i++) {
                courses[i] = s.courses[i];
            }
        }
        return *this;
    }

    void setId(int i) { id = i; }
    int getId() const { return id; }

    void setName(string n) { name = n; }
    string getName() const { return name; }

    void addCourse(Course c) {
        Course* temp = new Course[numOfCourses + 1];
        for (int i = 0; i < numOfCourses; i++) {
            temp[i] = courses[i];
        }
        temp[numOfCourses] = c;
        numOfCourses++;
        delete[] courses;
        courses = temp;
    }

    void deleteCourse(Course c) {
        int index = -1;
        for (int i = 0; i < numOfCourses; i++) {
            if (courses[i].getCode() == c.getCode()) {
                index = i;
                break;
            }
        }
        if (index != -1) {
            Course* temp = new Course[numOfCourses - 1];
            for (int i = 0; i < index; i++) {
                temp[i] = courses[i];
            }
            for (int i = index + 1; i < numOfCourses; i++) {
                temp[i - 1] = courses[i];
            }
            numOfCourses--;
            delete[] courses;
            courses = temp;
        }
    }

    friend ostream& operator<<(ostream& os, const Student& s) {
        os << "ID: " << s.id << ", Name: " << s.name << ", Number of courses: " << s.numOfCourses << endl;
        for (int i = 0; i < s.numOfCourses; i++) {
            os << "Course " << i + 1 << ": " << s.courses[i] << endl;
        }
        return os;
    }

    ~Student() {
        delete[] courses;
    }
};
