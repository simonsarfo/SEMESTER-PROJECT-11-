#include <iostream>
using namespace std;


int main() {
	int item,option,sell_num;
	char yes_or_no;
	float amount,cost;
	
	
	int quantity[10] 		= {30,5,20,15,10,5,10,15,3,5};
	float price[10] 		= {6.50,5.0,4.0,250.0,4.0,9.0,50.0,10.0,7.00,4.00};
	int exp_date[10] 		= {2023,2033,2330,2304,3020,2025,2021,2019,2022,2010};
	int pro_date [10]		= {2022,2031,2329,2300,3020,2022,2020,2018,2021,2010};
	string product[10]	 	= {"Cerelac","Fanta","Milo","Rice","Nido","Shito","Groundnuts","Millet","Coca-cola","Fish"};

start:		
	cout<<"\n\n    =======   Welcome To My Humble Abode  =======  \n\n";
	cout<<" 	Select an option "
		  "\n\n 1. Show products "
		  "\n\n 2. Show expired goods"
		  "\n\n 3. Sell Product     "
		  "\n 4. Exit       Select : ";
		  cin>>option;
choose:
switch(option){
	case 1: 
	system("cls");
		cout<<" Available Product \n\n";
		cout<<"=================";
		for(int i=0; i <10; i++){
			cout<<"\n++  "<<product[i];
		};
		
		cout<<"\n Do you want to sell some out? [y/n]: ";
			cin>>yes_or_no;
			if(yes_or_no=='y'||yes_or_no=='Y'){
					option=3;
					goto choose;		
			}else{
				goto start;
			}
		
			
			
	break;
	case 2:
		//showing all expired goods
		system("cls");
		for(int i=0; i <10; i++){
			if(pro_date[i] == exp_date[i]){
			
			cout<<" \n\n   EXPIRED  ITEM "<<i;
			cout<<"\n Name :  "<<product[i];
			cout<<"\n Price : GHc "<<price[i];
			cout<<"\n Validity :  "<<pro_date[i]<<" to "<<exp_date[i];
			cout<<"\n Packs left :  "<<quantity[i];
			cout<<"\n\n";
			    amount = quantity[i]*price[i];
			    cost+=amount;
			    cout<<"The expired goods cost : GHc "<<cost;
			}else{
				continue;
			}
		}goto start;
		
	break;
	case 3:
		system("cls");
		cout<<"================ My Products ===============";
		for(int i=0; i <10; i++){
			cout<<"     Item Code "<<i;
			cout<<"\n Name GHc:  "<<product[i];
			cout<<"\n Price :  "<<price[i];
			cout<<"\n Validity :  "<<pro_date[i]<<" to "<<exp_date[i];
			cout<<"\n Packs left :  "<<quantity[i];
			cout<<"\n\n";
		}
//we ask the user to select item and if the item is not found, we display error else the item and cost 		
		choose_item:
		cout<<"Choose items to sell [ Item code ] \n\n";
		cin>>item;
		if(option<=15){
			cout<<" How much are you selling :";
			cin>>sell_num;
			if(sell_num > quantity[item]){
				cout<<"\n Not enough item ";
				goto choose_item;
			}else{
				amount = sell_num*price[item];
				cout<<sell_num<<" of "<<product[item]<<" would cost GHc "<<amount;
				cost+=amount;
				cout<<"\n Is the customer done ? [y/n] :";
				
		//check if the customer is done	
				cin>>yes_or_no;
				if(yes_or_no=='n'||yes_or_no=='N'){
					goto choose_item;		
				}else{
					system("cls");
					cout<<"\n The total cost is : GHc"<<cost<<"\n\n";
					goto start;
				}
					
			}
		}else{
			cout<<"Item not found!";
			goto choose_item;
		}
		
	break;
	case 4:
		system("cls");
		cout<<"        Have a great day  \n\n\n\n";
		return 0;
		
	break;
	
	default :
		system("cls");
		cout<<"\n\n Select a valid option!!! \n\n";
		goto start;
	break;
		
	
}	
	
	
	
	return 0;
}
/*
FOR MORE INFORMATION, CALL US ON 0551082206 OR @don simeone ON ALL social media PLATFORMS
	
*/

