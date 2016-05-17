// without switch 2nd try

#include <stdio.h>

int main()
{
	int value;
	printf("Enter an integer between 1 to 9 and I will\n");
	printf("tell you its value in words:\n");
	scanf("%d", &value);

	if(value == 0)
	printf("zero\n");
    else
      if(value == 1)
      printf("one\n");
      else
        if(value == 2)
        printf("two\n");
        else
          if(value == 3)
          printf("three\n");
          else
            if(value == 4)
            printf("four\n");
            else
              if(value == 5)
              printf("five\n");
              else
                if(value == 6)
                printf("six\n");
                else
                  if(value == 7)
                  printf("seven\n");
                  else
                    if(value == 8)
                    printf("eight\n");
                    else
                      if(value == 9)
                      printf("nine\n");
return 1;
}