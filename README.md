# C++ Module 05: Repetition and Exceptions

This repository contains the solutions for Module 05 of the C++ curriculum. This module introduces a critical aspect of robust software development: exception handling. The exercises focus on using `try`, `catch`, and `throw` to manage errors and exceptional situations in an object-oriented context.

---

## Core Concepts Covered

This module explores the following key topics:

-   **Exception Handling**: Using `try`, `catch`, and `throw` to gracefully handle runtime errors without crashing the program.
-   **Custom Exception Classes**: Designing and throwing custom exception classes that inherit from `std::exception` for more specific error reporting.
-   **Class Interactions and Error States**: Building complex interactions between classes (`Bureaucrat`, `Form`) where one object's state can cause another to throw an exception.
-   **Abstract Base Classes**: Reinforcing the concept of abstract classes to create a common interface for a family of related types (`AForm`).
-   **Factory Pattern**: Implementing a simple factory (`Intern`) to create objects of different types dynamically based on runtime information.

---

## Exercise Breakdown

### `ex00: Mommy, when I grow up, I want to be a bureaucrat!`
-   **Goal**: To introduce exception handling. A `Bureaucrat` class is created that throws custom exceptions (`GradeTooHighException`, `GradeTooLowException`) if its grade goes out of the valid range (1-150).

### `ex01: Form up, maggots!`
-   **Goal**: To explore exceptions in the context of class interactions. A `Form` class is introduced, and a `Bureaucrat` must have a sufficiently high grade to sign it. If not, an exception is thrown.

### `ex02: No, you need form 28B, not 28C...`
-   **Goal**: To combine polymorphism with exception handling. The `Form` class becomes an abstract base class (`AForm`), and several concrete forms (`ShrubberyCreationForm`, `RobotomyRequestForm`, etc.) are implemented, each with its own execution logic and requirements that can trigger exceptions.

### `ex03: At least this beats coffee-making`
-   **Goal**: To implement a simple factory pattern. An `Intern` class is created with a `makeForm` method that can create different types of forms dynamically based on a string name, avoiding messy `if/else` structures.

---

## How to Compile and Run

Each exercise is contained in its own directory (`ex00`, `ex01`, etc.) and includes a `Makefile`.

1.  **Navigate to an exercise directory**:
    ```bash
    cd ex00
    ```

2.  **Compile the project**:
    ```bash
    make
    ```

3.  **Run the executable**:
    The executable name is specified in the `Makefile` for each exercise.
    ```bash
    ./a.out
    ```

4.  **Clean up**:
    -   `make clean`: Removes the intermediate object files (`.o`).
    -   `make fclean`: Removes object files and the final executable.
    -   `make re`: Cleans and rebuilds the project.

All projects are compiled using `c++` with the flags `-Wall -Wextra -Werror -std=c++98`.
