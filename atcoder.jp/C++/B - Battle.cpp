#include <iostream>

using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d;
    e = 100;
    while(e>0){
        e--;
        c = c-b;
        if(c<=0){
            cout << "Yes" << endl;
            break;
        }
        a = a-d;
        if(a<=0){
            cout << "No" << endl;
            break;
        }
    }
}

//Takahashi and Aoki will have a battle using their monsters.
//The health and strength of Takahashi's monster are A and B, respectively, and those of Aoki's monster are C and D, respectively.
//The two monsters will take turns attacking, in the order Takahashi's, Aoki's, Takashi's, Aoki's, ...
//Here, an attack decreases the opponent's health by the value equal to the attacker's strength. 
//The monsters keep attacking until the health of one monster becomes 0 or below.
//The person with the monster whose health becomes 0 or below loses, and the other person wins.
//If Takahashi will win, print Yes; if he will lose, print No.
