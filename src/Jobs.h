#pragma once
#include "Personal.h"

class Vanzator : public Personal
{
public:
	Vanzator(std::string, std::string, int);
	~Vanzator();
	void ajustari_salariu();
	void verificare_an();
};

class Paznic : public Personal
{
public:
	Paznic(std::string, std::string, int);
	~Paznic();
	void ajustari_salariu();
	void verificare_an();
};

class Manager : public Personal
{
public:
	Manager(std::string, std::string, int);
	~Manager();
	void ajustari_salariu();
	void verificare_an();
};
