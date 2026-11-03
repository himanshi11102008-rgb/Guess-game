#include <stdio.h>
int main( ){
    printf("---------------------\n");
    printf("----CODE DETECTIVE---\n");
    printf("----MYSTERY BEGINS---\n");

    printf("////////RULE OF GAME///////\n");
    printf("1.\tYou are the detective,and your mission is to solve mistery.\n");
    printf("2.\tRead the complete case discription carefully\n ");
    printf("3.\tEach case contains three suspects\n");
    printf("4.\tPay attention to the clues before choosing your answer\n");
    printf("5.\tSelect your answer entering the suspect number(1,2,3)\n");
    printf("6.\tEach correct answer make you earn 10 points\n");
    printf("7.\tAn incorrect answer make you earn 0 points\n");
    printf("8.\tYou got one attempt in each case\n");
    printf("9.\tYour final score will be display at the end of the game\n");
    printf("10.\tYou can choose to play again after completibng the game\n");


printf("The MISSING LIBRARY BOOK\n");

printf("following suspects are\n");
printf("1.Rahul\n");
printf("2.Priya\n");
printf("3.Aman\n");

printf("Que 1. From the lab of electrial and digital electronics 4 resister and one power supply is lost\n");
printf("rahul,priya, Aman,Prashant are present ,Who is culprit?\n");
printf("OPTIONS ARE\n");
printf("1.Rahul\n");
printf("2.Priya\n");
printf("3.Aman\n");
printf("4.Prashant\n");
int guess;
printf("Enter your guess option: ");
scanf("%d",&guess);
int point=0;
if(guess==1){
    point=10;
    printf("Your point is ten.\n");  
}
else{
    printf("you haveing zero point\n");
}
printf("Your total score is %d\n",point);

printf("Que 2. Rahul crying in the corner and suddenly teacher and riya noticed him ,techer asked him that why he is wiping his tears?\n");
printf("but why riya did not asked to him that why he is crying despite of being a good friend?\n");

int reason;
printf("1.Riya knows the what Rahul did.\n");
printf("2.Riya broke friendship with Rahul because of prashant.\n");
int op;
printf("Enter option: ");
scanf("%d",&op);
if(op==1){
    point+=10;
    printf("Your point is %d\n",point);
}
else{
    printf("you gain zero point\n");
}
printf("Your score is %d\n",point);

printf("Que 3.Riya goes near to the teacher and talk something to him ,what is she talking?\n");
printf("1.About Prashant.\n");
printf("2.She talking to ask something doubt.\n");
printf("3.She tell about Rahul.\n");
int c;
printf("Enter option: ");
scanf("%d",&c);
if("c==3"){
    point+=10;
    printf("Your point is %d",point);
}
else{
    printf("your gain zero point\n");
}



printf("GAME ENDED");


if(point==30){
    printf("You win,CONGRATULATIONS\n");
}
else{
    printf("You Loose\n");
}
return 0;
}