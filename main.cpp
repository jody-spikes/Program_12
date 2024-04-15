/*
* Author: Jody Spikes
* Assignment Title: Program 12
* Assignment Description: Variable Lenght Data
* Due Date: 04/14/2024
* Date Created: 04/10/2024
* Date Last Modified: 04/14/2024
*/
#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include "student.h"
using namespace std;

int main()
{
    //Data Abstraction
    string fileName, junk, line;
    int score;
    string name, major;
    ifstream file;
    vector<Student> studentList;
    Student newStud;
    //Input
    do{
        cout << "Enter File Name: ";
        cin >> fileName;
        file.open(fileName);
        if(!file){
            cout << "File Failed to Open." << endl;
        }
    }while(!file.is_open());

    getline(file, junk);

    //Process
    while (getline(file, line)) {
        stringstream ss(line);
        ss >> name >> major;

        vector<int> testScores;
        while (ss >> score) {
            testScores.push_back(score);
        }

        Student newStud(name, major, testScores);
        studentList.push_back(newStud);
    }

    file.close();
    
    
    // Calculate statistics
    vector<string> uniqueMajors;
    vector<vector<Student>> majorStudents;

    // Populate uniqueMajors and majorStudents
    for (size_t i = 0; i < studentList.size(); ++i) {
           bool found = false;
           size_t j = 0;
           while (j < uniqueMajors.size()) {
               if (uniqueMajors[j] == studentList[i].GetMajor()) {
                   majorStudents[j].push_back(studentList[i]);
                   found = true;
               }
               ++j;
           }

           if (!found) {
               uniqueMajors.push_back(studentList[i].GetMajor());
               majorStudents.push_back({studentList[i]});
           }
       }
    // Output
    cout << "Total Number of Students = " << studentList.size() << endl;
    cout << "Total Number of Unique Majors = " << uniqueMajors.size() << endl;

    cout << setw(8) << "Major" << setw(18) << "Weighted Average" << endl;
    cout << setprecision(2) << fixed;

    for (size_t i = 0; i < uniqueMajors.size(); ++i) {
        double totalAverage = 0.0;
        for (size_t j = 0; j < majorStudents[i].size(); ++j) {
            double studentAverage = majorStudents[i][j].CalculateAverage();
            totalAverage += studentAverage;
        }

        double weightedAverage = totalAverage / majorStudents[i].size();
        cout << setw(8) << uniqueMajors[i] << setw(18) 
        << weightedAverage << endl;
    }

    cout << endl;
    cout << setw(8) << "Name" << setw(8) << "Major" 
    << setw(10) << "Average" << endl;

    for (size_t i = 0; i < studentList.size(); ++i) {
        double studentAverage = studentList[i].CalculateAverage();
        cout << setw(8) << studentList[i].GetName() << 
        setw(8) << studentList[i].GetMajor() << setw(10) 
        << studentAverage << endl;
    }

    return 0;
}
