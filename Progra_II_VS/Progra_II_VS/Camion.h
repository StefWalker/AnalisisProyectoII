/*
 * header.h
 *
 *  Created on: 6 ene. 2021
 *      Author: dylan
 */

#pragma once

#ifndef HEADER_H_
#define HEADER_H_

struct CamionTorque {
	double apto;
	int torque;
	int energia;
	int cromosoma;
	CamionTorque(int pTorque, int pEnergia, int pCromosoma) {
		this->torque = pTorque;
		this->energia = pEnergia;
		this->cromosoma = pCromosoma;
		this->apto = 0;
	}
	CamionTorque() {
		this->torque = 0;
		this->energia = 0;
		this->cromosoma = 0;
		this->apto = 0;
	}
};

struct CamionPliegue {
	double apto;
	int pliegue;
	int energia;
	int cromosoma;
	CamionPliegue(int pPliegue, int pEnergia, int pCromosoma) {
		this->pliegue = pPliegue;
		this->energia = pEnergia;
		this->cromosoma = pCromosoma;
		this->apto = 0;
	}
	CamionPliegue() {
		this->pliegue = 0;
		this->energia = 0;
		this->cromosoma = 0;
		this->apto = 0;
	}
};

#endif /* HEADER_H_ */