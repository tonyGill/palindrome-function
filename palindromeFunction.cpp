/*

Algorithm was designed in the following series of steps:
1) Declare and define the palindrome drome function
2) In the palindrome function get string input from the user
3) Retreive the the string input and iterate over the string 
4) If the string of characters reads the same forwards and backwards, string is palindrome word, otherwise not
5) Declare and define the main function and call the palindrome function within main

Functions/Formulas:

Two functions in this case: palindromeFunct and Main
palindromeFunct reads a user input as a string and determines if the characters read the same forward and in reverse

main function calls the palindrome funt


Revision History:
March 23, 2019: First working edition created, revised and completed


*/





#include<iostream>
#include<string>
using namespace std;


// Palindrome function header
void palindromeFunct()
{
// Palindrome function definition

	// String variable type used to determine if word user enters is a palindrome word
	string word;

	// Integer variable type for determining length of the string the user enters
	int length;

	// Initialize boolean type variable to determine the the word is or is not a palindrome
	bool isPalindrome = true;

	// Welcomes the user to the palindrome function 
	cout << "Welcome to the Palindrome Function!" << "\nPlease Enter a String: " << endl;

	// Retrieves the string the user entered as input
	getline(cin, word);

	// Determines the size or length of the entire word/string entered by the user
	length = word.length();

	// Iterates over the word starting from beginning to the end of the word length letter by letter
	for (int i = 0; i < (length / 2); i++)
	{
		// Conditional if statement checks if the word/string the user enters is the same both forward and in reverse
		if (word[i] != word[(length - 1) - i])

			// Sets the boolean type variable isPalindrome to false indicating the word entered is not a palindrome
			isPalindrome = false;
	}
	
	// If the word is the same both forward and backwards the word entered is a palindrome word
	if (isPalindrome == true)
		cout << "Palindrome!" << endl;

	// Otherwise the word entered is not the same forward and backwards, thus is not a palindrome word
	else
		cout << "Not a Palindrome" << endl;

}

// Main function header 
int main() {

	// Main function defintion

	// Calls the palindrome function to determine whether or not the user entered word is a palindrome word
	palindromeFunct();
}