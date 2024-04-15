/*
* Author: Jody Spikes
* Assignment Title: Program 12
* Assignment Description: Variable Lenght Data
* Due Date: 04/14/2024
* Date Created: 04/10/2024
* Date Last Modified: 04/14/2024
*/
#include "student.h"
using namespace std;

// Constructor with parameters
Student::Student(string stuName, string stuMaj, vector<int> stuScores){
    name = stuName;
    major = stuMaj;
    testScores = stuScores;
}

// Default constructor
Student::Student()
    : name("NoName"), major("NoMajor") {}

string Student::GetMajor() const {
    return major;
}

string Student::GetName() const{
    return name;
}

double Student::CalculateAverage() const {
    if (testScores.empty()) {
        return 0.0; // If no test scores, return 0.0
    }

   
    int sum = 0;
    for (int score : testScores) {
        sum += score;
    }

    
    double average = static_cast<double>(sum) / testScores.size();

    return average;
}
