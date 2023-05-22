#include <string>
#include <iostream>
#include <iomanip>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str; // change in reference string will change in original string

	std::cout << std::left << std::setw(40) << "Address of str: " << &str << std::endl;
	std::cout << std::left << std::setw(40) << "Address held by stringPTR: " << stringPTR << std::endl;
	std::cout << std::left << std::setw(40) << "Address held by stringREF: " << &stringREF << std::endl;
	
	std::cout << std::left << std::setw(40) << "Value of str: " << str << std::endl;
	std::cout << std::left << std::setw(40) << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
	std::cout << std::left << std::setw(40) << "Value pointed to by stringREF: " << stringREF << std::endl;
}