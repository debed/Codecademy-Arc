#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

int main() {
  
  int i = 0;
  int square = 0;
  
  // Write a while loop here:

  std::cout << "What is 0 squared?\n";
  std::cin >> square;
  
  while (square != 0) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 0) {

      std::cout << "What is 1 squared?\n";
      std::cin >> square;

  }
  
  while (square != 1) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 1) {

      std::cout << "What is 2 squared?\n";
      std::cin >> square;

  } 
  
  while (square != 4) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 4) {

      std::cout << "What is 3 squared?\n";
      std::cin >> square;

  }
  
  while (square != 9) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 9) {

      std::cout << "What is 4 squared?\n";
      std::cin >> square;

  }
  
  while (square != 16) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 16) {

      std::cout << "What is 5 squared?\n";
      std::cin >> square;

  }
  
  while (square != 25) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 25) {

      std::cout << "What is 6 squared?\n";
      std::cin >> square;

  }
  
  while (square != 36) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 36) {

      std::cout << "What is 7 squared?\n";
      std::cin >> square;

  }
  
  while (square != 49) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 49) {

      std::cout << "What is 8 squared?\n";
      std::cin >> square;

  }
  
  while (square != 64) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 64) {

      std::cout << "What is 9 squared?\n";
      std::cin >> square;

  }
  
  while (square != 81) {

    std::cout << "Wrong guess, try again:\n";
    std::cin >> square;
    
  }

  if (square == 81) {

      std::cout << "Congratulations!\n";

  }

  std::this_thread::sleep_for(2s);

  std::cout << "Closing in 10s\n";

  std::this_thread::sleep_for(10s);
  
}