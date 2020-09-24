#include <iostream>
#include <fstream>
#include<string>
#include<conio.h>
using namespace std;

const char ESC = 27;
const double Toll = 50;
const double truck = 50; 
const double dtruck = 150; 


class Tollbooth
{
            unsigned int totalVehicles;         // total cars passed from tollbooth today
            double totalCash;
            int mpass;
			int s;                      // total money collected today
public:
            Tollbooth()
            {
                        totalVehicles = 0;
                        totalCash = 0;
                        mpass=0;
            }
            void set()
            {
            	cout<<"tell your side single or double for single type 1 and double 2"<<endl;
            	cin>>s;
			}
            void Payingmotercycle()                 
            {
                        cout << "\nA paid two wheeler vehicle passes, Rs.50.00 added... ";
                        totalVehicles++; totalCash += Toll;
            }
            void truck()                 
            {
                     if(s==1)
					 {
									             	
                        cout << "\nA paid truck passes, Rs.150.00 added... ";
                        totalVehicles++;
						 totalCash += Toll;
                    }
                     if(s==2)
					 {
									             	
                        cout << "\nA paid truck passes, Rs.250.00 added... ";
                        totalVehicles++; totalCash += dtruck;
                    }
                    else
                    {
					
                    cout << "\nA paid truck passes, Rs3500.00 added... ";
                        totalVehicles++; totalCash += dtruck; mpass++;
                    }
            }
            void NonPayingVehicles()
            {
                        cout << "\nA non paid vehicle passes... ";
                        totalVehicles++;
            }
            void displayCashCollected()
            {
                        cout << "\nTotal vehicles passed = " << totalVehicles;
                        cout << "\nTotal Cash collected  = " << totalCash;
            }
};

int main()
{
            Tollbooth booth1;                      // Create ToolBooth class' object
           string ch;
            int n=800;
            char  line[n];
            fstream enquiry;
            enquiry.open("tallfare.txt");
            cout<<"your charges of tall taxes are "<<endl;
            while(enquiry)
            {
            	enquiry.getline(line,n);
            	cout<<line<<endl;
			}
                cout<<"Enter your vhicle category"<<endl;
                 void set();
            do
            {
                        
                        cin>>ch;
                        if (ch == "truck") 
                          	{			  	           
                      booth1.truck();
					 			}
									  if (ch == "lcv")             
                                    booth1.NonPayingVehicles(); 
									 if (ch == "car")             
                                    booth1.truck();           
            } while (ch!="stop");
            booth1.displayCashCollected();
            system("pause");
}
