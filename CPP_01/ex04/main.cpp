/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yorlians <yorlians@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 18:26:51 by yorlians          #+#    #+#             */
/*   Updated: 2023/11/08 14:29:35 by yorlians         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fstream>
#include <iostream>
#include <string>

/*Handle file operations*/
int	handle_file(char **av)
{
	/*To read the file*/
	std::ifstream	infile(av[1]);
	/*To store each line of the file*/
	std::string		line;
	/*To check if the string to replace is found*/
	bool			found =	false;

	/*If cannot open file*/
	if (!infile)
	{
		std::cout << "\033[1;91mError with infile\033[0m" << std::endl;
		return (0);
	}
	std::string str_to_replace = av[2];
	std::string replacement_str = av[3];
	/*Read file line by line*/
	while (std::getline(infile, line))
	{
		/*If string to replace is found*/
		if (line.find(str_to_replace) != std::string::npos)
		{
			found = true;
			break;
		}
	}
	/*If string to replace is not found*/
	if (!found)
	{
		std::cout << "\033[1;91mError: String to replace is not found\033[0m" << std::endl;
		return (0);
	}
	/*Close and open file again to reset the file pointer*/
	infile.close();
	infile.open(av[1]);
	/*Create a new file with ".replace"*/
	std::string name = std::string(av[1]) + ".replace";
	/*Open file for writing*/
	std::ofstream newfile(name.c_str());
	/*If file failed to open*/
	if (!newfile)
	{
		std::cout << "\033[1;91mError with outfile\033[0m" << std::endl;
		return (0);
	}
	/*Read file line by line*/
	while (std::getline(infile, line))
	{
		/*Find pos of the string to replace*/
		size_t	pos = line.find(str_to_replace);
		/*While the string to replace is found*/
		while (pos != line.npos)
		{
			/*Replace the string with the replacement string*/
			line.erase(pos, str_to_replace.length());
			line.insert(pos, replacement_str);
			pos = line.find(str_to_replace, pos + replacement_str.length());
		}
		/*Write the line to the new file*/
		newfile << line << std::endl;
	}
	return (1);
}

int	main(int ac, char **av)
{
	/*If no filename given*/
	if (ac < 2)
	{
		std::cout << "\033[1;91m    Wrong parameters: Missing filename\033[0m" << std::endl;
		std::cout << "\033[1;91mUsage: " << "<filename> <to replace> <replacement>\033[0m" << std::endl;
		return (1);
	}
	/*If no string to replace given*/
	else if (ac < 3)
	{
		std::cout << "\033[1;91m    Wrong parameters: Missing string to replace\033[0m" << std::endl;
		std::cout << "\033[1;91mUsage: " << "<filename> <to replace> <replacement>\033[0m" << std::endl;
		return (1);
	}
	/*If no replacement string given*/
	else if (ac < 4)
	{
		std::cout << "\033[1;91mWrong parameters: Missing replacemet string\033[0m" << std::endl;
		std::cout << "\033[1;91mUsage: " << "<filename> <to replace> <replacement>\033[0m" << std::endl;
		return (1);
	}
	/*If too many parameters given*/
	else if (ac > 4)
	{
		std::cout << "\033[1;91m   Wrong parameters: Too many parameters\033[0m" << std::endl;
		std::cout << "\033[1;91mUsage: " << "<filename> <to replace> <replacement>\033[0m" << std::endl;
		return (1);
	}
	/*If all parameters are given and are correct*/
	else if (ac == 4)
		handle_file(av);
	return (0);
}
