#include "Header.h"
#include <iostream>
#include <string>

machine::machine() // constructor
{
	int choice = 0; // assigning value to variable
}

int machine::displaying() // method
{
	std::cout << "\n\n\t\t\t Welcome to a cola machine made by 0x191" << std::endl;
	std::cout << "\n\n\t\t\t\t --- Choose one ---" << std::endl;
	std::cout << "\n\t\t\t\t 1.Cola" << std::endl;
	std::cout << "\n\t\t\t\t\t 2.Water" << std::endl;
	std::cout << "\n\t\t\t\t 3.Sprite" << std::endl;
	std::cout << "\n\t\t\t\t\t 4.Milk" << std::endl;
	std::cout << "\n\t\t\t\t 5.Gatorade" << std::endl;

	std::cin >> choice;

	switch (choice)
	{
	case 1:
		if (choice == 1) {
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
			std::cout << "\n\n\t\t\t .: ahh this coke sure is great! :." << std::endl;
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
		}
	case 2:
		if (choice == 2) {
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
			std::cout << "\n\n\t\t\t .: ahh this Water sure is great! :. " << std::endl;
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
		}
	case 3:
		if (choice == 3) {
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
			std::cout << "\n\n\t\t\t .: ahh this Sprite sure is great! :. " << std::endl;
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
		}
	case 4:
		if (choice == 4) {
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
			std::cout << "\n\n\t\t\t .: ahh this Milk sure is great! :. " << std::endl;
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
		}
	case 5:
		if (choice == 5) {

			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
			std::cout << "\n\n\t\t\t .: ahh this Gatorade sure is great! :." << std::endl;
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
		}
	default:
		if (choice > 5) {

			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
			std::cout << "\n\n\t\t\t .: Wrong choice, heres your money back :." << std::endl;
			std::cout << "\n\n\t\t\t -------------------------------" << std::endl;
		}
		break;
	}
	return 0; 
}
