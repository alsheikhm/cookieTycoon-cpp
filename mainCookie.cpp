// Mohammed Al-Sheikh
// mainCookie.cpp

#include <iostream>
#include "Clicker.h"

int main()
{
    // Intialize clicker and option variables
    Clicker clicker;
    int option;
    
    // Runs until game has been one
    while(clicker.IsThisAWinningGame() == false)
    {
        // Display menu
        std::cout << clicker;
        std::cout << "(1) Click cookie   (2) Buy clicker   (3) Buy grandma     ??? ";
        std::cin >> option;
        
        // Input validation if input is an integer that is not 1, 2, 3
        while(option < 1 || option > 3)
        {
            std::cout << std::endl << "You have selected an invalid option. Try again." << std::endl;
            std::cout << "(1) Click cookie   (2) Buy clicker   (3) Buy grandma     ??? ";
            std::cin >> option;
        }
        
        // Depending on input option, perform proper command (no default needed bc input is valid)
        switch(option)
        {
            case 1:
                clicker.ClickCookie();
                break;
                
            case 2:
                clicker.BuyClicker();
                break;
                
            case 3:
                clicker.BuyGrandma();
                break;
        }
    }
    
    // Display winning values of number of cookies, clickers, grandmas and winning statements
    std::cout << clicker;
    std::cout << "You made it through the level!  Now stop cooking clickers!" << std::endl;
    std::cout << "I mean clicker cookers!  I mean clicking cookies!  Yeah!" << std::endl << std::endl;
    
    return 0;
}
