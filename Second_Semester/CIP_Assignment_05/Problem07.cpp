#include<iostream>
#include<string>
using namespace std;
class Ticket{
    protected:
        string source;
        string destination;
        float price;

    public:
        Ticket(string s, string d, float p) : source(s), destination(d), price(p) {}
};

class BusTicket : public Ticket{
    public:
        BusTicket(string s, string d, float p) : Ticket(s, d, p) {}

        float TotalFare(){
            return price;  
        }

        void Display(){
            cout << "Bus Ticket" << endl;
            cout << "Source: " << source << endl;
            cout << "Destination: " << destination << endl;
            cout << "Total Fare: " << TotalFare() << endl;
        }
};

class FlightTicket : public Ticket{
    private:
        float luggageCharge;

    public:
        FlightTicket(string s, string d, float p, float l) : Ticket(s, d, p), luggageCharge(l) {}

        float TotalFare(){
            return price + luggageCharge;
        }

        void Display(){
            cout << "Flight Ticket" << endl;
            cout << "Source: " << source << endl;
            cout << "Destination: " << destination << endl;
            cout << "Luggage Charges: " << luggageCharge << endl;
            cout << "Total Fare: " << TotalFare() << endl;
        }
};

int main(){
    BusTicket b1("Lahore", "Islamabad", 1500);
    FlightTicket f1("Lahore", "Dubai", 50000, 5000);

    b1.Display();
    cout << endl;
    f1.Display();

    return 0;
}
