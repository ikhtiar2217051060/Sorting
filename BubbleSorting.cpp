#include<iostream>
using namespace std;
/*program representasi dari bubbleshort*/
int main(){
	int jml_data, storage;
	cout<<"Banyanknya data = ";
	cin>>jml_data;
	int data[jml_data];
	for (int x=0; x<jml_data; x++){
		cout<<"Data ke-"<<x+1<<" = ";
		cin>>data[x];
	}
	for (int before=0; before<jml_data; before++){
		for (int after=before+1; after<jml_data; after++){
			if (data[after]<data[before]){
				storage=data[before];
				data[before]=data[after];
				data[after]=storage;
			}
		}
	}
    /*jika data disebelah kanan lebih kecil,
    -data di kiri ditampung di storage
    -data di kanan digeser ke kiri
    -data di storage tadi ditaruh di kanan yang udah dipindah
     ke kiri tadi. karena di kanan kosng/sudah digeser ke kiri*/
	cout<<"Data setelah diurutkan : ";
	for (int p=0; p<jml_data; p++){
		cout<<data[p]<<" ";
	}
	return 0;
	//I.A. WIcaksono (Ph.D)
}
