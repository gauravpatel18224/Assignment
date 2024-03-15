#include <iostream>
#include <string>
using namespace std;

class LectureDetails {
private:
    string lecturerName;
    string subjectName;
    string courseName;
    int numLecturers;

public:
    LectureDetails() {
        numLecturers = 0;
    }

    void assignInitialValues(string name, string subject, string course) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
    }

    void addLectureDetails(string name, string subject, string course) {
        lecturerName = name;
        subjectName = subject;
        courseName = course;
        numLecturers++;
    }

    void displayLectureDetails() {
        cout << "Lecturer Name: " << lecturerName << endl;
        cout << "Subject: " << subjectName << endl;
        cout << "Course: " << courseName << endl;
    }
};

int main() {
    LectureDetails lecturers[5];

    // Adding lecture details for 5 lecturers
    lecturers[0].addLectureDetails("John Doe", "Computer Science", "Introduction to Programming");
    lecturers[1].addLectureDetails("Jane Smith", "Mathematics", "Calculus");
    lecturers[2].addLectureDetails("Michael Johnson", "Physics", "Mechanics");
    lecturers[3].addLectureDetails("Emily Brown", "Biology", "Cell Biology");
    lecturers[4].addLectureDetails("David Wilson", "Chemistry", "Organic Chemistry");

    // Displaying lecture details for all lecturers
    for (int i = 0; i < 5; ++i) {
        cout << "Lecture Details for Lecturer " << i + 1 << ":" << endl;
        lecturers[i].displayLectureDetails();
        cout << endl;
    }

    return 0;
}
