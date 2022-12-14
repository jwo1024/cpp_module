/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:26:04 by jiwolee           #+#    #+#             */
/*   Updated: 2022/12/15 22:25:50 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <algorithm>
#include <iostream>
#include <exception>

class EasyFindException : public std::exception{
	public :
		const char* what() const throw() {
			return "Fail Find Value Exeption";
		}
};

template <typename C>
typename C::iterator easyfind( C &container, int value ){
	typename C::iterator iter;

	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw EasyFindException();
	return iter;
}

template <typename C>
typename C::const_iterator easyfind( C const &container, int value ){
	typename C::const_iterator iter;

	iter = std::find(container.begin(), container.end(), value);
	if (iter == container.end())
		throw EasyFindException();
	return iter;
}

#endif
