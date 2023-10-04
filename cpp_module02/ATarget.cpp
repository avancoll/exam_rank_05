/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:17:58 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:33:48 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string type) : _type(type) {
}

ATarget::~ATarget() {
}

std::string ATarget::getType() const {
	return (_type);
}

void	ATarget::getHitBySpell(ASpell const& spell) const {
	std::cout << _type << " has been " << spell.getEffects() << "!" << std::endl;
}
