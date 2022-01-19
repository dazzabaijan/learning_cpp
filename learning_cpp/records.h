#include <string>

class Student{
public:
    Student(int the_id, std::string the_name);
    int get_id();
    std::string get_name();

private:
    int id;
    std::string name;
};

class Course{
public:
    Course(int the_id, std::string the_name, unsigned char the_credits);
    int get_id();
    std::string get_name();
    int get_credits();

private:
    int id;
    std::string name;
    unsigned char credits;
};

class Grade{
public:
    Grade(int sid, int cid, char the_grade);
    int get_student_id();
    int get_course_id();
    char get_grade();

private:
    int student_id;
    int course_id;
    char grade;
};