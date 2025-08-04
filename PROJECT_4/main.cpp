#include <iostream>
#include <vector>

using namespace std;

int main() {

    vector <int> numbers;
    char selection {};

    do {
        // Display menu
        cout << "\nP - Print number" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display menu of the number" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;
        cout << "\nEnter your choice: ";
        cin >> selection;

        if (selection == 'P' || selection == 'p') {
            if (numbers.size() == 0)
                cout << "[] - The list is empty" << endl;
            else {
                cout << "[ ";
                for (auto num:numbers)
                    cout << num <<  " ";
                cout << "]" << endl;
            }
        } else if (selection == 'a' || selection == 'A') {
            int num_to_add {};
            cout << "Enter an integer to add to the list: ";
            cin >> num_to_add;
            numbers.push_back(num_to_add);
            cout << num_to_add << " added" << endl;
        } else if (selection == 'm' || selection == 'M') {
            if (numbers.size() == 0)
                cout << "Cannot calculate mean - no data in the list" << endl;
            else {
                int total{};
                for (auto num:numbers)
                    total += num;
                cout << "The mean is: " << static_cast<double>(total)/numbers.size() << endl;
            }
        } else if (selection == 's' || selection == 'S') {
            if (numbers.size() == 0)
                cout << "Cannot provoid smallest number - no data in the list" << endl;
            else {
                int smallest = numbers.at(0);
                for (auto num:numbers)
                    if (num < smallest)
                        smallest = num;
                cout << "The smallest number is: " << smallest << endl;

            }
        } else if (selection == 'l' || selection == 'L') {
            if (numbers.size() == 0)
                cout << "Cannot provoid largest number - no data in the list" << endl;
            else {
                int largest = numbers.at(0);
                for (auto num:numbers)
                    if (num > largest)
                        largest = num;
                cout << "The smallest number is: " << largest << endl; 
            }
        } else if (selection == 'q' || selection == 'Q') {
            cout << "Goodbyee" << endl;
        } else {
            cout << "Unknown option selcted, please try again" << endl;
        }

    } while (selection != 'q' && selection != 'Q');

    return 0;
}