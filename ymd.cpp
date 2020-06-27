#include<iostream>
using namespace std;

int main(){

            int n,d=0,m=0,y=0;

            cout<<"Enter input"<<endl;
            cin>>n;

            while(n>=365){
                y=y+1;
                n=n-365;
            }
            while(n>=30){
                m=m+1;
                n=n-30;
            }

            d=n;

            cout<<"Years: "<<y<<endl;
            cout<<"Months: "<<m<<endl;
            cout<<"Days: "<<d<<endl;

            return 0;
}
