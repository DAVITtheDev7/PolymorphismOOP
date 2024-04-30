## University Management System

This is a simple University Management System implemented in C++ using object-oriented programming concepts. The system includes classes for representing universities, students, and their grades.

### Classes

#### 1. University

- The `University` class represents a university and includes a member variable `faculty` to store the name of the faculty.

- It has methods to set and get the faculty name.

#### 2. Student

- The `Student` class is derived from the `University` class and represents a student enrolled in the university.

- It includes member variables to store first name, last name, age, ID, and faculty.

- The constructor initializes the student's data including the faculty inherited from the `University` class.

- It has a method `setData` to set the student's data and a virtual method `showInfo` to display the student's information.

#### 3. Grade

- The `Grade` class is derived from the `Student` class and represents the grades of a student.

- It includes member variables to store subjects, grades, and GPA for each subject.

- The constructor initializes the student's data inherited from the `Student` class.

- It has methods to set subjects and grades, calculate GPA based on grades, and display the student's grades and GPA.

### Usage

- In the `main()` function, a `Grade` object `g` is created with student data.

- The `setSubjects()` method is called to input grades for each subject.

- A pointer of type `Student` is assigned the address of the `Grade` object.

- The `showInfo()` method is called using the pointer to display the student's information including grades and GPA.

### How to Compile and Run

1. Copy the provided code into a C++ compiler environment.

2. Compile the code.

3. Run the compiled executable.

### Example

```cpp
#include <iostream>
using namespace std;

// Place the provided classes here...

int main() {

	Student* s1;

	Grade g("Davit", "Mamuladze", 18, 12345, "CS");

	g.setSubjects();

	s1 = &g;

	s1->showInfo();

    return 0;
}
```

### Note

- This system is a simplified representation for educational purposes and may require enhancements for real-world applications, such as data validation, error handling, and additional functionalities.
## How to Run
1. Ensure you have a C++ compiler installed on your system.
2. Copy the provided code into a C++ source file (e.g., `main.cpp`).
3. Compile the source file using your preferred C++ compiler. For example, using `g++`:
   ```
   g++ main.cpp -o employee_intro
   ```
4. Run the compiled executable:
   ```
   ./employee_intro
   ```

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
