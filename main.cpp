/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dgonor <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/10/07 17:59:35 by dgonor            #+#    #+#             */
/*   Updated: 2018/10/07 17:59:36 by dgonor           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main(int argc, char const *argv[])
{
	// for (int i = 0; i < 20; i++)
		// system("afplay ./sounds/robot.mp3 > /dev/null &");
		system("afplay -t 0.5 ./sounds/laser.aiff > /dev/null &");
		// system("afplay -t 0.5 ./sounds/aser.aiff > /dev/null &");
	return 0;
}
