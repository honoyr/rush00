/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Bullet.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:42:55 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/07 18:42:56 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_BULLET_HPP
#define CLASS_BULLET_HPP

#include <iostream>
#include <cmath>
#include <string>

class Bullet : Role {

	public:
	Bullet (void);
	Bullet ();
	Bullet (Bullet const &copy);
	~Bullet (void);

	Bullet&						operator=(Bullet const &rhs);
/*
** METHODS
*/
	// void							rocketAttack(std::string const & target) const;
	// void							bombAttack(std::string const & target) const;
	// void							rangedAttack(std::string const & target) const;
	// void							meleeAttack(std::string const & target) const;
	// void							handAttack(std::string const & target) const;

	// void							takeDamage(unsigned int amount);
	// void							beRepaired(unsigned int amount);
	// void							vaulthunter_dot_exe(std::string const & target);

/*
** GETERS
*/
	void						updateposition( void ) const;
	// int								getHitpoints( void ) const;
	// int								getEnergypoints( void ) const;
	// int								getLevelpoints( void ) const;

/*
** SETERS
*/
	// void							setName(std::string name);
	// void							getHitpoints(int hit_p);
	// void							getEnergypoints(int energy_p);
	// void							getLevelpoints(int level);
};

#endif