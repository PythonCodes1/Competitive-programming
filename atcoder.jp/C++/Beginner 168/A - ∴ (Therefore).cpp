#include <bits/stdc++.h>
using namespace std;
int main(){
  int N;
  cin >> N;
  if (N % 10 == 3){
    cout << "bon" << endl;
  } else if (N % 10 == 0 || N % 10 == 1 || N % 10 == 6 || N % 10 == 8){
    cout << "pon" << endl;
  } else {
    cout << "hon" << endl;
  }
}


#include <iostream>
using namespace std;
int main(){
    int a;
    cin >> a;
    int n=a%10;
    if(n==2 or n==4 or n==5 or n==7 or n==9) 
        cout << "hon" << endl;
    else if(n==3) 
        cout << "bon" << endl;
    else 
        cout << "pon" << endl;
    return 0;
}
