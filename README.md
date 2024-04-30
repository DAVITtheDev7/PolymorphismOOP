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
- 
## How to Run
To run the University Management System provided in the README, follow these steps:

### Step 1: Set Up a C++ Development Environment

Ensure you have a C++ development environment set up on your computer. You can use an Integrated Development Environment (IDE) like Visual Studio, Code::Blocks, or any text editor along with a C++ compiler like GCC or Clang.

### Step 2: Copy the Code

Copy the provided C++ code, including the classes and the `main()` function, into a new file in your C++ development environment. Save the file with a `.cpp` extension, such as `university_management.cpp`.

### Step 3: Compile the Code

Compile the C++ code using your chosen C++ compiler. If you're using an IDE, there should be an option to compile the code within the interface. If you're using a text editor and command-line compiler, navigate to the directory containing your code file in the terminal and run the compilation command. For example, with GCC:

```bash
g++ -o university_management university_management.cpp
```

This command compiles the code into an executable named `university_management` (or whatever name you specified after the `-o` option).

### Step 4: Run the Executable

After successfully compiling the code, you'll find an executable file in your directory (in this example, `university_management`). Run the executable from the terminal or command prompt:

```bash
./university_management
```

This command executes the program, and you should see the output in the terminal or command prompt window.

### Step 5: Interact with the Program

Once the program is running, it will prompt you to enter grades for each subject. Follow the prompts to input the grades. After entering the grades, the program will display the student's information, including the entered grades and calculated GPA.

### Step 6: Review and Modify

Feel free to review the code, make modifications, and experiment with it to understand how it works. You can extend the functionality, add error handling, or integrate it into a larger project as needed.

### Note

Make sure to have a compatible C++ compiler installed on your system and set up your development environment properly to compile and run the code. If you encounter any compilation errors or issues running the program, double-check the code for errors and consult the documentation for your development environment and compiler for troubleshooting assistance.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
