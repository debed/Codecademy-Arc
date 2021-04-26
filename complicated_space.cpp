#include <iostream>
#include <chrono>
#include <thread>
#include <iomanip>

using namespace std::chrono_literals;

int main() {
  
   double eaweight, plaweight;
   int planetnum;
   std::string a = "Mercury";
   std::string b = "Venus";
   std::string c = "Mars";
   std::string d = "Jupiter";
   std::string e = "Saturn";
   std::string f = "Uranus";
   std::string g = "Neptune";
   std::string h = "Pluto";

   std::cout << "Enter your earth weight in kilograms(kg).\n";
   std::cin >> eaweight;

   std::cout << "Planet 1 - Mercury\n";
   std::cout << "Planet 2 - Venus\n";
   std::cout << "Planet 3 - Mars\n";
   std::cout << "Planet 4 - Jupiter\n";
   std::cout << "Planet 5 - Saturn\n";
   std::cout << "Planet 6 - Uranus\n";
   std::cout << "Planet 7 - Neptune\n";
  
   std:: cout << "Enter your selected planet number.\n";
   std::cin >> planetnum;

  switch(planetnum) {

    case 1 :
      plaweight = eaweight * 0.38;
      std::cout << "Your planet weight on " << a << " is " << plaweight << "kg.\n";
      break;

    case 2 :
      plaweight = eaweight * 0.91;
      std::cout << "Your planet weight on " << b << " is " << plaweight << "kg.\n";
      break;

    case 3 :
      plaweight = eaweight * 0.38;
      std::cout << "Your planet weight on " << c << " is " << plaweight << "kg.\n";
      break;

    case 4 :
      plaweight = eaweight * 2.34;
      std::cout << "Your planet weight on " << d << " is " << plaweight << "kg.\n";
      break;

    case 5 :
      plaweight = eaweight * 0.93;
      std::cout << "Your planet weight on " << e << " is " << plaweight << "kg.\n";
      break;

    case 6 :
      plaweight = eaweight * 0.92;
      std::cout << "Your planet weight on " << f << " is " << plaweight << "kg.\n";
      break;

    case 7 :
      plaweight = eaweight * 1.12;
      std::cout << "Your planet weight on " << g << " is " << plaweight << "kg.\n";
      break;

    case 8 :
      plaweight = eaweight * 0.07;
      std::cout << "Your planet weight on " << h << " is " << plaweight << "kg.\n";
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