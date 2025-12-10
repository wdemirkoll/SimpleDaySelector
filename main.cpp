#include <iostream>

int main(){
    int dayNumber;

    // Infinite loop: keeps asking the user for a day number
    while(true){
        std::cout << "[1-7] Enter day number:";
        std::cin >> dayNumber;

        // Print the corresponding day based on the entered number
        switch(dayNumber){
         case 1:
            std::cout << "Monday" << std::endl; // 1 -> Monday
            break;

         case 2:
            std::cout << "Tuesday" << std::endl; // 2 -> Tuesday
            break;

         case 3:
            std::cout << "Wednesday" << std::endl; // 3 -> Wednesday
            break;

         case 4:
            std::cout << "Thursday" << std::endl; // 4 -> Thursday
            break;

         case 5:
            std::cout << "Friday" << std::endl; // 5 -> Friday
            break;

         case 6:
            std::cout << "Saturday" << std::endl; // 6 -> Saturday
            break;

         case 7:
            std::cout << "Sunday" << std::endl; // 7 -> Sunday
            break;

         // If the number is not between 1 and 7
         default:
            std::cout << "Invalid selection please enter number 1-7" << std::endl;
            break;
         }
    }

  return 0;
}
