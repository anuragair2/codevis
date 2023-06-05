//#include <stdio.h>
//#include <stdbool.h>
//int main()
//{
    //printf("this is Anurag\n\n");
   /* printf("this is the basics of the code\n\n");
    printf("NOW THIS is THE NEW AND THE BASIC CODE\n\n\t");
    printf("now this is the main of the things\n\n\t");
   /* printf("\"this is Anurag singh\"");*/
    //this is comment we are starting thus.
   // printf("this is Anurag\n");
    //now we are going to declare a variable
    /*int num1 = 10;
    int num2 = 10;
    int sum = num1 + num2;
    printf("%d",sum);*/
    //int mynum1 = 15;
    //int mynum2;
    //int num2 = num1;
    /*mynum2 = mynum1;
    printf("%d", mynum2);*/
   // int myage = 18;
    //char myname = 'a';
    //char introwords = 'Hii my name is'; //printf("%c",introwords);
    //printf("my name is: %c");
    //printf("%d", myage);
    //return 0;
  //  #include <stdio.h>

//int main() {
    //int  x = 5;
    //int y = 2;
    //float divi;
    //divi = (float)x / y;
    //printf("%2f",divi);
    //const int x = 4; //in this we can set any number fixed such as value of hour and pi
    //int y = 4;//when we write a constant value we must assigned with a value.
    //x = y;//here it can declare the error
    //printf("%d",x);


    //printf("firstno: %f", myname);
    //printf("secondno: %1f", myage);
    //printf("my second name is %2f",myname2);
    //return 0;
//}

//}
//this is the main of the things that is going to be the main of the things that is happennin gim the
// this happening in the world of the things that is going
//printf("this is Anurag Singh");
//printf("This is Anurag singh and this is the main of the things that is going to be the the main of the things that");
//printf("this is the main of the things that is going to be the main of the things that is going to be the main of the things that is going to be the main of the things that is going to be the main of the thing that is going to be the main of the thing ");
//int x = 8;
//int y = 4;
//int sum;
//sum = x / y;
//printf("%d",sum)
/*int x = 3;
int y = 4;
int z;
z = x++;
printf("%d",z);

// here we starts the arithmetic operators

/* + --> adds the two value
- --> subtracts the two value
* --> multiply the two value
/ --> divides the two value
% --> this is called modulus (returnn the remainder)
++ --> this is called the increment operator(increases the value of variable by 1)
--  --> this is called the decrement (decreases the value by 1 eg: --x)

NOW HERE IS ASSIGNMENT OPERATORS
Assignment operator is used to assign the value
(eg: int x = 10;)
the assignment operators adds the value of value by a specific value given by the users
(eg: int x = 10;
     x += 5;)
     
     there are the diffrent types of assignment operators
     = | (x = 5)
     += | (x += 3, x = x+3)
     -= | the all exmple are same
     *= |
     /= |
     %= |
     &= |
     |= |
     ^= |
      >>= |
     <<= |
     
     now in the next line we are going to code some operators*/
     //int x = 5;
     //int y = 6;
     //printf("%d", x > y); //returns 0 if false and 1 if true.

     /* now moving on the logical operators
     && |  Logical and --> returns true if both statements are true
     ||  |  Logical or --> returns true if one of the statements is true
     !  | Logical not --> reverse the results, returns the false if the result is true
     
     NOW IN THE NEXT LINE WE ARE GOING TO CODE SOME LINE RELATED TO THIS*/
//int myint;
//int myfloat;
//int mychar;
//int mydouble;

//printf ("%lu\n", sizeof(myint)); //here we use "lu" format specifier to print the result
//printf ("%lu\n", sizeof(mychar));
//printf ("%lu\n", sizeof(myfloat));
//printf ("%d\n", sizeof(mydouble));

/* HERE WE ARE MOVING TO THE BOOLEAN
*/
//we are creating the boolean value
//#include <stdbool.h>
//#include <stdio.h>
//int main()
//{
//bool proagrammingfun = true;
//bool fishtasty = false;
//bool fishistasty = true;
//bool eggistasty = false;
//int myage = 18;
//int Learnerslicage = 16;

//Returns boolean values
//if (myage >= Learnerslicage)
//{
  //printf("YOU ARE ELIGIBLE TO VOTE");
//}
//else
//{
  //printf("YOU are not eligible to vote");
//}
//printf("%d", myage <= Learnerslicage);
//printf("%d", fishtasty);
//printf("%d", 9 > 19);
//printf("%d", 10 == 10);
//printf ("%d", 10 == 15);
//printf("%d", fishistasty == eggistasty);
// NOW HERE WE ARE GOING TO LEARN IF ELSE STATEMENTS*
//!=  --> this represents not equal to
// use IF to specify a block of code to be executed if specific condition is true
// use else to specify a block of code to be executed if the same condition is false
// use else if to specify a new condition to test, if the first condition is false
// use switch to specify many alternative blocks of code to be executed
// there is no requirement of conditions in else statement.
//int x;
//int y;
/*printf("Enter the first number: \n");
printf("Enter the second number: \n");
scanf("%d", &x);
scanf("%d",&y);
if (x > y)
{
  printf("x is greater then y");
}
else if (x < y)
{
  printf("x is less then y");
}
else if (x == y)
{
printf("x is equal to y");
}
return 0;*/

// now moving on to the ternary statement(also known as the shorthand operators)
// example of shorthand operator is given below

//int time = 20;
//(time < 18) ? printf("good day.") : printf("good evening");  //here we cannot put
//semicolon after the first  print statements

//NOW HERE WE MOVING ON THE SWITCH STATEMENTS
/* instead of uing the many "else if" statements we can use the switch statements

--.here are some point of using the switch statements
The switch expression is evaluated once
The value of the expression is compared with the value of each case
The break statements breaks out of the switch block and stops the execution
the "default" statements is optional and specifies some code to run if there is
no case match */

// NOW WE ARE GOING TO CODE SOME EXAMPLE OF SWITCH STATEMENTS
/*int day;
printf("Enter the day number between 1 to 7 \n:");
scanf("%d",&day);
switch (day)
{
case 1:
  printf("Monday");
  break;
  case 2:
  printf("Tuesday");
  break;
  case 3:
  printf("Wednesday");
  break;
  case 4:
  printf("Thursday");
  break;
  case 5:
  printf("Friday");
  break;
  case 6:
  printf("Saturday");
  break;
  case 7:
  printf("Sunday");
  break;
  default:
  printf("please enter the correct value");
}*/

// NOW we are starting the While Loop
// --> loops can executes a block of code that as long as the specified condition is reached
// "While" loop loops through the block of code as long as the code returns the value TRUE

// Here we are going to solve some example of "While loop"
/*int i = 0;
while (i < 100)
{
  printf("%d\n",i);
  i++;*/ // dont forget to use the variable used in the condition (i++),otherwise the loop will never stop

//}

//now we are going to perform the "do while" loop

//Do while loop is a variant of while loop it perform the loop as long as the condition is true
// this loop execute the code block once\

// Lets do some example of the do while loop
//int i = 0;
//do
//{
  //printf("%d\n",i);
  //i++;
//}
//while (i < 5);

//return 0;

//}


/* NOW WE ARE GOING TO STUDY THE FOR LOOP
--> This code is useful when we know that how many times that loop going to work
--> then we use the for loop instead of while loop
--> there are three statements inside the condition of for loop
--> statements 1 : executed one time before the executions of the code block
--> statements 2 : defines the condition for executing the code block
--> statements 3:  is executed one time before the code blocks executes*/

//Lets do some example of the for loop

/*#include <stdio.h>
#include <stdbool.h>

int main()
{
  int i;
  for ( i = 0; i < 10; i++)
  {
    printf("%d\n",i);
  }
  return 0;
}/*

/* write a code to print even value between 1 to 10*/
/*#include <stdio.h>
#include <stdbool.h>
int main()
{
  int i;
  for (i = 0; i <= 10; i = i + 2)
  {
    printf("%d\n", i);
  }
  return 0;
}*/


/* NOW HERE WE ARE GOING TO LEARN THE "NESTED LOOP" 
--> When we place a loop inside a loop this loop is called Nested loop
     "lets do some example of the for loops"*/

/*#include <stdio.h>
#include<stdbool.h>
int main()
{
  //outer loop
  int i;
  for ( i = 1; i <= 2; ++i)
  {
    printf("Outer: %d\n",i);
    
    //Inner Loop
    int j;
    for ( j = 1; j <= 3; ++j)
    {
      printf("Inner: %d\n", j); //now here this code will executes 6 times
    }
  }
  
}*/

// C break and continue
/* NOW WE ARE GOING TO LEARN C BREAK/CONTINUE

--> The break statement can also used to jump out of a switch statement
--> the break statement can also be used to jump out of a loop*/

#include <stdio.h>
#include <stdbool.h>
// we include String.h header for (strlen) character
#include <string.h>

int main()
{
  /*int i;
  for ( i = 0; i < 10; i++)
  if (i == 4)
  {break;}
  {
    printf("%d\n",i);
  }*/



  //CONTINUE: the continue statement breaks if the specified condition occurs
              // and continue with the next iteration in the loop
              //now we should do some example of the continue loop
        

/*int i;
for ( i = 0; i < 10; i++)
{
  if(i == 4);
  {continue;}
  printf("%d\n", i);
}*/


//  # we can also use break and continue in while loops
// --> lets do some example of continue in while loops

/*int i = 0;

while (i<10)
{
if (i == 4)
{break;}
  printf("%d\n",i);
  i++;}*/


//now Moving on to the example of continue

/*int i = 0;

while (i < 10)
{
  if (i == 4)
  {
    i++;
    continue;
  }
  printf("%d\n",i);
  i++;
}*/



// Now we move on to the new Topic "ARRAY"
/*--> ARRAY is used to store multiple value in a single variable instead
of declaring seperate variable for each value
--> To create an anrray define the data type like int and specify the name using the
square brackets []*/

//Lets do some exmaple of the Arrays
/*int mynumber[] = {25,50,75,100};
int i;
printf(" This is your first number: %d\n", mynumber[3]);
//lets change the value of the ARRAY
mynumber[3] = 175;
//i dont why it still shows the output 100
printf("This is the second number: %d\n",mynumber[3]);
//now it gives the correct output.

// Now going to perform the loop through the ARRAY
// we can loop through array elements with for loop
for ( i = 0; i < 4; i++)
{
 printf("%d\n", mynumber[i]);
}*/


//Declare an Array of four integrs;
/*int mynumber[4];
// Add elements
mynumber[0] = 15;
mynumber[1] = 25;
mynumber[2] = 35;
mynumber[3] = 45;
*/

//NOW MOVINNG ON TO THE MULTI DIMENSIONAL ARRAY
//MOVING ON TO THE 2D ARRAY
//int matrix[2][3] = { {1, 4, 2}, {3, 6, 8}};
//printf("%d\n",matrix[0][2]); //output 2

//now we can change the value of an element in 2d array
//matrix [0][0] = 9;
//printf("%d", matrix[0][0]); // now the output is 9 instead of 1

//loop through 2d array
//int i,j;
//for ( i = 0; i < 2; i++)
//{
  //for ( j = 0; j < 3; j++)
  //{ 
    //  printf("%d\n",matrix[i][j]);
  //} 
//}

// Now we are moving to the next chapters named STRINGS
// S--------------T---------------------R-------------------I-------------------------N-------G----------S

/* Strings are used for storing text characters
for ex: "Hello world is a String character
there is no any string type in c language to easily create a string therefor we create array in the string"*/

// Example of Strings

/*char greetings[20] = "Helloi  i am Anurag";
printf("%s\n",greetings);
printf("%c\n",greetings[0]);*/

// We can also modify strings

/*greetings[0] = 'N';
greetings[1] = 'A';
greetings[2] = 'M';
greetings[3] = 'A';
greetings[4] = 'S';
greetings[5] = 'T';
greetings[6] = 'E';
printf("%s\n",greetings);*/

//Loop through a string
//we can also loop through a strings using the for loop
//===================================================
/*char carName[] = "volvo";
int i;

for ( i = 0; i < 5; ++i)
{
  printf("%c\n", carName[i]);
}*/
//====================================================
//Another way of creating Strings
//------------------------------------------------------
/*char greetings[] = {'H','E','L','L','O',' ', 'W','O','R','L','D','\0'};
printf("%s\n",greetings);
printf("%lu",sizeof(greetings));*/
//------------------------------------------------------

/* Strings Special character*/

//many times when we are writing the string characters in sentences 
//C misunderstands the word to be the special character
/*  So here are some characters to avoid the misunderstanding
----------------------------|
1)-->  \'  '  single quote
2)-->  \"   "  double quote
3)-->  \\   \  Backslash     
----------------------------|        */
/*char txt[] = "We are the so-called \"HACKERS\" by some community"; 
printf("%c",txt);*/
// -------------------------|

//-----------------------
/* String Functions
  Header of the String Functions
  #include <string.h>
  string length---->   strlen()*/

  //---------------------

  // Lets try some code,
  //------------------------------------------------
  /*char alphabet[50] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  printf("%d\n", sizeof(alphabet));
  printf("%d", strlen(alphabet));*/
  //------------------------------------------------

//======================================================================
/* CONCATENATE STRINGS
    To combine two strings we use the concatenate strings*/
    // Examples of the concatenate strings

  //  char strl[20] = "Hello ";
  //  char str2[] = "World";

    //concatenate str2 to str1 (result is stored in str1)
    // we use the "strcat()" functions to combine the two strings
  //  strcat(strl, str2);
  //  printf("%s\n",strl);
    //================================================================

/* C USER INPUT --------------*/
// To get user input we have to use the "scanf()" keywords

//Create an integer that will store the number we get from the user.

//int mynum;
//printf("Type a Number:\n");

// now save the number that user types
//scanf("%d",&mynum); // the (&mynum) stores the memory address of the variable 

//now output the number that user types
//printf("Your number is: %d",mynum);

//-----------MULTIPLE INPUTS------------------//


 //asks the user to type the number and the character
 //printf("Type a number and a character: ");

 //get the inputs and save the inputs
 //scanf("%d %c", &num1, &num2);

 //now print the number 
// printf("YOUR number and the character is : %d\n %c\n", num1, num2);

// Now taking the string as the output

char firstname[30];
// Now asks the user to input some text
printf("Enter your name: %s",firstname);
scanf("%s", firstname);

//output the text
printf("Hello %s", firstname);
return 0;
}
 