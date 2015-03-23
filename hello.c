/*
 * hello.c
 *
 *  Created on: Jan 21, 2014
 *      Author: kreg
 */

#include <stdio.h>

int main(void)
{
  printf("Hello World\n");
  //return 0;

  int a;
  a = 45;
  char b;
  b = 'k';
  char c[] = "kreg";

  char* d = c;
  //float d[] = {1.2, 2.3, 3.4};

  printf("%d\n",a);
  printf("%c\n",b);
  printf("%s\n",d);
  *d++;
  printf("%s\n",d);
  *d++;
  printf("%s\n",d);
  *d++;
  printf("%s\n",d);
  *d++;
  printf("%s\n",d);
  *d++;
  printf("%s\n",d);

  char* temp = c;
  for (; *temp; *temp++) {
	  printf("%s\n",temp);
  }

  char temp1 = c;
  temp = c;
  for (; *temp1; *temp1++) {
	  printf("%s\n",temp);
  }


}
