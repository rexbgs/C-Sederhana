#include <iostream>
using namespace std;


int main(){
	int sepatu,kaoskaki,tali;
	pertama :
	cout<<"Siapkan Sepatu dengan Tali (1=Siap) : ";cin>>sepatu;
	if(sepatu == 1){
		cout<<"Sepatu Siap dengan Tali"<<endl;
		goto kedua;
	}
	else{
		cout<<"Siapkan Sepatu dengan tali!!!"<<endl;
		goto pertama;
	}
	kedua :
	cout<<"Siapkan Kaos Kaki (1=Siap) : ";cin>>kaoskaki;
	if(kaoskaki == 1){
		cout<<"Kaos Kaki Siap"<<endl;
		cout<<"Pakai Kaos Kaki"<<endl;
		cout<<"Pakai Sepatu"<<endl;
		cout<<"Talikan Sepatu"<<endl;
		goto ketiga;
	}
	else{
		cout<<"Siapkan Kaos kaki!!!"<<endl;
		goto kedua;
	}
	ketiga :
	cout<<"Tali Nyaman??? (1 = YA) : ";cin>>tali;
	if(tali == 1){
		cout<<"Sepatu Siap"<<endl;
		cout<<"Sudah Memakai Kaos Kaki & Sepatu tertali dengan nyaman :D"<<endl;
		goto keempat;
	}
	else{
		goto ketiga;
	}
	keempat:
	return 0;
}
