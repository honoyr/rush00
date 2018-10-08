/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Bullet.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:42:42 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/07 18:42:46 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Class.Bullet.hpp"


/*
** CONSTRUCTOR
*/

Bullet::Bullet (void){}
Bullet::Bullet (void) : : Role(0, 0, '|', true), game(NULL) {}
Bullet::Bullet (Bullet const &copy) { *this = copy; }

/*
** DESTRUCTOR
*/

Bullet::~Bullet (void) {}

/*
** OPERATOR
*/

Bullet&						Bullet::operator=(Bullet const &rhs) {
	if (this != &rhs)
		*this = rhs;
	retrun *this;
}
