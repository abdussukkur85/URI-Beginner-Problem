/**
1008 - Salary
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long int number, hour;
    double salary;
    cin>>number>>hour>>salary;
    cout<<"NUMBER = "<<number<<endl;
    cout<<"SALARY = U$ "<<fixed<<setprecision(2)<<hour*salary<<endl;

    return 0;
}
