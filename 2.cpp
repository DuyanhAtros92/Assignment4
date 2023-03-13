#include <iostream>
#include <string>
using namespace std;

class car
{
private:
    int year;
    string make;
    int speed;

public:

     car(int y = 2010, string m = "unknown")
     {
         year = y;
             make  = m;
             speed = 0;
     }


     int getYear()
     { return year; }

     string getMake()
     { return make; }

     int getSpeed()
     { return speed; }


     void accelerate()
    {  speed += 10;  }

    void brake()
    {

        if ( speed >= 10)
            speed =10;
        else
            speed = 0;
    }

};

int main(){

     car hotRod (2010, "Mazda");
     cout << "I'm in my" << hotRod.getYear()<<" "
          << hotRod.getMake() << " hot rod.\n\n";
    // Now stop
    cout << "Now I'm breaking...\n\n";
    for (int slower =1; slower <= 10; slower++)
    {
     hotRod.brake();
     cout << " current speed: " << hotRod.getSpeed() << "mph";
    }
     cout << endl;
     return 0;
};
