/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zwong <zwong@student.42kl.edu.my>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/26 13:02:15 by zwong             #+#    #+#             */
/*   Updated: 2023/05/26 13:02:18 by zwong            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv) {

	if (argc != 2) {
		std::cout << "Invalid input arguments." << std::endl;
		exit(EXIT_FAILURE);
	}

	Harl harl = Harl();
	
	harl.complain(argv[1]);
	exit(EXIT_SUCCESS);
}
