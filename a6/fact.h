#ifndef _fact_h
#define _fact_h

#include "bigint/bigint.h"

//creates the template for int,bigint,and double
template <class T>

//finds factorial
T factorial(T n){
  //if n is 1 or 0 just return 1
  if (n==1){
    return n;
  }
  else if (n==0){
    return 1;
  }
  //multiply numbers recursivley calling function with n-1
  else {
    return n * factorial(n-1);
  }

}


#endif
