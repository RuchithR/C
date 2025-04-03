#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main() {
    srand(time(NULL)+5);
    printf("-------------------------------------------------------------------------\n");
    int flag = 1;
    int i = 0;
    int j = 0;
    int temp = 0;
    int dispsum = 0;
    int sum =0;
    int ace = 0;
    char ch = 'y';
    char shape[][9] = {"Spades","Hearts","Clubs","Diamonds"};
    char number[][8] = {"Ace","King","2","3","4","5","6","7","8","9","10","Queen","Jack"};
    i = rand()%52;
    printf("The first card is %s of %s\n",number[i%13],shape[i%4]);
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
    j = rand()%52;
    printf("The second card is %s of %s\n",number[j%13],shape[j%4]);
    int casino = 16 + rand()%5;
    int tace = ace;
    if(i%13 == j%13){
        printf("Would you like to split?\n");
        scanf("%c",&ch);
        while(ch!='y' && ch!='n' && ch!='Y' && ch!='N'){
            scanf("%c",&ch);
        }
        if(ch=='y' || ch =='Y'){
            int second =j;
            printf("Your first card was %s of %s\n",number[i%13],shape[i%4]);
            temp = sum;
            while(flag)
            {
                i = rand()%52;
                printf("The next card is %s of %s\n",number[i%13],shape[i%4]);
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
            printf("-------------------------------------------------------------------------\nFor your second game :\n");
            sum = temp;
            flag = 1;
            ace = tace;
            printf("Your first card was %s of %s\n",number[second%13],shape[second%4]);
        }
        else{
            if(j%13==0){
                ace = ace+ 1;
                sum = sum + 11;
            }
            else if(j%13==1 || j%13==11 || j%13==12){
                sum = sum + 10;
            }
            else{
                sum = sum + (j%13);
            }
        }
    }
    else{
        if(j%13==0){
            ace = ace+ 1;
            sum = sum + 11;
        }
        else if(j%13==1 || j%13==11 || j%13==12){
            sum = sum + 10;
        }
        else{
            sum = sum + (j%13);
        }
    }
    printf("Your sum is %i. Would you like to hit?\n",sum);
     scanf("%c",&ch);
     while(ch!='y' && ch!='n' && ch!='Y' && ch!='N'){
        scanf("%c",&ch);
     }
     if(ch == 'n' || ch == 'N'){
        flag = 0;
     }
    while(flag)
        {
            i = rand()%52;
            printf("The next card is %s of %s\n",number[i%13],shape[i%4]);
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
            dispsum = sum;
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