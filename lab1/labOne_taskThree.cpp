#include <iostream>
#include <vector>
using namespace std;

class Course {
public:
    string course_code;
    string course_name;

    // Constructor
    Course(const string& code, const string& name)
        : course_code(code), course_name(name) {}
};

class Grade {
public:
    int mark;
    char the_grade;

    // Constructor
    Grade(int m) : mark(m) {
        calculateGrade();
    }

private:
    void calculateGrade() {
        if (mark > 69) {
            the_grade = 'A';
        } else if (mark > 59) {
            the_grade = 'B';
        } else if (mark > 49) {
            the_grade = 'C';
        } else if (mark > 39) {
            the_grade = 'D';
        } else {
            the_grade = 'E';
        }
    }
};

class Student {
public:
    string registration_number;
    string name;
    int age;
    vector<Course> courses;
    vector<Grade> grades;

    // Constructor
    Student(const string& reg_num, const string& student_name, int student_age)
        : registration_number(reg_num), name(student_name), age(student_age) {}

    // Member functions
    void addCourse(const string& code, const string& name) {
        courses.emplace_back(code, name);
        grades.emplace_back(0); // Initialize grade with 0; can be updated later
    }

    void displayDetails() const {
        cout << "\nStudent Details:\n";
        cout << "Registration Number: " << registration_number << "\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";

        for (size_t i = 0; i < courses.size(); ++i) {
            cout << "Course " << (i + 1) << ":\n";
            cout << "  Course Code: " << courses[i].course_code << "\n";
            cout << "  Course Name: " << courses[i].course_name << "\n";
            cout << "  Marks: " << grades[i].mark << "\n";
            cout << "  Grade: " << grades[i].the_grade << "\n";
        }
    }
};

int main() {
    vector<Student> students;

    // Example usage
    Student student1("123", "John Doe", 20);
    student1.addCourse("CSE101", "Introduction to Programming");
    student1.addCourse("MAT201", "Linear Algebra");

    students.push_back(student1);

    // Display details of the first student
    students[0].displayDetails();

    return 0;
}
