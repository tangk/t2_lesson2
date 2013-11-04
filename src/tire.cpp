#include "tiretypes.cpp"
#include "tire.hpp"

Tire* Tire::createTire(std::string type)
{
	if (type == "normal")
	{
		return new Normal();
	}
	else if (type == "spiked")
	{
		return new Spiked();
	}
	else if (type == "offroad")
	{
		return new Offroad();
	}
	else
	{
		return new Normal();
	}
}

std::string const Normal::getTire()
{
	return "normal";
}

std::string const Spiked::getTire()
{
	return "spiked";
}

std::string const Offroad::getTire()
{
	return "offroad";
}
