#include <iostream>

using namespace std;

void judul(){
    cout << "                       INDOMARET                      " << endl ;
    cout << "                     AH NASUTION 2                    " << endl ;
    cout << "           JL.RAYA AH NASUTION KEL.YOSODADI           " << endl ;
    cout << "          KEC.METRO TIMUR KOTA METRO,  34111          " << endl ;
    cout << " ==================================================== " << endl ;
}

void footer(){
    cout << "                     Terima Kasih                     " << endl ;
    cout << "                 Atas Kunjungan Anda                  " << endl ;
    cout << " ==================================================== " << endl ;
}

int main(){
    string kode, namabarang; 
    float barang, hargasatuan, diskon, hargatotal, hargadiskon, jumlahbeli; 
    float subtotal, hargappn, grandtotal, bayar, kembalian; 
    
    judul(); 
    
    while (kode !="Y") {
		barang++; 
    
    cout << "                            " << endl;
	cout << "Barang ke-" << barang << endl; 
    cout << "                            " << endl;
    
    cout << "KODE BARANG 	: "; cin >> kode ; 
    if (kode=="IDM001") {
        namabarang = "KANZLER BAKSO ORI 48G";
        hargasatuan = 9000;
        diskon = 17.0 / 100;
    } else if (kode=="IDM002") { 
        namabarang = "FRISIAN FLAG 1+ MADU BOX 360G";
        hargasatuan = 50400;
        diskon = 5.0 / 100;
    } else if (kode=="IDM003") {
        namabarang = "ROMA SANDWICHI LEMON 120G";
        hargasatuan = 10600;
        diskon = 0;
    } else if (kode=="IDM004") {
        namabarang = "NISSIN CHOCO SOES 100G"; 
        hargasatuan = 11000;
        diskon = 0;
    } else if (kode=="IDM005") {
        namabarang = "INDOMARET POPCORN CARAMEL 75G";
        hargasatuan = 10200;
        diskon = 0;
    } else if (kode=="IDM006") {
        namabarang = "TEH PUCUK HARUM 6 PCS";
        hargasatuan = 20000;
        diskon = 0;
    } else if (kode=="IDM007") {
        namabarang = "PROMINA SUPMI AYAM";
        hargasatuan = 12600;
        diskon = 24.0 / 100;
    } else if (kode=="IDM008") {
        namabarang = "ULTRA SUSU UHT PLAN 1 LT";
        hargasatuan = 20200;
        diskon = 0;
	} else if (kode=="Y") {
        namabarang = "SELESAI BELANJA";
        hargasatuan = 0;
        diskon = 0;
    } else { 
        namabarang = "-";
        hargasatuan = 0;
        diskon = 0;
    }    
    cout << "NAMA BARANG 	: " << namabarang << endl;
    cout << "HARGA SATUAN 	: " << hargasatuan << endl;
    cout << "JUMLAH BELI     : "; cin >> jumlahbeli;
    
    hargatotal = hargasatuan * jumlahbeli;
    hargadiskon = hargatotal * diskon;
    
    cout << "----------------------------" << endl;
    cout << "HARGA TOTAL 	: RP " << hargatotal << endl;
    cout << "DISKON          : RP " << hargadiskon << endl;
    cout << "                            " << endl; 
	
	subtotal = subtotal + (hargatotal - hargadiskon); 
    
    }
    
    hargappn = subtotal * 10.0 / 100; 
    
    cout << "============================" << endl;
    cout << "SUB TOTAL	: RP " << subtotal << endl;
    cout << "PPN 10%		: RP " << hargappn << endl;
    cout << "============================" << endl;
    
    grandtotal = subtotal + hargappn;
    
    cout << "GRAND TOTAL 	: RP " << grandtotal << endl;
    cout << "BAYAR 	        : RP "; cin >> bayar;
    
    kembalian = bayar - grandtotal;
    
    cout << "KEMBALIAN	: RP " << kembalian << endl;
    cout << "                            " << endl; 
     
    footer(); 
    
    return 0; 
}
