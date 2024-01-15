#include <iostream>
#include <string>

class PersonalDetails {
protected:
    std::string name;
    int age;

public:
    PersonalDetails(const std::string& n, int a) : name(n), age(a) {}
    void readPersonalDetails() {
        std::cout << "Enter name: ";
        std::cin >> name;
        std::cout << "Enter age: ";
        std::cin >> age;
    }
    void displayPersonalDetails() const {
        std::cout << "\nPersonal Details:\n";
        std::cout << "Name: " << name << "\nAge: " << age << std::endl;
    }
};
class AcademicDetails {
protected:
    float marks[3];

public:
    AcademicDetails(float m1, float m2, float m3) {
        marks[0] = m1;
        marks[1] = m2;
        marks[2] = m3;
    }
    void readAcademicDetails() {
        std::cout << "Enter marks for three subjects:\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << "Enter marks for subject " << (i + 1) << ": ";
            std::cin >> marks[i];
        }
    }
    void displayAcademicDetails() const {
        std::cout << "\nAcademic Details:\n";
        for (int i = 0; i < 3; ++i) {
            std::cout << "Subject " << (i + 1) << " Marks: " << marks[i] << std::endl;
        }
    }
};

class StudentMarkSheet : public PersonalDetails, public AcademicDetails {
public:
    StudentMarkSheet(const std::string& n, int a, float m1, float m2, float m3)
        : PersonalDetails(n, a), AcademicDetails(m1, m2, m3) {}
    void readStudentMarkSheet() {
        readPersonalDetails();
        readAcademicDetails();
    }
    void displayStudentMarkSheet() const {
        displayPersonalDetails();
        displayAcademicDetails();
    }
};

int main() {
    StudentMarkSheet student("John Doe", 20, 75.5, 88.0, 92.5);
    std::cout << "Enter details for the student:\n";
    student.readStudentMarkSheet();
    std::cout << "\nStudent Mark Sheet:\n";
    student.displayStudentMarkSheet();

    return 0;
}
