#include <iostream>

using namespace std;

int main() {

    int score;


    cout << "Enter the student's score (0-100): ";
    cin >> score;


    if (score < 0 || score > 100) {
        cout << "Invalid score. Please enter a score between 0 and 100." << endl;
        return 1;
    }


    if (score >= 90) {
        cout << "Grade: A - Excellent performance!" << endl;
    } else if (score >= 80) {
        cout << "Grade: B - Good job!" << endl;
    } else if (score >= 70) {
        cout << "Grade: C - Satisfactory performance." << endl;
    } else if (score >= 60) {
        cout << "Grade: D - Needs improvement." << endl;
    } else {
        cout << "Grade: F - Failing grade. Work harder!" << endl;
    }

    return 0;
}

