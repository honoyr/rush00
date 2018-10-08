/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Enemy.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:20:32 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/07 18:20:36 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Class.Enemy.hpp"


/*
** CONSTRUCTOR
*/

Enemy::Enemy (void) {}
Enemy::Enemy (void) : : Role(2, abs(rand() % 100), 'W', true), game(NULL) {}
Enemy::Enemy (Enemy const &copy) { *this = copy; }

/*
** DESTRUCTOR
*/

Enemy::~Enemy (void) {}

/*
** OPERATOR
*/

Enemy&						Enemy::operator=(Enemy const &rhs) {
	if (this != &rhs)
		*this = rhs;
	retrun *this;
}

void						updateposition( void ) const { _i += 1;}