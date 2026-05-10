#include <iostream>
using namespace std;

int ReadPositiveNumber(string Message)
{
    int Number = 0;  // Variable to store the user's input.
    do
    {
        cout << Message << endl; // Display the prompt message.
        cin >> Number;           // Read the number entered by the user.
    } while (Number <= 0);       // Continue prompting if the number is not positive.

    return Number;  // Return the validated positive number.
}
void ReadArray(int arr[100], int& arrLength)
{
    cout << "\nEnter number of elements:\n";
    cin >> arrLength;  // Read the total number of elements the user wishes to input.

    cout << "\nEnter array elements: \n";
    // Loop from 0 to arrLength - 1 to read each array element.
    for (int i = 0; i < arrLength; i++)
    {
        cout << "Element [" << i + 1 << "] : ";  // Display a prompt for each element (using 1-based indexing for clarity).
        cin >> arr[i];                           // Read the current element into the array.
    }
    cout << endl;  // Print an extra newline for formatting.
}

void PrintArray(int arr[100], int arrLength)
{
    // Loop through the array and print each element followed by a space.
    for (int i = 0; i < arrLength; i++)
        cout << arr[i] << " ";

    cout << "\n";  // Print a newline after all elements are printed.
}

int TimesRepeated(int Number, int arr[100], int arrLength)
{
    int count = 0;  // Initialize a counter to zero.
    // Loop through the array indices from 0 to arrLength - 1.
    for (int i = 0; i <= arrLength - 1; i++)
    {
        if (Number == arr[i])  // If the current element equals the number we're checking,
        {
            count++;  // Increment the counter.
        }
    }
    return count;  // Return the total count.
}

// Main function: Entry point of the program.
int main() {

    int arr[100];      // Declare an array to hold up to 100 integers.
    int arrLength;     // Variable to store the number of elements in the array.
    int NumberToCheck; // The number whose frequency will be checked in the array.

    // Read array elements from the user.
    ReadArray(arr, arrLength);

    // Prompt the user to enter the number for which frequency is to be checked.
    NumberToCheck = ReadPositiveNumber("Enter the number you want to check: ");

    // Display the original array.
    cout << "\nOriginal array: ";
    PrintArray(arr, arrLength);

    // Display the frequency count for the specified number.
    cout << "\nNumber " << NumberToCheck;
    cout << " is repeated ";
    cout << TimesRepeated(NumberToCheck, arr, arrLength) << " time(s)\n";

    return 0;  // Return 0 to indicate successful program execution.
}

