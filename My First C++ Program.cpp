// My First C++ Program.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
//My name is jadon//

int main()
{
    std::cout << "\t\t\tWelcome to my First C++ Program \nConvert a large number of seconds into, minutes, and seconds." << endl;

    int num, sec;
    cout << "\nPlease enter a large number of seconds:";
        cin >> num, sec;
        
        cout << "The number of hours in the number is:" << num / 3600 << "\n";

        num = num % 3600;
        
        cout << "The number of minutes in the number is:" << num /60 << "\n";
        
        cout << "The number of seconds in the number is:" << num % 60 << "\n";

        cout << "Press any key to continue\n" << endl;


    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
