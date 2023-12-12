/**
 *   @file: integers.cc
 * @author: Hannah Culver
 *   @date: October 3, 2021
 *  @brief: homework 4 (integers) ~ objectives: integer arithmetic, functions, menus
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

/**
 * displayMenu
 * @param none
 * @return menu with five choices
 */
void displayMenu ();

/**
 * getNumDigits
 * @param number number inputted by the user
 * @return the number of digits in number
 */
int getNumDigits (int number);

/**
 * getNthDigit
 * @param number number inputted by the user
 * @param n position to be found in number
 * @return the digit number specified by n (right most digit is digit one)
 */
int getNthDigit (int number, int n);

/**
 * getSumDigits
 * @param number number inputted by the user
 * @return the total value of all the digits
 */
int getSumDigits (int number);

/**
 * isPalindrome
 * @param number number inputted by the user
 * @return true if the number is a palindrome (1, 121, 1221, 134431, etc), false otherwise
 */
bool isPalindrome (int number);

/**
 * getInteger
 * @param none
 * @return a positive integer
 */
int getInteger ();

/**
 * getPosition
 * @param number number inputted by the user
 * @return valid position
 */
int getPosition (int number);

int main(int argc, char const *argv[]) {

    int choice;
    do //use a do-while loop so that the user is prompted immediately after running the program
    {
        displayMenu();
        cin >> choice;

        if (choice == 1)
        {
            int number;
            number = getInteger(); //using the getInteger function

            cout << number << " has " << getNumDigits(number) << " digits." << endl; //using the getNumDigits function
        }

        else if (choice == 2)
        {
            int number;
            number = getInteger(); //using the getInteger function
            
            int n;
            n = getPosition(number); //using the getPosition function

            int num_digits = getNumDigits(number); //using the NumDigits function

            if (n > num_digits)
            {
                cout << "Invalid position." << endl;
            }
            else
            {
                cout << "Digit number " << n << " is " << getNthDigit(number, n) << "." << endl; //using the getNthDigit function
            }
        }

        else if (choice == 3)
        {
            int number;
            number = getInteger(); //using the getInteger function

            cout << "The sum of all digits in " << number << " is " << getSumDigits(number) << "." << endl; //using the getSumDigits function
        }

        else if (choice == 4)
        {
            int number;
            number = getInteger(); //using the getInteger function

            if (isPalindrome(number))
            {
                cout << "The number " << number << " is a palindrome." << endl; //displays if returned true
            }
            else
            {
                cout << "The number " << number << " is not a palindrome." << endl; //displays if returned false
            }
        }

        else if (choice == 5)
        {
            cout << "Done!" << endl;
        }
    } while (choice != 5); //the loop will continue to run until the user decides to quit (by entering a 5)

    return 0;
}/// main

void displayMenu () //our lovely menu, such fine cuisine
{
    cout << "1. Find the number of digits in an integer." << endl;
    cout << "2. Find the nth digit in an integer." << endl;
    cout << "3. Find the sum of all digits of an integer." << endl;
    cout << "4. Is the integer a palindrome?" << endl;
    cout << "5. Quit" << endl;
    cout << "Please enter your choice: ";
}

int getNumDigits (int number)
{
    int count = 0; //initialization
    while (number != 0) //condition
    {
        number = number / 10;
        count++; //update
    }
    return count;
}

int getNthDigit (int number, int n)
{
    int nth_digit = 0;
    number = number / pow(10,n-1); //using the pow function (must include the cmath library)
    nth_digit = number % 10;
    return nth_digit;
}

int getSumDigits (int number)
{
    int n = number;
    int sum = 0;
    while (n > 0)
    {
        int digit = n % 10;
        sum = sum + digit;
        n = n / 10;
    }
    return sum;
}

bool isPalindrome (int number)
{
    int n = number;
    int digit = 0;
    int reverse = 0; //reverse of number

    do
    {
        digit = number % 10;
        reverse = (reverse * 10) + digit;
        number = number / 10;
    } while (number != 0);
    
    if (n == reverse)
    {
        return true;
    }
    return false;
}

int getInteger ()
{
    int value;
    do
    {
        cout << "Please enter a positive integer: ";
        cin >> value;
    } while (value <= 0);
    return value;
}

int getPosition(int number) //same as getInteger function, except for the prompt
{
    int position;
    do
    {
        cout << "Please enter a position: ";
        cin >> position;
    } while (position <= 0);
    return position;
}