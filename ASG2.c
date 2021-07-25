#include<stdio.h>

int main()

{

  int input_1, input_2, result;
  char operator;

  printf ("Enter the operator \n");
  scanf("%c", &operator);

  printf ("Enter Number_1 \n");
  scanf ("%d",&input_1);

  printf ("Enter Number_2 \n");
  scanf ("%d",&input_2);

  if (operator == '+')
  {   
    result = input_1 + input_2;
    printf("The result = %d", result);
  }

  else if (operator == '-')
  {   
    result = input_1 - input_2;
    printf("The result = %d", result);
  }

  else if (operator == '*')
  {   
    result = input_1 * input_2;
    printf("The result = %d", result);
  }

  else if (operator == '/')
  {  
    if(input_2 == 0){
        printf("Never divide on 0 \n");
    }else{
        result = input_1 / input_2;
        printf("The result = %d", result);
    }
  }

  else
  {
    printf ("Invalid entry");
  }

  getchar();
  return 0;

}