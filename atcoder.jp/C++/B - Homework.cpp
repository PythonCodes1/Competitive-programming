// Takahashi has N days of summer vacation. His teacher gave him M summer assignments. 
// It will take A i days for him to do the i -th assignment. 
// He cannot do multiple assignments on the same day, or hang out on a day he does an assignment. 
// What is the maximum number of days Takahashi can hang out during the vacation if he finishes all the assignments during this vacation?
//If Takahashi cannot finish all the assignments during the vacation, print -1 instead.

#include <iostream>
#include <cmath>

using namespace std;

int a[10010];

int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    for(int i=0;i<m;i++)
        scanf("%d",&a[i]);
        int s=0;
    for(int i=0;i<m;i++)s+=a[i];
        if(s>n){
            printf("-1\n");
        }else{
            printf("%d\n",n-s);
        }
}
