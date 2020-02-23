#ifndef SKIRESORTFACADE_H
#define SKIRESORTFACADE_H

#include "skirent.h"
#include "hotelbookingsystem.h"
#include "skiresortticketsystem.h"

class SkiResortFacade
{
public:
    SkiResortFacade();
    ~SkiResortFacade();

    int organizeAllInclusiveRest(int height, int weight, int feetSize, int skierLevel, int roomQuality);
    int organizeRestWithOwnSkies(int roomQuality = 3);

private:
    SkiRent *_skiRent;
    HotelBookingSystem *_hotelBookingSystem;
    SkiResortTicketSystem *_skiResortTicketSystem;
};

#endif // SKIRESORTFACADE_H
