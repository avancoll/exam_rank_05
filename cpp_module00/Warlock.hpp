/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:21 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:11:31 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Warlock {
	private:
		std::string _name;
		std::string _title;
	public:
		Warlock(std::string const &name, std::string const &title);
		~Warlock();
		std::string const& getName() const;
		std::string const& getTitle() const;
		void	setTitle(std::string const & str);
		void	introduce() const;
};