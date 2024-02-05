#include <iostream>
#include <cstring>

const int MAX_STUDENTS = 40;
const int MAX_COURSES = 2;

// Define Course structure
struct Course {
    std::string course_code;
    std::string course_name;
};

// Define Grade structure
struct Grade {
    int mark;
    char the_grade;
};

// Define Student structure
struct Student {
    std::string registration_number;
    std::string name;
    int age;
    Course* courses;
    Grade* grades;
    bool* grades_calculated;
};

// Function prototypes
void addStudent(Student* students, int& studentCount);
void editStudent(Student* students, int studentCount);
void addMarksAndCalculateGrades(Student* students, int studentCount);
void displayStudentDetails(const Student& student);

int main() {
    Student* students = new Student[MAX_STUDENTS];
    int studentCount = 0;

    // ... (rest of the main function remains the same)

    // Deallocate memory
    delete[] students;

    return 0;
}

// Function implementations
void addStudent(Student* students, int& studentCount) {
    if (studentCount < MAX_STUDENTS) {
        Student* newStudent = &students[studentCount++];
        newStudent->courses = new Course[MAX_COURSES];
        newStudent->grades = new Grade[MAX_COURSES];
        newStudent->grades_calculated = new bool[MAX_COURSES];

        // ... (rest of the addStudent function remains the same)
    } else {
        std::cout << "Maximum number of students reached.\n";
    }
}

void editStudent(Student* students, int studentCount) {
    // ... (similar modifications as in addStudent)
}

void addMarksAndCalculateGrades(Student* students, int studentCount) {
    // ... (similar modifications as in addStudent)
}

void displayStudentDetails(const Student& student) {
    // ... (similar modifications as in addStudent)
}