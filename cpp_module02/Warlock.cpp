/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:11:18 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:47:10 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title) : _name(name), _title(title) {
	std::cout << _name << ": This looks like another boring day." << std::endl;
}

Warlock::~Warlock() {
	std::cout << _name << ": My job here is done!" << std::endl;
}

std::string const& Warlock::getName() const {
	return (_name);
}

std::string const & Warlock::getTitle() const {
	return (_title);
}

void	Warlock::setTitle(std::string const& title) {
	_title = title;
}

void	Warlock::introduce() const {
	std::cout << _name << ": I am " << _name << ", " << _title << "!" << std::endl;
}

void Warlock::learnSpell(ASpell* spell) {
	_SpellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string SpellName) {
	_SpellBook.forgetSpell(SpellName);
}

void Warlock::launchSpell(std::string SpellName, ATarget const &target) {
	if (_SpellBook.createSpell(SpellName))
		_SpellBook.createSpell(SpellName)->launch(target);
}