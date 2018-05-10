#include <unordered_map>
#include "bigint/bigint.h"

bigint r_fib(int n, std::unordered_map<int, bigint> &memo){
	//if its 0 or 1 just return the number
	if (n==0){
		return 0;
	}
	if (n==1){
		return 1;
	}
	// if the number isnt found in memo recursivley find it then add to memo
  else {
    if (memo.find(n) == memo.end()){
      memo[n]= r_fib(n-1,memo)+r_fib(n-2,memo);
    }
    return memo[n];
	}
}

bigint fib(int n) {
	std::unordered_map<int, bigint> memo;
	return r_fib(n, memo);
}
