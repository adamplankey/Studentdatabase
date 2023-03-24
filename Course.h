//adam plankey
//chatgpt used for debugging help*
#include <iostream>
#include <string>

using namespace std;

class Course {
private:
    int code;
    string name;
    float testsScores[3];

public:
    Course() : code(120), name("CS1") {
        testsScores[0] = 0.0;
        testsScores[1] = 0.0;
        testsScores[2] = 0.0;
    }

    Course(int c, string n, float ts[3]) : code(c), name(n) {
        for (int i = 0; i < 3; i++) {
            testsScores[i] = ts[i];
        }
    }

    void setCode(int c) { code = c; }
    int getCode() const { return code; }

    void setName(string n) { name = n; }
    string getName() const { return name; }

    void setTestsScores(float ts[3]) {
        for (int i = 0; i < 3; i++) {
            testsScores[i] = ts[i];
        }
    }
    float* getTestsScores() { return testsScores; }

    friend ostream& operator<<(ostream& os, const Course& c) {
        os << "Code: " << c.code << ", Name: " << c.name << ", Test Scores: [";
        for (int i = 0; i < 2; i++) {
            os << c.testsScores[i] << ", ";
        }
        os << c.testsScores[2] << "]";
        return os;
    }
};
