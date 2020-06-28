
/**
1013 - The Greatest
Code written by Abdus Sukkur
Contact: mail: abdussukkur73@gmail.com
**/

#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long int a,b,c,maxab, maxvalue;
    cin>>a>>b>>c;

    maxab = (a+b+ abs(a-b))/2;
    maxvalue = (maxab+c+ abs(maxab-c))/2;
    cout<<maxvalue<<" eh o maior\n";
    return 0;
}


