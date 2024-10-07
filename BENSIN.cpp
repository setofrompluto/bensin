#include <iostream>
#include <iomanip>
using namespace std;

	double pmax = 13000, plite = 10000, solar = 6000, pturbo = 17500;
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

int main(){
    int jenis;
    double rupiah;
    double pmax = 13000, plite = 10000, solar = 6000, pturbo = 17500;

    cout << "---Pertamini GoTri---" << endl
         << "Pertamax         Rp. 13.000/liter" << endl
         << "Pertalite        Rp. 10.000/liter" << endl
         << "Solar            Rp. 5.000/liter" << endl
         << "Pertamax Turbo   Rp. 17.500/liter" << endl
         << "Mau beli yang mana?" << endl
         << endl
         << "1. Pertamax" << endl
         << "2. Pertalite" << endl
         << "3. Solar" << endl
         << "4. Pertamax Turbo" << endl;

    cin >> jenis;
    cout << endl;
    
  	switch (jenis){
  	
  	case (1):
  		max (rupiah);
  		break;
  		
	  }
    

    return 0;
}
