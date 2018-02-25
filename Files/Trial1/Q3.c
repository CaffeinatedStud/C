/*
Question 3

Write a program that executes a loop causing it to sleep for 2 seconds (using the sleep() system call), wakes up and displays its pid as well as the total number of milliseconds elapsed since it started. It can run the loop any number of times you choose. Your output can be in the form:

Program with pid <pid> has run for  <number of milliseconds> milliseconds.

Note: Make use of sleep() and gettimeofday() system calls.
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>

int main(){
	struct timeval tv;
	struct timeval tv2;
	
	gettimeofday(&tv, NULL);

	sleep(2);
	gettimeofday(&tv2, NULL);

	long x = (tv2.tv_sec - tv.tv_sec);
	printf("Time slept in seconds for pid %d having ppid %d is: %ld\n", getpid(), getppid(), x);
}
