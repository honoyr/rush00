/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Class.Enemy.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 18:20:45 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/07 18:20:47 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLASS_ENEMY_HPP
#define CLASS_ENEMY_HPP

#include <iostream>
#include <cmath>
#include <string>
#include <cmath>

class Enemy : Role {

	public:
	Enemy (void);
	Enemy ();
	Enemy (Enemy const &copy);
	~Enemy (void);

	Enemy&						operator=(Enemy const &rhs);
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