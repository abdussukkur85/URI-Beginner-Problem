/**
1014 - Consumption
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int km;
    double fuel,mileage;
    cin>>km>>fuel;

    mileage = km/fuel;
    cout<<fixed<<setprecision(3)<<mileage<<" km/l\n";

    return 0;
}




