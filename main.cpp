#include <iostream>
using namespace std;

int main()
{
    //Declare and initialize variables
    double id = 0.0, sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
    const double bonus1 = 750.00, bonus2 = 500.00, bonus3 = 250.00;

    //Add up the bonuses for each range
    for (int i = 1968; i <= 1980; i++)
    {
        sum2 += bonus2;
    }
    for (int i = 1981; i <= 2929; i++)
    {
        sum1 += bonus1;
    }
    for (int i = 2930; i <= 3165; i++)
    {
        sum3 += bonus3;
    }
    //Declare and calculate the totalSum
    double totalSum = sum1 + sum2 + sum3;

    //Magic formula to display final result to hundredths place
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    //Display the total sum CEO needs to set aside for employee bonuses
    cout << "The total sum to set aside for bonuses is $"
        << totalSum << endl;
    return 0;
}

/*
Name        : Homework5
Arguements  : double id, sum1, sum2, sum3, totalSum, bonus1, bonus2, bonus3
Return      : 0
Definition  : Add up all the bonuses to determine the money to set aside
*/
