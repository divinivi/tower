# tower
#include <stdio.h>
void towerofhanoi(int num,char frompeg,char topeg,char auxpeg){
    if(num==1){
        printf("\nMoving disc 1 from peg %c to peg %c",frompeg,topeg);
        return;
    }
    towerofhanoi(num-1,frompeg,auxpeg,topeg);
    towerofhanoi(num-1,topeg,frompeg,auxpeg);
}

int main(){
    int num;
    scanf("%d",&num);
    return 0;
}
