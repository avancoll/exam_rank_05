/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avancoll <avancoll@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 16:44:09 by avancoll          #+#    #+#             */
/*   Updated: 2023/10/04 16:58:24 by avancoll         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::~TargetGenerator() {	
}

void TargetGenerator::learnTargetType(ATarget* target) {
	if (target)
		_target[target->getType()] = target;
}

void TargetGenerator::forgetTargetType(std::string const& target) {
	if (_target.find(target) != _target.end())
		_target.erase(_target.find(target));
}

ATarget* TargetGenerator::createTarget(std::string const &target) {
	ATarget* tmp = NULL;
	if (_target.find(target) != _target.end())
		tmp = _target[target];
	return (tmp);
}