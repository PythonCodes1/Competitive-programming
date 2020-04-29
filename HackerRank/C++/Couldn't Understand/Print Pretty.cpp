/* 
Input Format

The first line contains an integer, T, the number of test cases.
Each of the T subsequent lines describes a test case as 3 space-separated floating-point numbers: A, B, and C, respectively.


Output Format

For each test case, print 3 lines containing the formatted A, B, and C, respectively. Each A, B, C and  must be formatted as follows:

A: Strip its decimal (i.e., truncate it) and print its hexadecimal representation (including the 0x prefix) in lower case letters.
B: Print it to a scale of 2 decimal places, preceded by a + or - sign (indicating if it's positive or negative), right justified,
and left-padded with underscores so that the printed result is exactly 15 characters wide.
C: Print it to a scale of exactly nine decimal places, expressed in scientific notation using upper case.

https://www.hackerrank.com/challenges/prettyprint/problem
*/

#include <iostream>
#include <iomanip> 
using namespace std;

int main() {
	int T; cin >> T;
	cout << setiosflags(ios::uppercase);
	cout << setw(0xf) << internal;
	while(T--) {
		double A; cin >> A;
		double B; cin >> B;
		double C; cin >> C;
	    int len=0;
        double AA=A;
        while(AA>=1)
        {
            len+=1;
            AA/=16;
        }
        len+=2;
        int length=0;
        double BB=B;
        if(B<0)
            BB=B*(-1);
        while(BB>=1){
            length+=1;
            BB/=10;
        }
        length=15-length-3;

         cout << showbase; // fill with 0s
         cout << hex << nouppercase << setw(len) << (long long int)A <<endl;
         cout.unsetf ( std::ios::floatfield );
         cout<< fixed <<  setprecision(2);
         cout << showbase // show the 0x prefix
         << internal // fill between the prefix and the number
         << setfill('_'); // fill with 0s
         
         if(B>0)
             cout << setw(length) << "+" << B << endl;
         else
             cout << setw(length) << "-" << (-1)*B << endl;
         cout.precision(9);
         cout << scientific << uppercase << C <<endl;

	}
	return 0;

}
