#include <iostream>

size_t fib(const size_t);
size_t fact(const size_t);

int main()
{
	size_t choice=0, value=0;
  std::cout<<"1. Factorial \n2. Fibonacci"<<std::endl;
  std::cout<<"> ";
  std::cin>> choice;
  std::cout<<"\n\n";

	if(choice==1)
  {
      std::cout<<"Please enter factorial you would like to calculate"<<std::endl;
      std::cout<<"> ";
      std::cin>> value;
      std::cout<<"\n"<<value<<"! = "<<fact(value)<<"\n";
  }
	else if(choice==2)
  {
      std::cout<<"Please enter Fibonacci number you would like to calculate"<<std::endl;
      std::cout<<"> ";
      std::cin>> value;
      std::cout<<"\nThe"<<value<<"th number in the Fibonacci sequence is "<<fib(value)<<"\n";
  }
	return 0;
}

size_t fib(const size_t N)
{
  if(N==0||N==1)
    return N;
  else
    return fib(N-2)+fib(N-1);
}

size_t fact(const size_t N)
{
  if(N==0)
    return 1;
  else
    return N*fact(N-1);
}
