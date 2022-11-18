/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 18:38:46 by jiwolee           #+#    #+#             */
/*   Updated: 2022/11/18 22:24:35 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	<string> // cstring 과 차이 ? 
#include	<cerrno>
#include	<iostream>
#include	<fstream>

int	replace_file(std::string file_name, std::string s1, std::string	s2);
int	replace_file_str(std::string &str, std::string s1, std::string s2);
int	replace_file_open(std::ifstream	&read_file, std::ofstream &write_file, std::string file_name);

int	main(int argc, char *argv[]){
	if (argc != 4)
	{
		std::cout << "wrong input argc" << std::endl;
		return 1;
	}
	if (replace_file(argv[1], argv[2], argv[3]) == -1)
		return 1;
	return 0;
}

int	replace_file(std::string file_name, std::string s1, std::string	s2){
	std::ifstream	read_file;
	std::ofstream	write_file;
	std::string		str;

	if (replace_file_open(read_file, write_file, file_name) == -1)
		return -1;

	while(!read_file.eof())
	{
		std::getline(read_file, str);
		if (!read_file.eof() && read_file.fail())
		{
			std::cout << "Error:" << std::strerror(errno) << std::endl;
			break ; 
		}
		else if (!read_file.eof())
			str.append("\n");
		replace_file_str(str, s1, s2);
		write_file.write(str.c_str(), str.length());
	}
	read_file.close();
	write_file.close();
	return 1;
}

int	replace_file_str(std::string &str, std::string s1, std::string s2){
	size_t			pos;

	pos = str.find(s1.c_str(), 0);
	while (pos != str.npos)
	{
		str.erase(pos, s1.length());
		str.insert(pos, s2);
		pos = str.find(s1.c_str(), pos + 1);
	}
	return 1;
}

int	replace_file_open(std::ifstream	&read_file, std::ofstream &write_file, std::string file_name){
	write_file.open(file_name + ".replace");
	if (write_file.fail())
	{
		std::cout << "Error:" << std::strerror(errno) << std::endl;
		return -1;
	}
	read_file.open(file_name);
	if (read_file.fail())
	{
		std::cout << "Error:" << std::strerror(errno) << std::endl;
		write_file.close();
		return -1;
	}
	return 1;
}
