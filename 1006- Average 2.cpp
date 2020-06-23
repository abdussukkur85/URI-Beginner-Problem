/**
1006 - Average 2
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,c,avg;
    cin>>a>>b>>c;
    avg = ((a*2)+(b*3)+(c*5))/(2+3+5);
    cout<<"MEDIA = "<<fixed<<setprecision(1)<<avg<<endl;

    return 0;
}
