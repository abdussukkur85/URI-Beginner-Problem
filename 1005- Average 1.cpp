/**
1005 - Average 1
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a,b,avg;
    cin>>a>>b;
    avg = ((a*3.5)+(b*7.5))/(3.5+7.5);
    cout<<"MEDIA = "<<fixed<<setprecision(5)<<avg<<endl;

    return 0;
}
