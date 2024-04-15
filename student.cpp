#include "student.hpp"
using namespace std;

Student::Student(string stuName, string stuMaj, vector<int> stuScores){
    name  = stuName;
    major = stuMaj;
    testScores = stuScores;
}
Student::Student(){
    name = "NoName";
    major = "NoMajor";
}

string Student::GetName() const {
    return name;
}

string Student::GetMajor() const{
    return major;
}
void Student::SetName(string _name){
    name = _name;
}

void Student::SetMajor(string _major){
    major = _major;
}
