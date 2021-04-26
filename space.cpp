#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

using namespace std::chrono_literals;

int main() {
  
   double eaweight, plaweight;
   int planetnum;

   std::cout << "Enter your earth weight in kilograms(kg).\n";
   std::cin >> eaweight;

   std::cout << "Planet 1 - Mercury\n";
   std::cout << "Planet 2 - Venus\n";
   std::cout << "Planet 3 - Mars\n";
   std::cout << "Planet 4 - Jupiter\n";
   std::cout << "Planet 5 - Saturn\n";
   std::cout << "Planet 6 - Uranus\n";
   std::cout << "Planet 7 - Neptune\n";
   std::cout << "Planet 8 - Pluto\n";
  
   std:: cout << "Enter your selected planet number.\n";
   std::cin >> planetnum;

  switch(planetnum) {

    case 1 :
      plaweight = eaweight * 0.38;
      std::cout << "Your planet weight on Mercury is " << plaweight << "kg.\n";
      break;

    case 2 :
      plaweight = eaweight * 0.91;
      std::cout << "Your planet weight on Venus is " << plaweight << "kg.\n";
      break;

    case 3 :
      plaweight = eaweight * 0.38;
      std::cout << "Your planet weight on Mars is " << plaweight << "kg.\n";
      break;

    case 4 :
      plaweight = eaweight * 2.34;
      std::cout << "Your planet weight on Jupiter is " << plaweight << "kg.\n";
      break;

    case 5 :
      plaweight = eaweight * 0.93;
      std::cout << "Your planet weight on Saturn is " << plaweight << "kg.\n";
      break;

    case 6 :
      plaweight = eaweight * 0.92;
      std::cout << "Your planet weight on Uranus is " << plaweight << "kg.\n";
      break;

    case 7 :
      plaweight = eaweight * 1.12;
      std::cout << "Your planet weight on Neptune is " << plaweight << "kg.\n";
      break;

    case 8 :
      plaweight = eaweight * 0.07;
      std::cout << "Your planet weight on Pluto is " << plaweight << "kg.\n";
      break;

    default :
      std::cout << "Planet number is invalid.\n";
      break;

    }

    std::this_thread::sleep_for(2s);

    std::cout << "Closing in 10s";

    std::this_thread::sleep_for(10s);

    return 0;

}
