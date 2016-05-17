/*Write a program that prompts the user for coursework and exam marks in
a unit, and displays the unit mark calculated as 30% of the coursework
mark plus 70% of the exam mark*/

#include <stdio.h>
int main()
{
 
float coursework_mark, exam_mark, unit_mark; 

 printf("Input coursework mark\n");
 scanf("%f", &coursework_mark);

 printf("Input exam mark\n");
 scanf("%f", &exam_mark);

 unit_mark = ((30.0/100)*coursework_mark) + ((70.0/100)*exam_mark);

 printf("unit mark is %.1f", unit_mark);

 return 0;

 }