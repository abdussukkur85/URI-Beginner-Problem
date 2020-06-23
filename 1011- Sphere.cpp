/**
1011 - Sphere
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double pi = 3.14159;
    long double volume,radius;

    cin>>radius;

    volume = (4/3.0)*pi*(radius*radius*radius);
    cout<<"VOLUME = "<<fixed<<setprecision(3)<<volume<<endl;


    return 0;
}


