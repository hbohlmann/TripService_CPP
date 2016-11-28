#ifndef TRIPSERVICE_TRIPSERVICE_H
#define TRIPSERVICE_TRIPSERVICE_H

#include <list>
#include "TripServiceSupport.h"

class TripService {

public:
    std::list<Trip> GetTripsByUser(User user);
};


#endif //TRIPSERVICE_TRIPSERVICE_H
