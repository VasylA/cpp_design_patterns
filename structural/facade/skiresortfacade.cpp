#include "skiresortfacade.h"

SkiResortFacade::SkiResortFacade()
{
    m_skiRentSystem = std::make_unique<SkiRentSystem>();
    m_hotelBookingSystem = std::make_unique<HotelBookingSystem>();
    m_skiResortTicketSystem = std::make_unique<SkiResortTicketSystem>();
}

int SkiResortFacade::organizeAllInclusiveRest(int height, int weight, int feetSize, int skierLevel, int hotelQuality)
{
    auto skiPrice = m_skiRentSystem->rentSki(weight, skierLevel);
    auto skiBootsPrice = m_skiRentSystem->rentBoots(feetSize, skierLevel);
    auto polePrice = m_skiRentSystem->rentPole(height);
    auto hotelPrice = m_hotelBookingSystem->bookRoom(hotelQuality);
    auto oneDayTicketPrice = m_skiResortTicketSystem->buyOneDayTicket();

    return skiPrice + skiBootsPrice + polePrice + oneDayTicketPrice + hotelPrice;
}

int SkiResortFacade::organizeRestWithOwnSkies(int hotelQuality)
{
    auto hotelPrice = m_hotelBookingSystem->bookRoom(hotelQuality);
    auto oneDayTicketPrice = m_skiResortTicketSystem->buyOneDayTicket();

    return oneDayTicketPrice + hotelPrice;
}

