/**
1010 - Simple Calculate
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int fp_code, fp_unit, sp_code, sp_unit;
    double fp_price, sp_price,calculate;

    cin>>fp_code>>fp_unit>>fp_price;
    cin>>sp_code>>sp_unit>>sp_price;

    calculate = (fp_unit*fp_price) + (sp_unit*sp_price);
    cout<<"VALOR A PAGAR: R$ "<<fixed<<setprecision(2)<<calculate<<endl;


    return 0;
}

