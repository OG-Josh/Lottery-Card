/* ======================================================================================= */
/* ======================================================================================= */
// Class: CS-1C
// Creator: Joshua Yang
// Contact: joshuayang0324@gmail.com
// Professor: Kath
// Date: 2/16/19
/* ======================================================================================= */
// Rules/Algorithm: Write a program that uses a random number generator to generate
// a three digit integer that allows the user to perform the following operation.
// 1. Sum the digits
// 2. Triple the number
// 3. Reverse the digitis
// b. Use an enum, typedef, and string variable
// c. Store 10 random numbers in an array
// d. Sort the array
// e. Write the array to an external file
// f. Call a function to read the external file
// g. Print the array in a function
// Use the command script to capture your interaction compiling and running 
// the program, including all operations, as shown below:
/* ======================================================================================= */
// Work: 
// CS1C Spring 2019 TTH HW-1 50pts Due: Th 1/24/2019
// cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ script hw01.scr
// Script started, file is hw01.scr
// cs1c@cs1c-VirtualBox ~/cs1c/hw01 $ date
// ... 
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ Is -1
// ... 
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ make all
// ...
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ Is -1
// ...
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ ./hw01
// ...//print out parts a, d & g above
// cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ exit
// Script done, file is hw01.scr
// Cs1c@cs1c-VirtualBox ~/cs1c/hw/01 $ make tar
// ...
// Submit the tar package file hw01.tar by Thursday January 24, 2019.
/* ======================================================================================= */
/* ======================================================================================= */
// Code:

#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <algorithm>
using namespace std;

vector<int> Lotto(int spots, int selected)
{
    vector<int> pool(spots);
    for (int i = 0; i < spots; i++)
        pool[i] = i + 1;
    srand(time(0));
    random_shuffle(pool.begin(), pool.end());
    vector<int> winners(pool.begin(), pool.begin() + selected);
    sort(winners.begin(), winners.end());
    return winners;
}

int main()
{
    vector<int> winners;
    winners = Lotto(51, 6);
    cout << "The Winners: ";
    for (size_t i = 0; i < winners.size(); i++)
        cout << winners[i] << ' ';
    cout << endl;
    return 0;
}

