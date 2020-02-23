#ifndef SKIRESORTTICKETSYSTEM
#define SKIRESORTTICKETSYSTEM

class SkiResortTicketSystem
{
public:
    int buyOneDayTicket()
    {
        return ONE_DAY_TICKET_PRICE;
    }
    int buyHalfDayTicket()
    {
        return HALF_DAY_TICKET_PRICE;
    }

private:
    static const int ONE_DAY_TICKET_PRICE = 115;
    static const int HALF_DAY_TICKET_PRICE = 60;
};

#endif // SKIRESORTTICKETSYSTEM

