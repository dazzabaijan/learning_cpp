#include <string>
#include <vector>

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

class StudentRecords{
public:
    void add_student(int, std::string);
    void add_course(int, std::string, unsigned char);
    void add_grade(int, int, char);

    std::string get_student_name(int);
    unsigned char get_course_credits(int);
    float get_GPA(int);
    
    // my solution
    // int report_card(int);

    // his solution
    void report_card(int, std::ostream&);
    std::string get_course_name(int);
    void report_file(std::ofstream&);
    
private:
    std::vector<Student> students;
    std::vector<Course> courses;
    std::vector<Grade> grades;

    float get_num_grade(char);
};