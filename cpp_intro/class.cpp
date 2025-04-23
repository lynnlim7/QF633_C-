#include <iostream>
#include <string>

using namespace std;
// Define a class named Student
class Student {
    public:

    //default constructor- intialize object for the class
    Student(){  
        cout<< "calling student default construtor"<<endl;
    }
    
    //copy constructor - parsing `Student` type object by reference 
    Student(const Student& lhs) {  // `lhs` use `student` as base and make a copy of it 
        this->age = lhs.age;
        name = lhs.name;
        GPA = lhs.GPA;
    };

    Student(Student* lhs){ // using reference
        this->age = lhs->age;
        name = lhs->name;
        GPA = lhs->GPA;
    };

    // // destructor 
    // Student(){
    //     std::cout << "destructor is called" << "\n";
    // }

    // parsing by value/copy
    Student(std::string _name, int _age, double _gpa) {
        name= _name;
        age = _age;
        GPA = _gpa;
    };

    // setter
    void setName(std::string _name) { name = _name;};
    
    //inline get function (getter)
    inline const std::string getName() const { return name;}; // `inline` helps to save compiling time 
    inline const int getAge() const { return age;};
    inline const double getGpa() const { return GPA;};;

    void displayInfo() {
        std::cout << "Student Information:" << std::endl;
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << " years" << std::endl;
        std::cout << "GPA: " << GPA << std::endl;
        
    }

private:
    // Public data members
    std::string name;
    int age;
    double GPA;
};


int main() {
    // default constructor
    cout << "default construtor" << endl;
    Student std1;
    std1.setName("mike");
    std1.displayInfo();
    
    //detailed constroctor
    cout << "detailed construtor" << endl;
    Student std2 = Student("tester", 5, 5);
    std2.displayInfo();
    
    //copy construction
    cout << "copy construtor" << endl;
    Student std3(std2); // declaring object std3 with type student 
    std2.setName("david");
    std2.displayInfo();
    std3.displayInfo();
    
    //shallow copy default
    cout << "copy object by using operator =" << endl;
    Student std4 = std1;
    std4.setName("alice");
    std4.displayInfo();
    std1.displayInfo();
    
    return 0;
}