#include <stdio.h>

/*
 * A simple Addition function
*/
 int add(int a, int b)
 {
 	return a + b;
 }
 
 /*
  * A simple subtraction function
 */
 int sub(int a, int b)
 {
 	return a - b;
 }
 
 void calc(int a, int b, int (*op)(int, int))
 {
 	printf("%d\n", op(a, b));
 }
 
 int main(void)
 {
 	calc(10,15, add);
 	
 	  calc(10, 5, sub);
 	  
 	return 0;
 }
