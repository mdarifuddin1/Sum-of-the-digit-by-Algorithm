// code solve by Md Arif Uddin
//write a code like this   3 + 6 + 9 + 12 +........................100
//How you can solve it
// I give three solve

#include<stdio.h>
int main (){

   int i ,sum = 0;
/*
   This is a first solve

   for(i=1; i<= 100; i++){

        if ( i % 3 == 0 )
            sum = sum + i;
   }
       printf("%d \n ", sum);
       */

        /*
            this a second solve

         for(i=3; i<= 100; i= i+3){

            sum = sum + i;
   }
       printf("%d \n ", sum);

      */

      // 3rd solve
      // Formula 3 ( 1 + 2 + 3 + 4 +........... 33 ) ?
      // 3 * n ( n + 1) /2

      printf("%d", 3 *(33 * (33+1)) /2);
}
