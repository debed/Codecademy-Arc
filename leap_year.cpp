#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

int main() {
  
  int year, prob;
    std::cout << "Input a year.\n";
    std::cin >> year;

  if (year > 999 && year < 10000) {
    prob = 1;

  }

  if (prob = 1 && year % 4 == 0) {

    if (year % 100 == 0) {

      if (year % 400 == 0)
      std::cout << "This is a leap year.\n";

      else
      std::cout << "This is not a leap year.\n";

    }
    
    else
      std::cout << "This is a leap year.\n";

  }
  
  else
    std::cout << "This is not a leap year.\n";

  std::this_thread::sleep_for(2s);

  std::cout << "Closing in 10s\n";

  std::this_thread::sleep_for(10s);

  return 0;

}
