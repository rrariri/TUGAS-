//program input nilai ip kelas 
#include <iostream>
using namespace std;


int main()
{
    float ip[50], max=0, min=4, jml_ip=0;
	int lulus=0, tdk_lulus=0, error_kebawah=0, error_keatas=0;
	int x=1, bagi;
	
	cout<<"===========PROGRAM INPUT NILAI IP KELAS==========="<<endl<<endl;

	while (ip[x-1] != -999) {
		cout<<"Masukan Nilai Anda:";
        cin>>ip[x];
		
		//mahasiswa yang LULUS 
		if(ip[x]>=0 && ip[x]<=4){  
			if(ip[x]>=2.75){
				lulus++;	
			}
		//mahasiswa yang TIDAK LULUS 
			else if(ip[x]<2.75){ 
				tdk_lulus++;	
			}
			
			if (ip[x] > max){ max = ip[x]; }
			if (ip[x] < min){ min = ip[x]; }
			
		//range 1-4
			jml_ip+=ip[x];
			bagi	=	x; 
		}
		else if(ip[x] < 0 || ip[x] > 4){

			if(ip[x] > -11 && ip[x] < 1){
				error_kebawah++;	
			}
			else if(ip[x] > 4 && ip[x] < 11){
				error_keatas++;	
			}
		}
		
		x++;
    }
	
	
	float rata 		= (jml_ip/bagi);
	int jml_m		= x-2; 
	int error		= error_kebawah + error_keatas;
	
        
	cout<<endl;

	//cek jumlah x
    if(x!=1){ 
		cout<<"=======================OUTPUT====================="<<endl<<endl;
		cout<<" Jumlah Mahasiswanya Adalah                "<<jml_m<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<" Jumlah Mahasiswa Yang Lulus               "<<lulus<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<" Jumlah Mahasiswa Yang Tidak Lulus         "<<tdk_lulus<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<" Nilai Tertinggi                           "<<max<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<" Nilai Terendah                            "<<min<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<" Rata-Rata Nilai                           "<<rata<<endl;
		cout<<"--------------------------------------------------"<<endl;
		cout<<" Data ERROR                                "<<error<<endl;
		cout<<"--------------------------------------------------"<<endl<<endl;

	}
	else {
		cout<<"Data Not Found";
	}
    
	return 0;
}