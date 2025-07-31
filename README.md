# Arrays and Strings in CPP
Aim: To study and implement C++ Arrays and Strings.

Tools Used: VS Code or Programiz online cpp compiler.

# Theory
## Arrays in CPP
An array in C++ is a collection of elements of the same data type stored in consecutive memory locations. Elements are accessed using an index starting from 0, allowing fast access. The size of an array is fixed at the time of creation, making it less flexible.  Arrays are commonly used to store and process multiple values efficiently.

```
data_type array_name[size];
```

## Strings in CPP
A string in C++ is a sequence of characters used to store text. It can be created as a character array or using "string" data-type directly. Strings are more flexible because it allows easy operations like adding, conactenating, comparing, and finding length. Unlike arrays, strings can change size dynamically. Strings are commonly used for storing and processing text in programs.

```
string string_name=" ";
    //or
string string_name;
```

# Program 1: Declaring and Input-Output of Arrays

An array is declared and input is taken from user for that array in form of marks of specified number of subjects. Once the entered marks values are stored, array is displayed.

Algorithm:

1. Start and declare an array to store marks and a variable for the number of subjects.
2. Input the number of subjects from the user.
3. Loop from 0 to (number of subjects - 1) and take marks input for each subject, storing it in the array.
4. Display all the stored marks by looping through the array.
5. End the program

# Program-2: Searching in Array

User can search for specific value of marks that is stored in the array. 

Algorithm:

1. Start the program and input the size of the array (n).
2. Declare an array marks[n] to store the marks of subjects.
3. Take input of n marks from the user and store them in the array.
4. Display all the entered marks.
5. Input the mark to be searched from the user.
6. Search the array for the entered mark:
7. If found, display its position and stop.
8. If not found, display “Marks not found.”
9. End the program.

# Program-3: Reversing the Array

Inputted array is reversed by using for loop. Reversed array is printed. 

Algorithm:


