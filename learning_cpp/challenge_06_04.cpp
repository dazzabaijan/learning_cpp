#include <fstream>
#include <iostream>
#include "records.h"

using namespace std;

void initialize();
// an overload that receives an input file stream reference
void initialize(ifstream&);

StudentRecords SR;
int id;
ifstream inFile;
ofstream outFile;

int main(){
    initialize(inFile);      // initialize();
    SR.report_file(outFile);  // SR.report_card(1, cout);
    return 0;
}

void initialize(ifstream& inFile){
    string str, name;
    int sid, cid;
    unsigned char credits;
    char grade;
    int count = 0;

    inFile.open("students.txt");
    if (inFile.fail())
        cout << endl << "File students.txt not found!" << endl;
    else{
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, name);
            SR.add_student(sid, name);
            count++;
        }
        inFile.close();
        cout << "Found " << count << " students" << endl;
    }
    
    count = 0;
    inFile.open("courses.txt");
    if (inFile.fail())
        cout << endl << "File courses.txt not found!" << endl;
    else {
        while (!inFile.eof()){
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, name);
            getline(inFile, str);
            credits = stoi(str);
            SR.add_course(cid, name, credits);
            count++;
        }
        inFile.close();
        cout << "Found " << count << " courses" << endl;
    }

    count = 0;
    inFile.open("grades.txt");
    if (inFile.fail())
        cout << endl << "File grades.txt not found!" << endl;
    else {
        while (!inFile.eof()){
            getline(inFile, str);
            sid = stoi(str);
            getline(inFile, str);
            cid = stoi(str);
            getline(inFile, str);
            grade = str[0];
            SR.add_grade(sid, cid, grade);
            count++;
        }
        inFile.close();
        cout << "Found " << count << " grades" << endl;
    }
}