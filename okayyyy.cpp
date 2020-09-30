#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main(){
	int menu;
	bool Done = true;
	int nums;
	int quiz[10],Mid[10],Final[10];
	//int *quiz = new int[num];
	//int *midterm = new int[num];
	//int *final = new int[num];
	do{
	cout<<"=================================="<<endl;
	cout<<setw(17)<<"MENU"<<endl;
	cout<<"=================================="<<endl;
	cout<<"1. Input student records"<<endl;
	cout<<"2. View all stundent records"<<endl;
	cout<<"3. Exit"<<endl;
	cout<<"Select menu :";
	cin>>menu;
	if(menu == 1){
		cout<<"Input number of student :" ;
		cin>>nums;
	for(int i = 0;i<nums;i++)
	{

		cout<<"Number"<<i+1<<endl;
		cout<<"Input Quiz :";
		cin>>quiz[i];
		cout<<"Input Midterm :";
		cin>>Mid[i];
		cout<<"Input Final :";
		cin>>Final[i];
		cout<<endl;
	}
	}
	else if(menu == 2){
		cout<<setw(30)<<setfill('_')<<(' ')<<endl;
		cout<<"Stdid"<<"\t"<<"Quiz"<<"\t"<<"MIDTERM"<<"\t"<<"FINAL"<<endl;
		cout<<setw(30)<<setfill('_')<<' '<<endl;
	for(int i = 0;i<nums;i++)
	{
		cout<<i+1<<"\t"<<quiz[i]<<"\t"<<Mid[i]<<"\t"<<Final[i]<<endl;
	}
	cout<<setw(30)<<setfill('_')<<' '<<endl;
	}
	}while(menu != 3);
	cout<<"Exit this Program";
		
	return 0;
}