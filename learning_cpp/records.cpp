#include "records.h"
#include <iostream>
#include <fstream>

// constructor
Student::Student(int the_id, std::string the_name){
    id = the_id;
    name = the_name;
}
int Student::get_id(){
    return id;
}
std::string Student::get_name(){
    return name;
}

Course::Course(int the_id, std::string the_name, unsigned char the_credits){
    id = the_id;
    name = the_name;
    credits = the_credits;
}
int Course::get_id(){
    return id;
}
std::string Course::get_name(){
    return name;
}
int Course::get_credits(){
    return credits;
}

Grade::Grade(int sid, int cid, char the_grade){
    student_id = sid;
    course_id = cid;
    grade = the_grade;
}
int Grade::get_student_id(){
    return student_id;
}
int Grade::get_course_id(){
    return course_id;
}
char Grade::get_grade(){
    return grade;
}

void StudentRecords::add_student(int sid, std::string sname){
    students.push_back(Student(sid, sname));
}

void StudentRecords::add_course(int cid, std::string cname, unsigned char ccredits){
    courses.push_back(Course(cid, cname, ccredits));
}

void StudentRecords::add_grade(int sid, int cid, char grade){
    grades.push_back(Grade(sid, cid, grade));
}

float StudentRecords::get_num_grade(char letter){
    float num_grd;    // float for the numeric grade
    switch (letter){
        case 'A': num_grd = 4.0f;
            break;
        case 'B': num_grd = 3.0f;
            break;
        case 'C': num_grd = 2.0f;
            break;
        case 'D': num_grd = 1.0f;
            break;
        default:  num_grd = 0.0f;
            break;
    };
    return num_grd;
}

std::string StudentRecords::get_student_name(int sid){
    int i = 0;
    while (i < students.size() && students[i].get_id() != sid)
        i++;
    return students[i].get_name();
}


unsigned char StudentRecords::get_course_credits(int cid){
    int j=0;
    while (j < courses.size() && courses[j].get_id() != cid)
        j++;
    return courses[j].get_credits();
}

float StudentRecords::get_GPA(int sid){
    float points = 0.0f, credits = 0.0f;
    for (Grade& grd : grades)
        if (grd.get_student_id() == sid){
            // calculate total credits and points
            unsigned char current_credits = get_course_credits(grd.get_course_id());
            credits += current_credits;
            points += get_num_grade(grd.get_grade()) * current_credits;
        }
    return (points/credits);
}

// my solution
// int StudentRecords::report_card(int sid){
//     std::cout << StudentRecords::get_student_name(sid) << std::endl;
//     for (Grade& grd: grades)
//         if (grd.get_student_id() == sid){
//             std::cout << "Course: " << courses[grd.get_course_id()-1].get_name() << std::endl;
//             std::cout << "Grade:" << grd.get_grade() << std::endl; 
//         }
//     std::cout << "GPA: " << StudentRecords::get_GPA(sid) << std::endl;
//     return 0;
// }

// his solution
// void StudentRecords::report_card(int sid){
//     float points = 0.0f, credits = 0.0f;
//     std::cout << std::endl << "Report Card for " << get_student_name(sid) << std::endl;
//     for (Grade& grd : grades)
//         if (grd.get_student_id() == sid){
//             std::cout << get_course_name(grd.get_course_id()) << ": " << grd.get_grade() << std::endl;
//             unsigned char current_credits = get_course_credits(grd.get_course_id());
//             credits += current_credits;
//             points += get_num_grade(grd.get_grade()) * current_credits;
//         }
//     std::cout << "GPA: " << (points / credits) << std::endl;
// }

std::string StudentRecords::get_course_name(int cid){
    int j = 0;
    while (j < courses.size() && courses[j].get_id() != cid)
        j++;
    return courses[j].get_name();
}

// his solution for challenge 06_04
// handles both cout and ostream object
void StudentRecords::report_card(int sid, std::ostream& stream){
    float points = 0.0f, credits = 0.0f;
    stream << std::endl << "Report Card for " << get_student_name(sid) << std::endl;
    for (Grade& grd : grades)
        if (grd.get_student_id() == sid){
            stream << get_course_name(grd.get_course_id()) << ": " << grd.get_grade() << std::endl;
            unsigned char current_credits = get_course_credits(grd.get_course_id());
            credits += current_credits;
            points += get_num_grade(grd.get_grade()) * current_credits;
        }
    stream << "GPA: " << (points / credits) << std::endl;
}

void StudentRecords::report_file(std::ofstream &outFile){
    int sid;
    outFile.open("report.txt");
    if (outFile.fail())
        std::cout << std::endl << "Couldn't open the file!" << std::endl;
    else {
        outFile << "=======================" << std::endl;
        for (auto& st: students){
            sid = st.get_id();
            report_card(sid, outFile);
            outFile << "=======================" << std::endl;
        }
        outFile.close();
        std::cout << "Created report.txt successfully" << std::endl;
    }

}