#include <stdio.h>

#include "hello.h"
int TestHello() {
   GoString str;
   char a[] = "hellohahaha";
   str.p = a;
   str.n = strlen(a);
   char *res;
   res = hello(str);
   printf("go return: %s\n",res);
   return 0;
}

int TestHello2() {
   GoSlice dat;
   char a[] = "hellohahaha";
   dat.data = a;
   dat.len = strlen(a);
   dat.cap = strlen(a);

   char *res;
   res = hello2(dat);
   printf("go return: %s\n",res);
   return 0;
}

int main() {
   TestHello();
   TestHello2();
   return 0;
}

