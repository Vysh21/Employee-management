#include<iostream>
#include<cstring>
using namespace std;

//creating base class Vehicles
class Vehicles
{
        public:
                //adding data members
                char id[20];
                char type[20];
                char fuel[20];
                int distance;

                //member function
                //default constructor
                Vehicles()
                {
                        cout<<"Information to be handed over to Motor Vehicle Department"<<endl;
                }

                void get_details();
                void display_menu();
                void show_details();
};

void Vehicles :: get_details()
{
	 cout<<"Enter Vehicle ID : ";
        cin>> id;
        cout<<"\nEnter Vehicle type : ";
        cin>> type;
        cout<<"\nEnter fuel type : ";
        cin>> fuel;
        cout<<"\nEnter distance travelled : ";
        cin>> distance;
}
void Vehicles :: display_menu()
{
        cout<<"1. Add vehicle info \n2.Find vehicle by id \n3.Modify Vehicle info"<<endl;
}

void Vehicles :: show_details()
{
        cout<<"\nVehicle ID : "<< id;
        cout<<"\nVehicle Type : "<< type;
        cout<<"\nFuel Type : "<< type;
        cout<<"\nDistance Travelled : "<< distance;
}

int main()
{
        Vehicles vehi;
        vehi.display_menu();
        vehi.get_details();
        vehi.show_details();
        return 0;
}