#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL));
    printf("-------------------------------------------------------------------------\n");
    int flag = 1;
    int i = 0;
    int j = 0;
    int dispsum = 0;
    int sum =0;
    int ace = 0;
    char ch = 'y';
    char shape[][9] = {"Spades","Hearts","Clubs","Diamonds"};
    char number[][8] = {"Ace","King","2","3","4","5","6","7","8","9","10","Queen","Jack"};
    while(flag)
    {
        i = rand()%52;
        printf("The card is %s of %s\n",number[i%13],shape[i%4]);
        if(i%13==0){
            ace = ace+1;
            sum = sum + 11;
        }
        else if(i%13==1 || i%13==11 || i%13==12){
            sum = sum + 10;
        }
        else{
            sum = sum + (i%13);
        }
        if(sum-(ace*10)>21){
            flag = 0;
            break;
        }
        dispsum =sum;
        for(j=0;j<ace;j++)
        {

            if(dispsum>21){
                dispsum=dispsum-10;
            }
        }
        printf("Your sum is %i. Would you like to hit?\n",dispsum);

        scanf("%c",&ch);
        while(ch!='y' && ch!='n' && ch!='Y' && ch!='N'){
            scanf("%c",&ch);
        }
        if(ch=='y' || ch =='Y'){
            continue;
        }
        else if(ch =='n' || ch=='N'){
            break;
        }
    }
    int casino = 16 + rand()%5;
    for(i=0;i<ace;i++)
    {

        if(sum>21){
            sum=sum-10;
        }
    }
    if(flag){
        printf("The casino got %i.You got %i.",casino,sum);
        if(sum>casino){
            printf("You win\n");
        }
        else if(sum==casino){
            printf("Its a draw\n");
        }
        else{
            printf("You Lost\n");
        }
    }
    else{
        printf("You Lost\n");
    }
    printf("-------------------------------------------------------------------------\n");
}