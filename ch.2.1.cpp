#include <iostream>

using namespace std;

int main()
{
    // Create variables
    int age; // Age handle
    string name; // Name handle

    // Prompt user for the info and save the inputs
    cout <<"1) How old are you?\n";
    cin >> age;
    cout << "2) What's your name?\n";
    cin >> name;

    // Display the greatings message with user's name and age
    cout << "Hello " << name << "\nYour age is " << age << endl;
    return 0;
}