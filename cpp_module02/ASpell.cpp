/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:16:02 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:16:39 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string name, std::string effects) : _name(name), _effects(effects) {
}

ASpell::~ASpell() {
}

std::string ASpell::getName() const {
	return (_name);
}

std::string ASpell::getEffects() const {
	return (_effects);
}

void ASpell::launch(ATarget const& target) const {
	target.getHitBySpell(*this);
}
