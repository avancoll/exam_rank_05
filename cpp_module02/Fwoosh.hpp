/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:20:49 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:21:16 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FWOOSH_HPP
# define FWOOSH_HPP

# include "ASpell.hpp"

class Fwoosh : public ASpell {
	public:
		Fwoosh();
		~Fwoosh();
		ASpell* clone() const;
};

#endif
