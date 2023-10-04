/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:21 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:45:59 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

# include <iostream>
# include <string>
# include "SpellBook.hpp"
# include "ASpell.hpp"

class Warlock {
	private:
		std::string _name;
		std::string _title;
		SpellBook _SpellBook;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void	setTitle(std::string const & str);
		void	introduce() const;
		
		void learnSpell(ASpell *spell);
		void forgetSpell(std::string SpellName);
		void launchSpell(std::string SpellName, ATarget const &target);
};

#endif
