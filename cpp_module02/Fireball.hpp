/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:41:07 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:41:31 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIREBALL_HPP
# define FIREBALL_HPP

# include "ASpell.hpp"

class Fireball : public ASpell {
	public :
		Fireball();
		~Fireball();
		ASpell* clone() const;
};

#endif
