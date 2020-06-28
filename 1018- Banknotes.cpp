
/**
1018 - Bank notes
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int time, speed, per_km_liter = 12;
    double liters_needed;
    cin>>time>>speed;
    liters_needed =(double) (time*speed)/per_km_liter;

    cout<<fixed<<setprecision(3)<<liters_needed<<"\n";

    return 0;
}


