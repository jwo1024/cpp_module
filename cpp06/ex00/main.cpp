/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/11 01:12:53 by jiwolee           #+#    #+#             */
/*   Updated: 2022/12/13 14:51:31 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	"Convertor.hpp"
#include	<iostream>
#include	<string>

int	main( int argc, char *argv[] ){
	if (argc != 2)
	{
		std::cout << "wrong argc" << std::endl;
		return 0;
	}
	Convertor	con;
	con.setValue(argv[1]);
	con.printValue();
	return 0;
}
