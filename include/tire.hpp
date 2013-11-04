#ifndef TIRE_H
#define TIRE_H

#include "boost/shared_ptr.hpp"

class Tire
{
private:
	std::string m_type_str;

public:
	static Tire* createTire(std::string type = "no_tires");
    virtual std::string const getTire() = 0;
    virtual ~Tire() {}
};

class Normal : public Tire
{
public:
	Normal() {}
	std::string const getTire();
	~Normal(){}
};

class Spiked : public Tire
{
public:
	Spiked() {}
	std::string const getTire();
	~Spiked(){}
};

class Offroad : public Tire
{
public:
	Offroad() {}
	std::string const getTire();
	~Offroad(){}
};

#endif
