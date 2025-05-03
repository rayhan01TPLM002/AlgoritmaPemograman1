#include<iostream>
using namespace std;
int main()
{
	int umur;
	cout<<"Masukan Umur : ";
    cin>>umur;
    
    if(umur<=21){
    	    if(umur<=10){
    	    	    cout<<"Anak-Anak"<<endl;
    	    	    }else{
    	    	    	   cout<<"Remaja"<<endl;
					}
	}else{
		            cout<<"Bukan usia anak maupun remaja"<<endl;
	}
}
