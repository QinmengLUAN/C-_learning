#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int height;
    int inches;
    int feet;
    string name; // This will be the user's name

    cout << "What is your name? " << endl;
    cin >> name;
    cout << "What is your height? " << endl;
    cin >> height;
    cout << name << " is " << height << " centimeters tall." << endl;

    //inches << height%12; // Covert height into feet
    //feet << height/12; // Covert height into feet
    cout << name << " is " << height%12 << " feet and " << height/12 << " inches tall."<< endl;

    return 0;
}
