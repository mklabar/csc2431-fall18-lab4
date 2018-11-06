#include <iostream>

//TODO #1.1: add a function prototype for fib

size_t fact(const size_t);

int main()
{
	//TODO: #1.2 call your fib function, print the result

	//TODO: #2.2 call your fact function, print the result

	return 0;
}

//TODO #2.3: add your recursive fib function from class

size_t fact(const size_t N)
{
  if(N==0)
    return 1;
  else
    return N*fact(N-1);
}
