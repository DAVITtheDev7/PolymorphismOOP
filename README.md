# Mini Educational Project: Employee Introduction System

## Overview
This project demonstrates a simple educational example of an employee introduction system implemented in C++. It consists of classes representing employees, specifically focusing on programmers and their respective attributes.

## Features
- **Employee Class**: The base class representing an employee with attributes such as name, company, and age.
- **Programmer Class**: A derived class from the Employee class, representing a programmer. It extends the base class with additional attributes to store programming languages.

## Implementation Details
- The `Employee` class contains basic information about an employee such as name, company, and age. It also provides a method to introduce the employee.
- The `Programmer` class inherits from the `Employee` class and adds a list of programming languages known by the programmer.
- Polymorphism is demonstrated by overriding the `IntroduceYourself()` method in the `Programmer` class to include information about the programming languages.
- The `main()` function initializes a programmer object, assigns it to an `Employee` pointer, and calls the `IntroduceYourself()` method to demonstrate polymorphic behavior.

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

## Example Output
Upon running the program, you will see an introduction of the programmer, including their name, company, age, and the list of programming languages they know.

## License
This project is licensed under the MIT License. See the [LICENSE](LICENSE) file for details.
