#include<stdio.h>
main()
{
int i,s;
int point1,point2,point3,ans1,ans2,ans3,tot;
int point01,point02,point03;
printf("WELCOME TO THE GAME\n\n");
printf("press 7 to start the game:\n");
printf("press 0 to exit the game:\n");
scanf("%d",&s);
if(s==7)
{
    printf("Game is started successfully\n\n");
    printf("1.which one is the first search engine in internet?\n\n");
    printf("\n1.google \n2.archie \n3.wais \n4.altavista\n");
    scanf("%d",&ans1);
    if(ans1==1)
    {
        printf("your answer is correct you got 5 points\n");
        point1=5;
    }
    else
    {
        printf("your answer is wrong you got zero points\n");
        point01=0;
    }

    printf("2.which one is the first web browser invented in 1990?\n\n");
    printf("\n1.google \n2.archie \n3.wais \n4.nexus\n");
    scanf("%d",&ans2);
    if(ans2==4)
    {
        printf("your answer is correct you got 5 points\n");
        point2=5;
    }
     else
    {
        printf("your answer is wrong you got zero points\n");
        point02=0;
    }

    printf("3.first computer virus is known as?\n\n");
    printf("\n1.google \n2.rabbit \n3.wais \n4.altavista\n");
    scanf("%d",&ans3);
    if(ans3==2)
    {
        printf("your answer is correct you got 5 points\n");
        point3=5;
    }
    else
    {
        printf("your answer is wrong you got zero points\n");
        point03=0;
    }
    tot=point1+point2+point3;
    printf("you got %d points",tot);



}
else if(s==0)
{
printf("GAME IS EXIT\n");
exit(0);
}
else
{
printf("INVALID CHOICE\n");
exit(0);
}

}
