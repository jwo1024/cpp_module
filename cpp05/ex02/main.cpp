/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 23:39:40 by jiwolee           #+#    #+#             */
/*   Updated: 2022/12/11 00:44:41 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include	"Bureaucrat.hpp"
#include	"ShrubberyCreationForm.hpp"
#include	"RobotomyRequestForm.hpp"
#include	"PresidentialPardonForm.hpp"
#include	<iostream>

int	main( void ){

	try{
		Bureaucrat	a("Jiwoo", 140);
		Bureaucrat	b("Minsuuu", 45);
		Bureaucrat	c("Zaphod", 1);

		ShrubberyCreationForm	form1("Top_secret");
		RobotomyRequestForm		form2("Robo");
		PresidentialPardonForm	form3("Pardon");

		a.executeForm(form1);
		a.signForm(form1);
		a.executeForm(form1);
		b.executeForm(form1);
		std::cout << std::endl;

		a.signForm(form2);
		b.signForm(form2);
		b.executeForm(form2);
		std::cout << std::endl;
	
		a.signForm(form3);
		b.signForm(form3);
		c.signForm(form3);
		c.executeForm(form3);
		std::cout << std::endl;

		std::cout << form1 << std::endl;
		std::cout << form2 << std::endl;
		std::cout << form3 << std::endl;
	}
	catch (std::exception &e){
		std::cout << e.what() << std::endl;
	}
	catch (...){
		std::cout << "exception" << std::endl;
	}

	return 0;
}
