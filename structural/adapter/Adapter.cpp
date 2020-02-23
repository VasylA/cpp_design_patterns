//#include <iostream>
//#include <string>
//using namespace std;
//
//class OldElectricitySystem
//{
//public:
//	OldElectricitySystem()
//	{
//		cout <<"Old electricity system\n";
//	}
//	string MatchThinSocket()
//	{
//		return "220V";
//	}
//};
//
//
//class INewElectricitySystem
//{
//public:
//	virtual string MatchWideSocket() = 0;
//};
//class NewElectricitySystem: public INewElectricitySystem
//{
//public:
//	NewElectricitySystem()
//	{
//		cout <<"New electricity system\n";
//	}
//	virtual string MatchWideSocket()
//	{
//		return "220V";
//	}
//};
//
//
//class Adapter: public INewElectricitySystem
//{
//	OldElectricitySystem* _adaptee;
//public:
//	Adapter(OldElectricitySystem* adaptee)
//	{
//		_adaptee = adaptee;
//	}
//	virtual string MatchWideSocket()
//	{
//		return _adaptee->MatchThinSocket();
//	}
//};
//
//
//class ElectricityCustomer
//{
//public:
//	static void ChargeNoteBook(INewElectricitySystem* electricitySystem)
//	{
//		cout <<electricitySystem->MatchWideSocket()<<endl;
//	}
//};
//int main()
//{
//	INewElectricitySystem* newElectricitySystem = new NewElectricitySystem;
//	ElectricityCustomer::ChargeNoteBook(newElectricitySystem);
//
//	OldElectricitySystem* oldElectricitySystem = new OldElectricitySystem;
//	INewElectricitySystem* adapter = new Adapter(oldElectricitySystem);
//	ElectricityCustomer::ChargeNoteBook(adapter);
//
//	return 0;
//}