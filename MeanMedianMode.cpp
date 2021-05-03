/*
Mean, Median, Mode
Name
Date
This program has three functions that should find the mean,
median, and mode of an array of numbers. However, the functions
are not complete. Write the body for each function using the
provided pseudocode so that each function works as intended.
When you are done, update the comment header!
*/
#include <iostream>
using namespace std;

/*
Finds the mean of the numbers stored in array.
*/
double mean(int array[], int length)
{
    // write code here!
}

/*
Finds the median of the numbers stored in array.
*/
double median(int array[], int length)
{
    // write code here!
}

/*
Finds the mode of the numbers stored in array.
*/
int mode(int array[], int length)
{
    // write code here!
}

int main()
{
    // Nothing needs to be change in the main!
    const int DATA_SET_LENGTH = 11;
    int dataSet[DATA_SET_LENGTH] = { 1, 4, 4, 5, 5, 5, 6 };
    cout << mean(dataSet, DATA_SET_LENGTH) << "\n";
    cout << median(dataSet, DATA_SET_LENGTH) << "\n";
    cout << mode(dataSet, DATA_SET_LENGTH) << "\n";
    return 0;
}
