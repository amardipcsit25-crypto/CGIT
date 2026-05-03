# CGit
This C program reads student data from a file named "student.data", analyzes the data to find the students with the maximum and minimum ages, and displays the results both in the console and graphically using the graphics.h library. It assumes the file contains 10 student records in the format: name address gender age rollno.

## Requirements
- Turbo C or compatible compiler (due to graphics.h usage).
- BGI graphics driver path set to "c:\\turbo c3\\bgi".
- A file named "student.data" in the same directory with 10 lines of student data.

## How to Run
1. Compile the program using a C compiler (e.g., Turbo C).
2. Ensure "student.data" exists with the required data.
3. Run the executable.
4. The program will display details in the console and open a graphics window showing details of the oldest and youngest students.

## File Structure
- `code.c`: Main program file.
- `student.data`: Input data file (not included; user must provide).

## Notes
- This program uses outdated libraries like conio.h and graphics.h, which are specific to DOS-based systems.
- Ensure the graphics driver path is correct for your setup.

## About
- Author: @amardipcsit25-crypto
- Repository name: `CGit`

## Build
```sh
gcc Repocheck.c -o Repocheck.exe
```

## Run
```sh
./Repocheck.exe
```
### IN ARRAY 
I have learned about the arrary concept and its use in the programe by doing related program.
Basically array is the variable in which we can store multiple values without creating multiple variables.Its index always start with 0.
Its types are one dimensional arrary(for sorting the arrary in ascending and descending  problems) and multi-dimensional array(for martrix problems).

## About string function 
String is the function which comes under the header file <string.h>.Its data types is %s.String is written under double quote(" ").

 1.strlen():used to the calculated the length of string.   
 
 2.strcpy():used to copy the string.

 3.strcmp():used to compare between the two string.
 
 4.strrev(); used to reverse the string.
              
 5.strlwr():used to convert to lowercase.
 
 6.strupr():used to convert to uppercase.
 
 7.strcat():used to join the two string.
 
 ### In the function 

Functions in C Programming
 Introduction
In C programming, a function is a block of code that performs a specific task. Functions help in breaking a large program into smaller, manageable, and reusable parts.

 Objective
 
.To understand the concept of functions in C

.To learn how to declare, define, and call functions

.To improve code reusability and readability

 Types of Functions
Functions in C are mainly of two types:

1. Library Functions

These are predefined functions provided by C.
Examples:

printf()

scanf()

strlen()

2. User-defined Functions
These are created by the programmer.

 Function Structure
  A function has three main parts:

1. Declaration (Prototype)
    return_type function_name(parameters);
2. Definition
    return_type function_name(parameters) {
    // code
     }
3. Function Call
   function_name(arguments);

   Types of User-defined Functions
   No arguments, no return value

   Arguments, no return value

   No arguments, with return value

   Arguments, with return value

Example Program
   #include <stdio.h>

// Function declaration
   int add(int a, int b);

    int main() {
      int result;
    
    // Function call
    result = add(5, 3);
    
    printf("Sum = %d", result);
    return 0;
}

// Function definition
int add(int a, int b) {
    return a + b;
}

 Advantages of Functions
  Code reusability

  Easy debugging

  Improves readability

  Reduces code duplication

Conclusion

Functions are an essential part of C programming. They make programs modular, organized, and easier to maintain. Using functions properly helps in writing efficient and structured code.

 POINTER IN C
 Introduction

A pointer is a variable that stores the address of another variable.

 Declaration & Initialization
int *ptr;
int a = 10;
ptr = &a;

 Dereferencing
printf("%d", *ptr);  // value of a

Types of Pointers
Null Pointer → int *p = NULL;
Void Pointer → void *p;
Pointer to Pointer → int **pp;

Pointer Arithmetic.
What is Pointer Arithmetic?

Pointer arithmetic means performing operations on pointers to move through memory locations.

 Important: Pointer movement depends on the data type size, not just 1 byte.

Basic Operations
1. Increment (ptr++)

Moves pointer to the next memory location of its type.

int a = 10;
int *ptr = &a;

ptr++;  // moves by sizeof(int)

If int = 4 bytes, pointer moves 4 bytes forward

2. Decrement (ptr--)

Moves pointer to the previous location

ptr--;
3. Addition (ptr + n)

Moves pointer forward by n elements

ptr = ptr + 2;

 Moves 2 × sizeof(data_type) bytes

4. Subtraction (ptr - n)

Moves pointer backward

ptr = ptr - 1;
5. Difference Between Two Pointers
int diff = ptr1 - ptr2;

Gives number of elements between them (not bytes)

 Example with Array
#include <stdio.h>

int main() {
    int arr[3] = {10, 20, 30};
    int *ptr = arr;

    printf("%d\n", *ptr);      // 10
    printf("%d\n", *(ptr+1));  // 20
    printf("%d\n", *(ptr+2));  // 30

    return 0;
}

Here:

ptr → first element
ptr+1 → second element
ptr+2 → third element
If:

int *ptr;

Then:

ptr + 1 → moves 4 bytes (if int = 4 bytes)
ptr + 2 → moves 8 bytes

But:

char *ptr;
ptr + 1 → moves 1 byte only

Why Pointer Arithmetic is Useful
Traversing arrays
Working with strings
Dynamic memory handling
Implementing data structures

Conclusion

Pointer arithmetic allows efficient navigation through memory using type-based steps, making it powerful for arrays and advanced programming.

ABOUT STRUCTURE

What is a Structure?

A structure in C is a user-defined data type that allows you to store different types of data in one unit.

It is useful when you want to represent a real-world entity like an employee, student, etc.

Syntax

struct structure_name {
    data_type member1;
    data_type member2;
    ...
};

Declaration & Initialization

struct employee {
    int id;
    char name[50];
    float salary;
};

struct employee e1 = {101, "Ram", 50000};

Accessing Structure Members

Use the dot operator (.)

printf("%d", e1.id);

Array of Structures

Used when handling multiple records.

struct employee emp[3];

Structure with Pointer

Use arrow operator (->)

struct employee *ptr;

ptr = &e1;

printf("%d", ptr->id);

Nested Structure

Structure inside another structure.

struct date {
    int day, month, year;
};

struct employee {
    int id;
    struct date dob;
};

Passing Structure to Function

void display(struct employee e) {
    printf("%d", e.id);
}

Why Use Structure?

Organizes related data together
Makes programs easy to manage
Useful in file handling and database-like programs

Example:

struct employee{
    int emp_id;
    char emp_name[50];
    char emp_gender[10];
    int emp_age;
    char emp_department[50];
    long int salary;
};

Important Notes 

Use . for normal variable
Use -> for pointer

scanf("%s", emp.emp_name);   // correct
Structures help a lot in file handling (fscanf, fprintf)
