#include "skiresortfacade.h"

SkiResortFacade::SkiResortFacade()
    : _skiRent(new SkiRent),
      _hotelBookingSystem(new HotelBookingSystem),
      _skiResortTicketSystem(new SkiResortTicketSystem)
{    
}

SkiResortFacade::~SkiResortFacade()
{
    delete _skiResortTicketSystem;
    delete _hotelBookingSystem;
    delete _skiRent;
}

int SkiResortFacade::organizeAllInclusiveRest(int height, int weight, int feetSize, int skierLevel, int roomQuality)
{
    int skiPrice = _skiRent->rentSki(weight, skierLevel);
    int skiBootsPrice = _skiRent->rentBoots(feetSize, skierLevel);
    int polePrice = _skiRent->rentPole(height);
    int hotelPrice = _hotelBookingSystem->bookRoom(roomQuality);
    int oneDayTicketPrice = _skiResortTicketSystem->buyOneDayTicket();

    return skiPrice + skiBootsPrice + polePrice + oneDayTicketPrice + hotelPrice;
}

int SkiResortFacade::organizeRestWithOwnSkies(int roomQuality)
{
    int hotelPrice = _hotelBookingSystem->bookRoom(roomQuality);
    int oneDayTicketPrice = _skiResortTicketSystem->buyOneDayTicket();

    return oneDayTicketPrice + hotelPrice;
}

