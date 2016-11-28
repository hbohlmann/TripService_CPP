#include <gtest/gtest.h>
#include "TripService.h"

struct TripServiceTest : public ::testing::Test {

};

TEST_F(TripServiceTest, ItShouldNotSmoke) {
	TripService tripService;
	User user(42);
	tripService.GetTripsByUser(user);
}
