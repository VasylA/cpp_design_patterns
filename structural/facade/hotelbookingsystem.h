#ifndef HOTELBOOKINGSYSTEM
#define HOTELBOOKINGSYSTEM

class HotelBookingSystem
{
public:
    int bookRoom(int hotelQuality)
    {
        switch (hotelQuality)
        {
            case 3:  return 250;
            case 4:  return 500;
            case 5:
            default: return 900;
        }
    }
};

#endif // HOTELBOOKINGSYSTEM
