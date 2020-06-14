/* 
Pooja would like to withdraw X $US from an ATM. 
The cash machine will only accept the transaction if X is a multiple of 5, 
and Pooja's account balance has enough cash to perform the withdrawal transaction (including bank charges). 
For each successful withdrawal the bank charges 0.50 $US. 
Calculate Pooja's account balance after an attempted transaction.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int w;
    double i;
    cin >> w;
    cin >> i;
    if (w % 5 == 0 && (w + 0.5) <= i)
        cout << i - w - 0.5 << endl;
    else
        cout << i << endl;
}
