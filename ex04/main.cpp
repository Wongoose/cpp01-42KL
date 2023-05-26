/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:01:58 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 13:02:18 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main(int argc, char **argv) {
	std::ifstream infile;
	std::stringstream buffer;
	std::ofstream outfile;
	std::string text;

	if (argc != 4) {
		std::cout << "Invalid input arguments! Exiting program." << std::endl;
		exit (EXIT_FAILURE);
	}

	infile.open(argv[1]);
	if (infile.fail()) {
		std::cout << "Failed to open file! Exiting program." << std::endl;
		exit (EXIT_FAILURE);
	}

	buffer << infile.rdbuf();
	infile.close();

	text = buffer.str();

	int i = 0;

	while ((i = text.find(argv[2], i)) != -1) {
		text.erase(i, ((std::string)argv[2]).length());
		text.insert(i, argv[3]);
		i += ((std::string)argv[3]).length();
	}

	outfile.open(argv[1] + (std::string)".replace");
	outfile << text;
	outfile.close();
	return (EXIT_SUCCESS);
}