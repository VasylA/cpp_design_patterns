#ifndef SKIRESORTFACADE_H
#define SKIRESORTFACADE_H

#include "skirentsystem.h"
#include "hotelbookingsystem.h"
#include "skiresortticketsystem.h"

#include <memory>

class SkiResortFacade
{
public:
    SkiResortFacade();

    int organizeAllInclusiveRest(int height, int weight, int feetSize, int skierLevel, int hotelQuality);
    int organizeRestWithOwnSkies(int hotelQuality = 4);

private:
    std::unique_ptr<SkiRentSystem>  m_skiRentSystem;
    std::unique_ptr<HotelBookingSystem> m_hotelBookingSystem;
    std::unique_ptr<SkiResortTicketSystem> m_skiResortTicketSystem;
};

#endif // SKIRESORTFACADE_H
