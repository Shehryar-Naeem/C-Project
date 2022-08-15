#include<iostream>
using namespace std;
int main()
{
    const double MAX_TEMP=102.5;//Maximum Temperature
    double temperature;//To hold the temperature
    //Get the current temperaturwe
        cout<<"Enter the substance~s celseius temperature:" ;
    cin>>temperature;
    // AS long as necessary ,instruct the technician
    // to adjust the thermostat.
    while(temperature>MAX_TEMP)
    {
     cout<<"The temperature is too high.Turn the\n";
     cout<<"thermostat down and wait 5 minutes.\n";
     cout<<"Then take the celsius temperature again\n";
     cout<<"and enter it here:";
     cin>>temperature;

    }
    // Remind the technician to check the temperature
    // again in 15 minutes.
    cout<<"The temperature is acceptable.\n";
    cout<<"Check it again in 15 minutes.\n";
    return 0;

}


















