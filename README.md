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
