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
    int sisipan;
    int before;
    for(int indeks=1; indeks<jumlah; indeks++){
        sisipan=data[indeks];
        before=indeks-1;
        while(sisipan<data[before]&&before>=0){
            data[before+1]=data[before];
            before=before-1;
        }
        data[before+1]=sisipan;
    }
    cout<<"\nData setelah diurutkan: ";
    for(int indeks=0; indeks<jumlah; indeks++){
        cout<<data[indeks]<<" ";
    }
    return 0;
}