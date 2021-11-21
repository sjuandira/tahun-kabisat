#include <iostream>
using namespace std;
//salsabila juandira_2117051012
int main(){
	int a;
	cout<<"Masukan Tahun: ";
	cin>>a;
	/*tahun kabisat adalah tahun yang habis dibagi 4 tetapi
	 tidak habis dibagi 100, atau tahun yang habis dibagi 400*/
	if(a%4==0&&a%100!=0||a%400==0) 
		cout<<"=Tahun "<<a<<" adalah Tahun Kabisat=";
	else{
		cout<<"=Tahun "<<a<<" bukan Tahun Kabisat=";
	}
	return 0;
}

