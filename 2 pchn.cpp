#include<iostream>
using namespace std;

int main(){
int a,b,hasil;

cout<<"Program memvalidasi pembagian tidak dengan nol"<<endl;
cout<<"ITA LESTARI"<<endl;
cout<<"311810183"<<endl;
cout<<"masukan pembilang"<<endl;
cin>>a;
cout<<"masukan penyebut"<<endl;
cin>>b;

if(b==0){
    cout<<"Pembagian tidak boleh dengan nol"<<endl;
}
else
    hasil=a/b;
cout<<"maka hasilnya adalah"<<hasil;
return 0;
}
