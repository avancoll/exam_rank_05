/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:18:49 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:56:37 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ATARGET_HPP
# define ATARGET_HPP

# include <iostream>
# include "ASpell.hpp"

class ASpell;

class ATarget  {
	protected:
		std::string _type;
	public:
		ATarget(std::string type);
		virtual ~ATarget();
		
		std::string getType() const;
		virtual ATarget* clone() const = 0;
		void	getHitBySpell(ASpell const& spell) const;
};

#endif
