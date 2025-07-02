#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
using namespace std;

struct Student {
    string name;
    vector<float> grades;
    float average;
    char gradeLetter;
};

// Function to calculate grade letter
char calculateGradeLetter(float avg) {
    if (avg >= 90) return 'A';
    if (avg >= 80) return 'B';
    if (avg >= 70) return 'C';
    if (avg >= 60) return 'D';
    return 'F';
}

int main() {
    int numStudents, numSubjects;
    cout << "Enter number of students: ";
    cin >> numStudents;
    cout << "Enter number of subjects: ";
    cin >> numSubjects;

    vector<Student> students(numStudents);
    float classTotal = 0;

    for (int i = 0; i < numStudents; i++) {
        cout << "\nEnter name of student " << i + 1 << ": ";
        cin >> students[i].name;
        float total = 0;
        students[i].grades.resize(numSubjects);

        for (int j = 0; j < numSubjects; j++) {
            cout << "Enter grade for subject " << j + 1 << ": ";
            cin >> students[i].grades[j];
            total += students[i].grades[j];
        }

        students[i].average = total / numSubjects;
        students[i].gradeLetter = calculateGradeLetter(students[i].average);
        classTotal += students[i].average;
    }

    // Display result
    cout << "\n Student Report :\n";
    cout << setw(12) << "Name" << setw(12) << "Average" << setw(10) << "Grade\n";

    float highestAvg = 0;
    string topStudent;

    for (auto &s : students) {
        cout << setw(12) << s.name
            << setw(10) << fixed << setprecision(2) << s.average
            << setw(10) << s.gradeLetter << endl;

        if (s.average > highestAvg) {
            highestAvg = s.average;
            topStudent = s.name;
        }
    }

    cout << "\nClass Average: " << fixed << setprecision(2) << classTotal / numStudents << endl;
    cout << "Top Performer: " << topStudent << " (" << highestAvg << ")\n";

    return 0;
}
