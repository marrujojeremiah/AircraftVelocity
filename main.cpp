#include <iostream> 
using namespace std;

int main() {
  double distance, time, velocity;

  cout << "Enter the distance travled by the aircraft (in kilometers): ";
  cin >> distance;

  cout << "Enter the time taken by the aircraft (in hours): ";
  cin >> time;

if(time > 0){

  velocity = distance / time;
          cout << "The velocity of the aircraft is: " << velocity << " km/h" << endl;
    } else {
          cout << "Time cannot be zero or negative. Please enter a valid time." << endl;
    }

    return 0;


}