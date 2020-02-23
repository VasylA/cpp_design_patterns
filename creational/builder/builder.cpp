
#include <string>
#include <sstream>

using std::string;
using std::stringstream;

//==============================================================================

class Laptop
{
public:
    Laptop() {}

    std::string description();

    void setMonitorResolution(const std::string &monitorResolution);
    void setProcessor(const std::string &processor);
    void setMemory(const std::string &memory);
    void setHdd(const std::string &hdd);
    void setBattery(const std::string &battery);

private:
    std::string _monitorResolution;
    std::string _processor;
    std::string _memory;
    std::string _hdd;
    std::string _battery;
};

std::string Laptop::description()
{
    stringstream descriptionStream;
    descriptionStream << "\tLaptop: "
                      << _monitorResolution << ", "
                      << _processor << ", "
                      << _memory << ", "
                      << _hdd << ", "
                      << _battery << std::endl;

    return descriptionStream.str();
}


void Laptop::setMonitorResolution(const std::string &monitorResolution)
{
    _monitorResolution = monitorResolution;
}

void Laptop::setProcessor(const std::string &processor)
{
    _processor = processor;
}

void Laptop::setMemory(const std::string &memory)
{
    _memory = memory;
}

void Laptop::setHdd(const std::string &hdd)
{
    _hdd = hdd;
}

void Laptop::setBattery(const std::string &battery)
{
    _battery = battery;
}

//==============================================================================

class LaptopBuilder
{
public:
    virtual ~LaptopBuilder() {}

    Laptop *getLaptop() const { return _laptop; }

    void createNewLaptop() { _laptop = new Laptop; }

    virtual void setupMonitorResolution() = 0;
    virtual void setupProcessor() = 0;
    virtual void setupMemory() = 0;
    virtual void setupHDD() = 0;
    virtual void setupBatary() = 0;

protected:
    Laptop *_laptop;
};

//==============================================================================
class GameLaptopBuilder : public LaptopBuilder
{
public:
    virtual void setupMonitorResolution();
    virtual void setupProcessor();
    virtual void setupMemory();
    virtual void setupHDD();
    virtual void setupBatary();
};

void GameLaptopBuilder::setupMonitorResolution()
{
    _laptop->setMonitorResolution("1900x1200");
}

void GameLaptopBuilder::setupProcessor()
{
    _laptop->setProcessor("Core 2 Duo, 3.2 GHz");
}

void GameLaptopBuilder::setupMemory()
{
    _laptop->setMemory("6144 Mb");
}

void GameLaptopBuilder::setupHDD()
{
    _laptop->setHdd("500 Gb");
}

void GameLaptopBuilder::setupBatary()
{
    _laptop->setBattery("6 lbs");
}

//==============================================================================

class TripLaptopBuilder : public LaptopBuilder
{
public:
    virtual void setupMonitorResolution();
    virtual void setupProcessor();
    virtual void setupMemory();
    virtual void setupHDD();
    virtual void setupBatary();
};

void TripLaptopBuilder::setupMonitorResolution()
{
    _laptop->setMonitorResolution("1200x800");
}

void TripLaptopBuilder::setupProcessor()
{
    _laptop->setProcessor("AMD E2-3000M, 1.8 GHz");
}

void TripLaptopBuilder::setupMemory()
{
    _laptop->setMemory("3072 Mb");
}

void TripLaptopBuilder::setupHDD()
{
    _laptop->setHdd("500 Gb");
}

void TripLaptopBuilder::setupBatary()
{
    _laptop->setBattery("9 lbs");
}

//==============================================================================

class Master
{
public:
    void setLaptopBuilder(LaptopBuilder *laptopBuilder);

    void constructLaptop();

    Laptop *getLaptop() { return _laptopBuilder->getLaptop(); }

private:
    LaptopBuilder *_laptopBuilder;
};


void Master::setLaptopBuilder(LaptopBuilder *laptopBuilder)
{
    _laptopBuilder = laptopBuilder;
}

void Master::constructLaptop()
{
    _laptopBuilder->createNewLaptop();
    _laptopBuilder->setupMonitorResolution();
    _laptopBuilder->setupProcessor();
    _laptopBuilder->setupMemory();
    _laptopBuilder->setupHDD();
    _laptopBuilder->setupBatary();
}

//==============================================================================

int main()
{
    auto *tripBuilder = new TripLaptopBuilder();
    auto *shop = new Master;

    shop->setLaptopBuilder(tripBuilder);
    shop->constructLaptop();

    auto *laptop = shop->getLaptop();

    std::cout << "I`ve got a new laptop!" << std::endl
              << laptop->description() << std::endl;

    delete tripBuilder;
    delete laptop;

    auto *gamingBuilder = new GameLaptopBuilder();

    shop->setLaptopBuilder(gamingBuilder);
    shop->constructLaptop();

    laptop = shop->getLaptop();

    std::cout << "I`ve got a new laptop!" << std::endl
              << laptop->description() << std::endl;

    delete gamingBuilder;
    delete laptop;

    delete shop;

    return 0;
}
