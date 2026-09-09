// Write a program that outputs an acceptance letter for Makerere University. It should prompt a user to enter their first name, last name, study program, academic year.
// The program should have autodates

// Example:

// Date: 27th August 2026

// To: John Okello,

// Dear John,

// CONGRATULATIONS! I am pleased to inform you that the Makerere University 
// Admissions Board has approved your application for admission to the 
// 2027/2028 academic year.

// You have been offered a place for the following course:
// PROGRAM: Bachelor of Science in Computer and Communication Engineering

// As a student of Makerere University, you will be part of a historic 
// institution dedicated to academic excellence and innovation. Please ensure 
// that you report to the Academic Registrar's office with your original 
// academic documents for verification during the orientation week.

// We look forward to welcoming you to the Makerere University.

// Yours sincerely,


// John Doe
// Registra
#include <iostream>
#include <string>
using namespace std;

int main() {
    string firstName, lastName, studyProgram;
    int academicYear;

    // Get user input
    cout << "Enter your first name: ";
    getline(cin, firstName);
    cout << "Enter your last name: ";
    getline(cin, lastName);
    cout << "Enter your study program: ";
    getline(cin, studyProgram);
    cout << "Enter your academic year (e.g., 2027): ";
    cin >> academicYear;

    // Output the acceptance letter
    cout << "\nDate: 27th August 2026\n\n";
    cout << "To: " << firstName << " " << lastName << ",\n\n";
    cout << "Dear " << firstName << ",\n\n";
    cout << "CONGRATULATIONS! I am pleased to inform you that the Makerere University \n";
    cout << "Admissions Board has approved your application for admission to the \n";
    cout << academicYear + 1 << "/" << academicYear + 2 << " academic year.\n\n";
    cout << "You have been offered a place for the following course:\n";
    cout << "PROGRAM: " << studyProgram << "\n\n";
    cout << "As a student of Makerere University, you will be part of a historic \n";
    cout << "institution dedicated to academic excellence and innovation. Please ensure \n";
    cout << "that you report to the Academic Registrar's office with your original \n";
    cout << "academic documents for verification during the orientation week.\n\n";
    cout << "We look forward to welcoming you to the Makerere University.\n\n";
    cout << "Yours sincerely,\n\n";
    cout << "\nJohn Doe\nRegistrar\n";

    return 0;
}
