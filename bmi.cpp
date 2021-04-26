#include <iostream>
#include <chrono>
#include <thread>

using namespace std::chrono_literals;

int main() {
  
  double height, weight, bmi;
  
  std::cout << "Type in your height (m):\n";
  std::cin >> height;
  
  std::cout << "Type in your weight (kg):\n";
  std::cin >> weight;
  
  bmi = weight / (height * height);
  
  std::cout << "Your BMI is " << bmi << ".\n";

  std::this_thread::sleep_for(2s);

  std::cout << "Closing in 10s\n";

  std::this_thread::sleep_for(10s);
  
  return 0;

}