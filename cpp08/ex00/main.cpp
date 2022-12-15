/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jiwolee <jiwolee@student.42seoul.kr>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 21:24:45 by jiwolee           #+#    #+#             */
/*   Updated: 2022/12/15 08:53:59 by jiwolee          ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include	<algorithm>
#include	<vector>
#include	<list>
#include	<deque>

class A{

public:
	int iterator;
	A(void){};
	~A(void){};
//	void	iterator(){};
};

int	main( void ){
	{
		std::cout << "--- CONTAINER VECTOR ---" << std::endl;
		int	vector_arr[] = {1, 2, 3, 3, 4, 5};
		std::vector<int> vector_container( vector_arr, vector_arr + (sizeof(vector_arr)/sizeof(int)) );
		/* vector try1 */
		try{
			std::vector<int>::iterator v_iter = easyfind< std::vector<int> >(vector_container, 3);

			while (v_iter != vector_container.end()) // distance 로 위치 확인
				std::cout << *(v_iter++) << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl; //std:;cerr 98?
		}
		/* vector try2 */
		try{
			std::vector<int>::iterator v_iter = easyfind< std::vector<int> >(vector_container, 400);

			while (v_iter != vector_container.end())
				std::cout << *(v_iter++) << std::endl;
		}
		catch (const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "--- CONTAINER LIST ---" << std::endl;
		int	list_arr[] = {200, -3, 1, 300, -40, -500};
		std::list<int> list_container( list_arr, list_arr + (sizeof(list_arr)/sizeof(int)) );
		/* list try1 */
		try{
			std::list<int>::iterator l_iter = easyfind< std::list<int> >(list_container, -3);

			while (l_iter != list_container.end())
				std::cout << *(l_iter++) << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		/* list try2 */
		try{
			std::list<int>::iterator l_iter = easyfind< std::list<int> >(list_container, 89);

			while (l_iter != list_container.end())
				std::cout << *(l_iter++) << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << "--- CONTAINER DEQUE ---" << std::endl;
		int	deque_arr[] = {5201, 326, -1, 330, 488, -503};
		std::deque<int> deque_container( deque_arr, deque_arr + (sizeof(deque_arr)/sizeof(int)) );
		/* deque try1 */
		try{
			std::deque<int>::iterator d_iter = easyfind< std::deque<int> >(deque_container, 5201);

			while (d_iter != deque_container.end())
				std::cout << *(d_iter++) << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
		/* deque try2 */
		try{
			std::deque<int>::iterator d_iter = easyfind< std::deque<int> >(deque_container, -3);

			while (d_iter != deque_container.end())
				std::cout << *(d_iter++) << std::endl;
		}
		catch(const std::exception& e){
			std::cerr << e.what() << std::endl;
		}
	}

// 
	// {
	// 	/* --- NOT CONTAINER --- */
	
	//	std::stack ??

	// 	A a;
	// 	/* try1 */
	// 	try{
	// 		easyfind< A >(a, 5201);
	// 	}
	// 	catch(const std::exception& e){
	// 		std::cerr << e.what() << std::endl;
	// 	}

	// }

	return 0;
}
