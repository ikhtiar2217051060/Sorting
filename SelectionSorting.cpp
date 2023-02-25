#include<iostream>
using namespace std;

int main(){
    int jumlah;
    cin>>jumlah;
    int data[jumlah];
    for(int indeks=0; indeks<jumlah; indeks++){
        cin>>data[indeks];
    }
    cout<<"Data sebelum diurutkan: ";
    for(int indeks=0; indeks<jumlah; indeks++){
        cout<<data[indeks]<<" ";
    }
    int minimum, storage;
    for(int indeks=0; indeks<jumlah; indeks++){
        minimum=indeks;
        for(int select=indeks+1; select<jumlah; select++){
            if(data[minimum]>data[select]){
                minimum=select;
            }
        }
        storage=data[indeks];
        data[indeks]=data[minimum];
        data[minimum]=storage;
    }
    cout<<"\nData setelah diurutkan: ";
    for(int indeks=0; indeks<jumlah; indeks++){
        cout<<data[indeks]<<" ";
    }
    return 0;
}