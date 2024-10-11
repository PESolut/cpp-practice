#include <iostream>

// we define the main function: this is the entry point of the program
// cpp expects this function to return an int: to which will be 0 if the program runs successfully
int main() {
    // std::cout is the standard output stream: it's used to display messages to the user   
    // << is the insertion operator: it inserts the message into the output stream  
    // every statement in c++ ends with a semicolon

    std::cout << "Hello, World!";
    // return is to indicate the program printed with no problems
    return 0
}