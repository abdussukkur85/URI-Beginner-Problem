/**
1008 - Salary with bonus
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string name;
    double salary, sale, total;
    getline(cin,name);
    cin>>salary>>sale;

    total = ((sale*15)/100)+salary;
    cout<<"TOTAL = R$ "<<fixed<<setprecision(2)<<total<<endl;

    return 0;
}
