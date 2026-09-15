#include <iostream>
#include <tchar.h>

int _tmain(int argc, _TCHAR* argv[])
{
    unsigned int h1; // Current time in hours
    unsigned int m1; // Current time in minutes
    /*Inputting variable values ​​from the keyboard*/
    std::cout << "What is the current hour? (0-23) ";
    std::cin >> h1; // Input hours
    std::cout << "What are the current minutes? (0-59) ";
    std::cin >> m1; // Input minutes
    unsigned int m2 = h1 * 60 + m1; // Convert current time to minutes
    unsigned int m3 = 24 * 60; // Convert midnight time to minutes
    unsigned int dm = m3 - m2; // Time remaining until midnight in minutes
    unsigned int h2 = dm / 60; // Time remaining until midnight in full hours
    // Remaining minutes until the end of the hour calculated above
    m2 = dm % 60;
    // --Displaying information on the screen--
    std::cout << "Current time: " << h1 << ":" << m1 << "\r\n";
    std::cout << "Time remaining until midnight: " << h2 << ":" << m2 << "\r\n";
    // -- Delaying screen output until the "Enter" key is pressed
    std::cin.ignore(); // Clearing the input buffer
    std::cin.get(); // Reading a character from the keyboard
    return 0; // Exiting the program (function)
}
