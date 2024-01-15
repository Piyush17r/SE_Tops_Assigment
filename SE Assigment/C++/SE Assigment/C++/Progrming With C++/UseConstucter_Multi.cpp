#include<iostream>
using namespace std;
class Students {
public:
    int roll_number;
    Students(int roll_number) {
        this->roll_number = roll_number;
        cout << "Students Constructor called with Roll Number: " << roll_number << endl;
    }
};
class Test : public Students {
public:
    int subject1_marks;
    int subject2_marks;
    Test(int roll_number, int subject1_marks, int subject2_marks) : Students(roll_number) {
        this->subject1_marks = subject1_marks;
        this->subject2_marks = subject2_marks;
        cout << "Test Constructor called with Subject 1 Marks: " << subject1_marks << " and Subject 2 Marks: " << subject2_marks << endl;
    }
};
class Result : public Test {
public:
    int total_marks;
    Result(int roll_number, int subject1_marks, int subject2_marks) : Test(roll_number, subject1_marks, subject2_marks) {
        this->total_marks = subject1_marks + subject2_marks;
        cout << "Result Constructor called with Total Marks: " << total_marks << endl;
    }
};

int main() {
    Result student1(101, 80, 90);

    return 0;
}
