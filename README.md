# Studentdatabase

Overview

This program is a simple student course management system that allows you to manage a student's courses. The program consists of three classes: Course, Student, and a main driver program.

Class Descriptions

Course

The Course class represents a single course with a code, name, and an array of three test scores. The class contains getter and setter methods for its attributes, as well as an overloaded << operator for output.

Student

The Student class represents a single student with an ID, name, and a dynamic array of Course objects. The class contains getter and setter methods for its attributes and also provides methods for adding and deleting courses. The class has a copy constructor, an assignment operator, and a destructor for proper memory management.

Main Driver Program

The main driver program demonstrates the usage of the Course and Student classes by asking the user to input a student's ID, name, and test scores for three courses. It then creates a student object, adds the courses to the student's record, and demonstrates the deletion of a course.
