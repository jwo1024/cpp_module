/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/03 23:50:11 by jiwolee           #+#    #+#             */
/*   Updated: 2022/12/11 03:24:20 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	"Cat.hpp"
#include	<iostream>

Cat::Cat( void ){
	this->type = "Cat";
	std::cout << "Cat : default constructor called" << std::endl;
}

Cat::Cat( const Cat &origin ) : Animal() {
	Cat::operator=(origin);
	std::cout << "Cat : copy constructor called" << std::endl;
}

Cat::~Cat( void ){
	std::cout << "Cat : destructor called" << std::endl;
}

Cat	&Cat::operator=( const Cat &origin){
	this->type = origin.type;
	return *this;
}

void	Cat::makeSound( void ) const{
	std::cout << "Cat : Meow~ Meow~" << std::endl;
}
