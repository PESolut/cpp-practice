// lets import iostream library
// this header file that defines the standard input/output stream objects
#include <iostream>
// lets import ctime library.
// This header file contains definitions of functions to get and manipulate date and time information.
#include <ctime>

// we define the main function: this is the entry point of the program
// cpp expects this function to return an int: to which will be 0 if the program runs successfully
int main() {
    // std::cout is the standard output stream: it's used to display messages to the user   
    // << is the insertion operator: it inserts the message into the output stream  
    // every statement in c++ ends with a semicolon

    std::cout << "Hello, World!\n";
    // return is to indicate the program printed with no problems

    // Before our program ends, let's get the current time and output it to the user
    
    // time_t is a data type used to represent calendar time in C++
    // 'now' is a variable that will store the current time
    // time(0) is a function call that returns the current calendar time as a time_t value
    // The argument 0 tells the function to return the current time
    time_t currentTime = time(0);

    // now to convert our time_t currentTime to a string
    // char: declares a character data type
    // *: indicates that dt is a pointer to a char (i.e., it will store a memory address)
    // stringTime: is the name of our variable
    // ctime: a function that converts a time_t value to a string
    // &: address-of operator, gets the memory address of currentTime
    // currentTime: our time_t variable holding the current time
    // The whole line creates a pointer 'dt' to a string representation of currentTime
    char* stringTime = ctime(&currentTime);

    // Output the current time to the console
    // Note: String concatenation occurs here with the << operator
    std::cout << "Current time: " << stringTime;

    
    // Return 0 to indicate the program executed successfully
    return 0;
}