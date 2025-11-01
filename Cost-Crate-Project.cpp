#include <iostream>
#include <cmath>
#include<string>
using namespace std;

int main(){
    
    const float cost_per_cubic_foot = 0.23;
    const float charge_per_cubic_foot = 0.5;
    double length, height, width, volume, cost, charge, profit;
    
    cout<<"What are the dimensions of the create (length, width, height)?: " << endl;
    cin>> length;
    cin>> width;
    cin>> height;
    volume = length * width * height;
    cost = volume * cost_per_cubic_foot;
    charge = volume * charge_per_cubic_foot;
    profit = charge - cost;

    cout<<"The crates volume is "<< volume<<"cu ft"<< endl;
    cout<<"Cost to build is: "<< cost << endl;
    cout<<"Price to charge is: " << charge << endl;
    cout<<"Total Profits: " << profit << endl;
}