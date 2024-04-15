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

    void SetName(string _name);

    void SetMajor(string _major);

private:
    string name;
    string major;
    vector<int> testScores;
};

#endif // STUDENT_H_INCLUDED
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

    void SetName(string _name);

    void SetMajor(string _major);

private:
    string name;
    string major;
    vector<int> testScores;
};

#endif // STUDENT_H_INCLUDED
