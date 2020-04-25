#include <iostream>
#include <conio.h>
#include <math.h>

using namespace std;

class segitiga
{
 protected:
       double x,y,z;
       
  public:
       virtual void get_data()=0;
       virtual void display_area()=0;
};


class segitiga_siku : public segitiga
{
   public:
    void get_data(void)
    {
       cout<<"segitiga Siku siku \n\n";
	   cout<<"Menghitung panjang sisi dengan pytagoras \n\n";
       cout<<"masukkan nilai a = "; cin>>x;
       cout<<"masukkan nilai b = "; cin>>y;
    }
    void display_area(void)
    {
       double pytagoras;
       pytagoras =sqrt(pow(x,2)+pow(y,2));
       cout<<"nilai c adalah = "<<pytagoras<<"\n";
    }
};

class segitiga_lancip : public segitiga
{
   public:
    void get_data(void)
    {
       cout<<"segitiga lancip \n\n";
	   cout<<"Menghitung panjang sisi dengan pytagoras \n\n";
       cout<<"masukkan nilai a = "; cin>>x;
       cout<<"masukkan nilai b = "; cin>>y;
    }
    void display_area(void)
    {
       double pytagoras;
       pytagoras =sqrt(pow(x,2)+pow(y,2));
       cout<<"nilai c adalah = "<<pytagoras<<"\n";
    }
};
class segitiga_tumpul : public segitiga
{
   public:
    void get_data(void)
    {
       cout<<"segitiga tumpul \n\n";
	   cout<<"Menghitung panjang sisi dengan pytagoras \n\n";
	   cout<<"masukkan nilai a = "; cin>>x;
       cout<<"masukkan nilai b = "; cin>>y;
    }
    void display_area(void)
    {
       double pytagoras;
       pytagoras =sqrt(pow(x,2)+pow(y,2));
       cout<<"nilai c adalah = "<<pytagoras<<"\n";
    }
};

void header(){
	cout<<"===================================================="<<endl;
	cout<<"menghitung panjang sisi menggunakan konsep pytagoras"<<endl;
	cout<<"===================================================="<<endl;
	
}

int main()
{
system("cls");
segitiga_siku siku;
segitiga_lancip lancip;
segitiga_tumpul tumpul;


segitiga *list[3];

list[0]=&siku;
list[1]=&lancip;
list[2]=&tumpul;

	int pilih;
	char ulang;
	do{
		system("cls");
		  header();
		  cout<<"1) segitiga siku-siku\n";
		  cout<<"2) segitiga lancip\n";
		  cout<<"3) segitiga tumpul\n";
		  cout<<"masukkan sudut:";
		  cin>>pilih;
		  
		  if(pilih==90){
		          list[0]->get_data();
		          list[0]->display_area();
		          getch();
		          }
		  else if ((pilih>=0)&&(pilih<=89)){
		          list[1]->get_data();
		          list[1]->display_area();
		          getch();
		          }
		  else if ((pilih>=91)&&(pilih<=179)){
		          list[2]->get_data();
		          list[2]->display_area();
		          getch();
		          }
		 else{
		 
		     cout <<"maaf sudut yang anda masukkan salah"<<endl;
		     getch();
			}
		cout << "apakaah ingin menghitung lagi ? "<<endl ;
		cout << "Y/T"<<endl;
		cout << " pilih : ";
		cin >> ulang;	
		system("cls");
	}while(ulang=='Y'||ulang=='y');
	cout << "Terima kasih telah menggunakan program saya untuk menghitung"<<endl<<endl;
	getch ();
	cout << "=============================="<<endl;	
	cout << "Tatag Indah Larasati"<<endl;
	cout << " D04217025"<<endl;
    cout << "=============================="<<endl;	
    return 0;
}
