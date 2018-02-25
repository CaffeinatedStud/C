/*
 * Question 5

Write a program that opens a file called “lab45.dat” for writing. If the file does not exist, the program creates it. If it exists already, the program will simply overwrite it. Your program should then read data for 5 students from the terminal and write them into the file. Your data should consist of the names of students (20 characters), a student id (10 characters), date of birth (10 characters), gender (7 characters (male/female)) and marital status (10 characters(single/married)). Write the data in the file as individual fields.

*/

#include <stdio.h>

//open
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

//close
#include <unistd.h>

int main(){

}
