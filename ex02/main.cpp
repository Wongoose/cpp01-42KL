/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:01:40 by zwong             #+#    #+#             */
/*   Updated: 2023/05/31 17:24:49 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>

// Learning: reference used often in functions when change is needed
// (diff vs ptr is that reference cannot be changed to point to another var, while ptr can)
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