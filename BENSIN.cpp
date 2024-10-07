#include <iostream>
#include <iomanip>
using namespace std;

	double pmax = 13000, plite = 10000, solar = 6000, pturbo = 17500, dexlite = 15000
	double rupiah;
	
    void max (double rupiah){
    	
		double pmax = 13000;
    
    	cout << "Mau ngisi berapa ribu pak?" << endl;
    	cin >> rupiah;
    	
    	double liter = rupiah / pmax;
    	cout << fixed << setprecision(1);
        cout << "Oke kalau beli segitu keluarnya " << liter << " liter ya pak" << endl
        	 << "Terima kasih telah membeli :)";
   }
void lite (double rupiah){
    	
		double plite = 10000;
    
    	cout << "Mau ngisi berapa ribu pak?" << endl;
    	cin >> rupiah;
    	
    	double liter = rupiah / plite;
    	cout << fixed << setprecision(1);
        cout << "Oke kalau beli segitu keluarnya " << liter << " liter ya pak" << endl
        	 << "Terima kasih telah membeli :)";
   }
void solarr (double rupiah){
    	
		double solar = 6000;
    
    	cout << "Mau ngisi berapa ribu pak?" << endl;
    	cin >> rupiah;
    	
    	double liter = rupiah / solar;
    	cout << fixed << setprecision(1);
        cout << "Oke kalau beli segitu keluarnya " << liter << " liter ya pak" << endl
        	 << "Terima kasih telah membeli :)";
   }
void turbo (double rupiah){
    	
		double pturbo = 17500;
    
    	cout << "Mau ngisi berapa ribu pak?" << endl;
    	cin >> rupiah;
    	
    	double liter = rupiah / pturbo;
    	cout << fixed << setprecision(1);
        cout << "Oke kalau beli segitu keluarnya " << liter << " liter ya pak" << endl
        	 << "Terima kasih telah membeli :)";
   }
void ddexlite (double rupiah){
    	
		double dexlite = 15000;
    
    	cout << "Mau ngisi berapa ribu pak?" << endl;
    	cin >> rupiah;
    	
    	double liter = rupiah / dexlite;
    	cout << fixed << setprecision(1);
        cout << "Oke kalau beli segitu keluarnya " << liter << " liter ya pak" << endl
        	 << "Terima kasih telah membeli :)";
   }


int main(){
    int jenis;
    double rupiah;
    double pmax = 13000, plite = 10000, solar = 6000, pturbo = 17500, Dexlite = 15000;

    cout << "---Pertamini GoTri---" << endl
         << "Pertamax         Rp. 13.000/liter" << endl
         << "Pertalite        Rp. 10.000/liter" << endl
         << "Solar            Rp. 6.000/liter" << endl
         << "Pertamax Turbo   Rp. 17.500/liter" << endl
         << "Dexlite          Rp. 15.000/liter" << endl
         << "Mau beli yang mana?" << endl
         << endl
         << "1. Pertamax" << endl
         << "2. Pertalite" << endl
         << "3. Solar" << endl
         << "4. Pertamax Turbo" << endl
	 << "5. Dexlite" << endl
	 << endl
	 << "Masukan angka sesuai jenis yang di inginkan!" << endl
	 << endl;

    cin >> jenis;
    cout << endl;
    
  	switch (jenis){
  	
  	case (1):
  		max (rupiah);
  		break;

	case (2):
		lite (rupiah);
		break;

	case (3):
		solarr (rupiah);
		break;

	case (4):
		turbo (rupiah);
		break;

	case (5):	
		ddexlite (rupiah)
		break;
  		
	  }
    

    return 0;
}
