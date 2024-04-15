/*
* Author: Jody Spikes
* Assignment Title: Program 12
* Assignment Description: Variable Lenght Data
* Due Date: 04/14/2024
* Date Created: 04/10/2024
* Date Last Modified: 04/14/2024
*/
#ifndef STUDENT_H_INCLUDED
#define STUDENT_H_INCLUDED
#include <fstream>
#include <iostream>
#include <iomanip>
#include <vector>
#include <sstream>
using namespace std;

class Student {
public:
    /*
    Default constructor
    */
    Student(string name, string major, vector<int> testScores);
    Student();
    /*
    * description: Getter function for the student name
    * return: the name of the student
    * precondition: student object exists
    * postcondition: the name of the student is returned
    *
    */
    string GetName() const;


     /*
    * description: Getter for the student major
    * return: name of the students major
    * precondition:  student object exists
    * postcondition:  the major of the student is returned
    */
    string GetMajor() const;

    /*
    * description: Getter for the student average test score
    * return: average test score
    * precondition:  student object exists
    * postcondition:  the average score of the student is returned
    */
    
    double CalculateAverage() const;

private:
    string name;
    string major;
    vector<int> testScores;
};

#endif // STUDENT_H_INCLUDED
