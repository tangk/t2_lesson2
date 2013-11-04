#include "gtest/gtest.h"
#include "boost/shared_ptr.hpp"
#include "car.hpp"

TEST(CarTests, NoParams)
{
	boost::shared_ptr<Car> car (new Car());
	EXPECT_EQ("no_tires", car->GetTires());
}

TEST(CarTests, WitTireParam)
{
	boost::shared_ptr<Car> car (new Car("spiked"));
	EXPECT_EQ("spiked", car->GetTires());
}
