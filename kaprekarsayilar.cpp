#include<iostream>
using namespace std;

int main()
{
	int sayi ;
	
	cout << "Sayı gir:" << endl;
	cin >> sayi;
	
	int kare;
	kare = sayi * sayi;
	int gecici= sayi;
	int n = 0;
		
	for (int a = 1;a < gecici ; a=10*a )
	{
		n++;
		gecici = gecici / a;
	}
	
	int yuzdelik = 1;
		
	for(int x = 1; x <= n ; x++)
	{
		yuzdelik = yuzdelik * 10;
	}
	
	int ondalik = 1;
	
	for (int y = 1; y <= n ;y++)
	{
		ondalik = ondalik * 10;
	}
	
	int kalan;
	int bolum ;
	
	kalan = kare % yuzdelik;
	bolum = kare / ondalik;
	
	cout << "Bolum :" << bolum << endl;
	cout << "kalan :" << kalan << endl;
	
	if(sayi  == kalan+bolum) cout << "Karper Sayısıdır"; else cout << "Karper Sayısı Degildir";
	


	
 
}
