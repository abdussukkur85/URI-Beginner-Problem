
/**
1015 - Distance between two points
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double x1,y1,x2,y2, distance, power = 2.0;
    cin>>x1>>y1>>x2>>y2;

    distance = (pow(x2-x1,power)+ pow(y2-y1,power));
    distance = sqrt(distance);

    cout<<fixed<<setprecision(4)<<distance<<"\n";

    return 0;
}

