/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:40:02 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:40:29 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRICKWALL_HPP
# define BRICKWALL_HPP
# include "ATarget.hpp"

class BrickWall : public ATarget {
	public :
		BrickWall();
		~BrickWall();
		ATarget* clone() const;
};

#endif
