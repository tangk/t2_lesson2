#ifndef CAR_H
#define CAR_H

#include <map>
#include <string>
#include "tire.hpp"

class Car
{
private:
	Tire* m_tire;
public:
	Car() : m_tire(Tire::createTire()) {}
	Car(std::string s) : m_tire(Tire::createTire(s)){}
	std::string const GetTires();
};

#endif
