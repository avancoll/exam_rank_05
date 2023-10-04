/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:16:48 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:56:31 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ASPELL_HPP
# define ASPELL_HPP

# include <iostream>
# include "ATarget.hpp"

class ATarget;

class ASpell  {
	protected:
		std::string _name;
		std::string _effects;
	public:
		ASpell(std::string name, std::string effects);
		ASpell &operator=(ASpell const & src);
		ASpell(ASpell const& src);
		virtual ~ASpell();
		
		std::string getName() const;
		std::string getEffects() const;
		virtual ASpell* clone() const = 0;
		void launch(ATarget const& target) const;
};

#endif