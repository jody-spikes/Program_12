#include <iostream>
#include <fstream>
#include <iomanip>
#include <sstream>
#include "student.hpp"
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
            cout << "Error Opening File..." << endl;
        }
    }while(!file.is_open());

    getline(file, junk);

    //Process
    while(getline(file,line)){

        stringstream ss(line);
        ss >> name >> major;

        vector<int> testScores;
        while(ss >> score){
            testScores.push_back(score);
        }
        Student(name, major, testScores);
    }
    
    file.close();

    //Output
    
    
    return 0;
}
