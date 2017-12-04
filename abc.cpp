/******coded by rakesh kumar gupta
copyright reseved to rakesh kumar gupta
date 2december 2017 time 10:00to3:47******/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define v "vowel"
void sum(void);
void per(void);
void ctof(void);
void ftoc(void);
void tri(void);
void cheako_e(void);
void absulate(void);
void fact(void);
void power(void);
void pascii(void);
void arm(void);
void ptable(void);
void lcm(void);
void hcf(void);
void sqrt(void);
void chlarge(void);
void chtriangle(void);
void vowel(void);
void main()
{

int ch1,ch2;
char a[15];
gotoxy(30,1);
printf("enter your name\n");
gotoxy(31,2);
gets(a);
gotoxy(29,3);
printf("hello");
puts(a);
start:
while(2)
{
gotoxy(29,4);
printf("enter the given choise\n");
printf("1:simple programing\t2:Desison programing\t3:loop programing");

printf("\n4:other types of program\t5:Exit\t6clear screen");
scanf("%d",&ch1);
switch(ch1)
{
case 1:
while(3)
{
printf("\nenter your choise");
printf("\n1:sum of numbers");
printf("\n2:percentage of number");
printf("\n3:change farenhite to celcius");
printf("\n4:change celcius to farenhite");
printf("\n5:exit from sub menu");
printf("\n6:clear the screen");
scanf("%d",&ch2);
switch(ch2)
{ //start of switch sub
case 1:
sum();
break;
case 2:
per();
break;
case 3:
ftoc();
break;
case 4:
ctof();
break;
case 5:
goto start;
case 6:
clrscr();
default:
printf("\nenter choise does not exit please enter again");

}//end of swtich sub
}//end of while sub
//start of second case
case 2:
while(3)
{//start of while second sub
printf("\nenter your choise:");
printf("\n1:cheak for odd even");
printf("\n2:find abululte value");
printf("\n3:find squre root of number:");
printf("\n4:cheak validiti of triangle");
printf("\n5:exit from sum menu");
printf("\n6:clear screen");
scanf("%d",&ch2);
switch(ch2)
{//start of while second sub
case 1:
cheako_e();
break;
case 2:
absulate();
break;
case 3:
sqrt();
break;
case 4:
chtriangle();
break;
case 5:
goto start;
case 6:
clrscr();
default:
printf("enter choise does not exit please try again\n");
break;

}//closo of while second sub

}//close of while second sub
case 3:
while(3)
{ //start of while third sub
printf("enter the choise given below");
printf("\n1:find factorial");
printf("\n2:power fo number");
printf("\n3:armstrong number cheak");
printf("\n4:find lcm and hcf");
printf("\n5:exit from sub menu");
printf("\n6:clear screen");
scanf("%d",&ch2);
switch(ch2)
{//start of swtich third sub
case 1:
fact();
break;
case 2:
power();
break;
case 3:
arm();
break;
case 4:
lcm();
hcf();
break;
case 5:
goto start;
case 6:
clrscr();
default:
printf("choie does not exit please try again");


}//close of switch third sub

}//close of while third sub
case 4:

while(3)
{//start while four sub

printf("enter your choise given below");
printf("\n1:cheak vowel and consonant");
printf("\n2:print all ascii code");
printf("\n3:print table of number");
printf("\n4:cheak larger number among three");
printf("\n5:print trigonomenty  value");
printf("\n6:exit from sub menu");
printf("\n7:clear screen");
scanf("%d",&ch2);
switch(ch2)
{//start of switch four sub
case 1:
vowel();
break;
case 2:
pascii();
break;
case 3:
ptable();
case 4:
chlarge();
break;
case 5:
tri();
break;
case 6:
goto start;

case 7:
clrscr();
default:
printf("choise does not exit please try again\n");


}//close of switch four sub


}//close while four sub

case 5:
exit(1);
break;
case 6:
clrscr();
break;
default:
printf("choise does not exit please try again\n");
break;

}//end of switch main


}//end of while main

}//end od main  function



//start for function defining
void sum(void)

{
int a,i;
int b[20];
int sum=0;
char another;
clrscr();
do
{
printf("how many number you want to add");
scanf("%d",&a);
printf("enter the number which you want to add");
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
sum=sum+b[i];
}
printf("the sum of your entered number is %d",sum);
printf("wnat to add another number ('y'/'n')\n");
fflush(stdin);
scanf("%c",&another);
}while(another=='y');

getch();

}//first declarin

void per(void)
{
int a[20];
int b;
int sum=0,i;
char another;
clrscr();
float per;
do{
printf("how many number you want to find percentage\n");
scanf("%d",&b);
printf("enter the number which you want to find percentage");
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
sum=sum+a[i];
}
per=(sum*100)/(i*100);
printf("percentage is %f%",per);
printf("want to find more percentage ('y'/'n')");
fflush(stdin);
scanf("%c",&another);
}
while(another=='y');


getch();
}
//second declaired
 void ftoc(void)
{
    float celsius, fahrenheit;

    printf("Please Enter the temperature in Fahrenheit: \n");
    scanf("%f", &fahrenheit);

    // Convert th temperature from fahrenheit to celsius
    celsius = (fahrenheit - 32) * 5 / 9;
    //celsius = 5 * (fahrenheit - 32) / 9;
    //celsius = (fahrenheit - 32) * 0.55556;

    printf("\n %.2f Fahrenheit = %.2f Celsius", fahrenheit, celsius);
getch();

}
//third declated
void ctof(void)
{
    float celsius, fahrenheit;

    printf("Please Enter the temperature in Fahrenheit: \n");
    scanf("%f",&celsius);

    // Convert th temperature from fahrenheit to celsius
    fahrenheit=(celsius*9/5)+32;
    //celsius = 5 * (fahrenheit - 32) / 9;
    //celsius = (fahrenheit - 32) * 0.55556;

    printf("\n%fcelsius=%f fahrenheit",celsius,fahrenheit);

getch();
}//fourth declared
 void tri(void)
 {
float a;
char t;
clrscr();
printf("enter the angle value");
scanf("%f",&a);
a=a*(3.142/180);
printf("enter's'for sin value ,'c' for cos value and 't'for tan value\n");
fflush(stdin);
scanf("%c",&t);


switch(t)
{
case 's':
printf("sin()value is %f",sin(a));
break;
case 'c':
printf("cos() value is %f",cos(a));
break;
case 't':
printf("tan() value is %f",tan(a));
break;

default:
printf("you entered wronmg choie");
break;
}
getch();
}//fifth declared
void cheako_e(void)
{
int a;
clrscr();
printf("enter a number to cheak odd and even\n");
scanf("%d",&a);
if(a%2==0)
printf("%d is even number ",a);
else
printf("%d is odd number",a);
getch();
}
void absulate(void)
{
int a;
clrscr();
printf("enter a number\n");
scanf("%d",&a);
printf("\n%d is absulate number",abs(a));
getch();

}
//sixth declared
void fact(void)
{
int f=1,num;
int i;
clrscr();
printf("enter a number");
scanf("%d",&num);
for(i=1;i<=num;i++)
{
f=f*i;
}
printf("%d",f);
getch();
}//seventh declared
void power(void)
{
int b,p;
clrscr();
printf("enter the base of number \n");
scanf("%d",&b);
printf("enter the power of number\n");
scanf("%d",&p);
printf("the %d^%d is %d",b,p,pow(b,p));
getch();
}//eights declared

void pascii(void)
{
int i;
printf("it print all asci code (enter to start)");
getch();
for(i=0;i<=255;i++)
printf("ascii value of %d=%c\t",i,i);
getch();
}
//ninth declared
void arm(void)
{

      int number, sum = 0, rem = 0, cube = 0, temp;
 
    printf ("enter a number");
    scanf("%d",&number);
    temp = number;
    while (number != 0)
    {
        rem = number % 10;
        cube = pow(rem, 3);
        sum = sum + cube;
        number = number / 10;
    }
    if (sum == temp)
        printf ("The given no is armstrong ");
    else
        printf ("The given no is not a armstrong");
        getch();
        }
        //tenth declared
        void ptable(void)
        {
        int a,t;
        int i;
        clrscr();
        printf("enter a number which you want to print table\n");
        scanf("%d",&a);
        for(i=1;i<=10;i++)
        {
        t=i*a;
        printf("%d*%d=%d",i,a,t);
        }
        getch();
        }
        //eleventh declared

        void hcf(void)
        {
    int i, num1, num2, min, hcf=1;

    /* Input two numbers from user */
    printf("Enter any two numbers to find HCF: ");
    scanf("%d%d", &num1, &num2);

    /* Find minimum between two numbers */
    min = (num1<num2) ? num1 : num2;

    for(i=1; i<=min; i++)
    {
        /* If i is factor of both number */
        if(num1%i==0 && num2%i==0)
        {
            hcf = i;
        }
    }

    printf("HCF of %d and %d = %d\n", num1, num2, hcf);
    getch();
    }
    //twelve declared
    void lcm(void)
    {
    int a,b;
    int lcm;
    clrscr();
    printf("enter two number to find their lcm");
    scanf("%d%d",&a,&b);
    for(lcm=1;lcm<=a*b;lcm++)
    {
    if(lcm%a==0&&lcm%b==0)
    break;
    }
    printf("lcm is %d",lcm);
    getch();
    } //thirteen declared
    void sqrt(void)
    {
    float a;
clrscr();
printf("enter a number\n");
scanf("%f",&a);
a=sqrt(a);
printf("this is squre root of number%f",a);
getch();
}   //fourteen declred

void chlarge(void)
{
int a,b,c;
int g;
clrscr();
printf("enter three number to cheak larger number ");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
g=a;
if((b>a)&&(b>c))
g=b;
else
g=c;
printf("largest number is %d",g);
getch();
}  //fifteen declared

void chtriangle(void)
{
int a,b,c;
int g;
clrscr();
printf("enter the side of triangle to cheak it validity\n");
scanf("%d%d%d",&a,&b,&c);
if((a>b)&&(a>c))
{g=a;
if(g>b+c)
printf("triangle is valid");
else
printf("triangle is not valid");
}
if((b>c)&&(b>a))
{
g=b;
if(b>a+c)
printf("triangle is valid ");
else
printf("triangle is not valid");
}
else

{
g=c;
if(g<a+b)
printf("triangle is valid");
else
printf("triangle is not valid:");
}
getch();
} //sisteen declared

void vowel(void)
{
char a;
clrscr();
printf("enter a character to cheak vowel and cons\n");
scanf("%c",&a);
switch(a)
{
case 'a':
case 'A':
printf(v);
break;
case 'e':
case 'E':
printf(v);
break;
case 'i':
case 'I':
printf(v);
break;
case 'o':
case 'O':
printf(v);
break;
case 'u':
case 'U':
printf(v);
default:
printf("this is consonant");
break;
}
getch();
}







