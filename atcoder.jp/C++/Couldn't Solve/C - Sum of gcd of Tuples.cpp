/*
Find 
K ∑ a = 1
K ∑ b = 1
K ∑ c = 1
gcd ( a , b , c ).
Here gcd ( a , b , c ) denotes the greatest common divisor of a, b, and c.

https://atcoder.jp/contests/abc162/tasks/abc162_c
*/

//EDITORITAL: https://img.atcoder.jp/abc162/editorial.pdf

//Recurrent version
int gcd(int p, int q){
    if(p % q == 0)
    return q;
    return gcd(q, p % q);
}
//Non-recurrent version
int gcd(int p, int q){
    while(q != 0){
        int r = p % q;
        p = q;
        q = r;
    }
    return p;
}

// This answer uses the "Euclidean Algorithm" in C and I have to understand that to understand this.
