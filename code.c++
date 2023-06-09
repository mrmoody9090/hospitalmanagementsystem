#include<iostream>
using namespace std;
struct hps{
	char name[50];
		int age;
	char gender[50];
	int reg;
int pin;

	
};
int lab(){
	int a;
	cout<<"\n\n\tENTER YOUR CHOICE FOR THE LAB TESTS\n";
	cout<<"\t1.CITY SCAN\n";
	cout<<"\t2.X-RAY\n";
	cout<<"\t3.BLOOD TEST\n";
	cout<<"\t4.MRI\n";
	cout<<"\t5.COVID TEST\n";
	cout<<"\t6.EXIT\n";
	cout<<"\n\tYour Choice: ";
	cin>>a;
	switch(a){
		case 1:
			cout<<"\n\tCITY SCAN\n";
			cout<<"\tRS 1000\n";
			cout<<"\tYOUR TEST TIME WILL BE SENT TO YOU IN AN HOUR\n";
			cout<<"\tTHANKYOU FOR YOUR PATIENCE\n";
			break;
		case 2:
			cout<<"\n\tX-RAY\n";
			cout<<"\tRS 800\n";
			cout<<"\tYOUR TEST TIME WILL BE SENT TO YOU IN AN HOUR\n";
			cout<<"\tTHANKYOU FOR YOUR PATIENCE\n";
			break;
		case 3:
			cout<<"\n\tBLOOD TEST\n";
			cout<<"\tRS 1000\n";
			cout<<"\tYOUR TEST TIME WILL BE SENT TO YOU IN AN HOUR\n";
			cout<<"\tTHANKYOU FOR YOUR PATIENCE\n";
			break;
		case 4:
			cout<<"\n\tMRI\n";
			cout<<"\tRS 1100\n";
			cout<<"\tYOUR TEST TIME WILL BE SENT TO YOU IN AN HOUR\n";
			cout<<"\tTHANKYOU FOR YOUR PATIENCE\n";
			break;
		case 5:
			cout<<"\n\tCOVID TEST\n";
			cout<<"\tRS 1000\n";
			cout<<"\tYOUR TEST TIME WILL BE SENT TO YOU IN AN HOUR\n";
			cout<<"\tTHANKYOU FOR YOUR PATIENCE\n";
			break;
		case 6:
			break;
		default:
			cout<<"\n\t***PLEASE ENTER A VALID CHOICE***\n";
	}
	
}
int pharm(){
	int b,c;
	cout<<"\n\n\tENTER YOUR CHOICE FOR THE MEDICINES\n";
	cout<<"\t1.HEART MEDICINES\n";
	cout<<"\t2.LUNG MEDICINES\n";
	cout<<"\t3.KIDNEY MEDICINE\n";
	cout<<"\t4.LIVER MEDICINE\n";
	cout<<"\t5.COLD AND FEVER MEDICINES\n";
	cout<<"\t6.EXIT\n";
	cout<<"\n\tYour Choice: ";
     cin>>b;
	switch(b){
		case 1:
			cout<<"\n\tENTER YOUR CHOICE FOR THE AVAILABLE MEDICINES\n";
			cout<<"\t1.STATIN\n";
			cout<<"\t2.ASPIRIN\n";
			cout<<"\t3.CLOPIDOGREL\n";
			cout<<"\t4.WARFARIN\n";
			cout<<"\n\tYour Choice: ";
			cin>>c;
			if(c==1){
				cout<<"\n\t\tSTATIN\n";
				cout<<"\t\tRS 690\n";
			}
			else if(c==2){
				cout<<"\n\t\tASPIRIN\n";
				cout<<"\t\tRS 450\n";
				
			}
			else if(c==3){
				cout<<"\n\t\tCLOPIDOGREL\n";
				cout<<"\t\tRS 980\n";
				
			}
			else if(c==4){
				cout<<"\n\t\tWARFARIN\n";
				cout<<"\t\tRS 730\n";
				
			}
			else{
				cout<<"\n\t\t***INVALID CHOICE***\n";
			}
			break;
		case 2:
			cout<<"\n\n\tENTER YOUR CHOICE FOR THE AVAILABLE MEDICINES\n";
			cout<<"\t1.ALBUTEROL\n";
			cout<<"\t2.IPRATROPIUM\n";
			cout<<"\t3.LEVALBUTEROL\n";

			cin>>c;
			if(c==1){
				cout<<"\n\t\tALBUTEROL\n";
				cout<<"\t\tRS 190\n";
			}
			else if(c==2){
				cout<<"\n\t\tIPRATROPIUM\n";
				cout<<"\t\tRS 150\n";
				
			}
			else if(c==3){
				cout<<"\n\t\tLEVALBUTEROL\n";
				cout<<"\t\tRS 280\n";
				
			}
		
			else{
				cout<<"\n\t\t***INVALID CHOICE***\n";
			}
			break;
		case 3:
			cout<<"\n\tENTER YOUR CHOICE FOR THE AVAILABLE MEDICINES\n";
			cout<<"\t1.CAPTOPRIL\n";
			cout<<"\t2.ENALAPRIL\n";
			cout<<"\t3.FOSINOPRIL\n";
			cout<<"\t4.LISINOPRIL\n";
			cout<<"\t5.RAMIPRIL\n";
			cin>>c;
			if(c==1){
				cout<<"\n\t\tCAPTOPRIL\n";
				cout<<"\t\tRS 890\n";
			}
			else if(c==2){
				cout<<"\n\t\tENALAPRIL\n";
				cout<<"\t\tRS 650\n";
				
			}
			else if(c==3){
				cout<<"\n\t\tFOSINOPRIL\n";
				cout<<"\t\tRS 880\n";
				
			}
			else if(c==4){
				cout<<"\n\t\tLISINOPRIL\n";
				cout<<"\t\tRS 730\n";
				
			}
			else if(c==5){
				cout<<"\n\t\tRAMIPRIL\n";
				cout<<"\t\tRS 560\n";
			}
			else{
				cout<<"\n\t\t***INVALID CHOICE***\n";
			}
			break;
			case 4:
					cout<<"\tENTER YOUR CHOICE FOR THE AVAILABLE MEDICINES\n";
			cout<<"\t1.NEOMYCIN\n";
			cout<<"\t2.FLOXURIDINE\n";
			cout<<"\t3.ACTIGALL\n";
			cout<<"\t4.AVANDIA\n";
			cin>>c;
			if(c==1){
				cout<<"\n\t\tNEOMYCIN\n";
				cout<<"\t\tRS 990\n";
			}
			else if(c==2){
				cout<<"\n\t\tFLOXURIDINE\n";
				cout<<"\t\tRS 850\n";
				
			}
			else if(c==3){
				cout<<"\n\t\tACITIGALL\n";
				cout<<"\t\tRS 980\n";
				
			}
			else if(c==4){
				cout<<"\n\t\tAVANDIA\n";
				cout<<"\t\tRS 730\n";
				
			}
			else{
				cout<<"\n\t\t***INVALID CHOICE***\n";
			}
			break;
			
		case 5:
			cout<<"\n\tENTER YOUR CHOICE FOR THE AVAILABLE MEDICINES\n";
			cout<<"\t1.PANADOL\n";
			cout<<"\t2.ARINAC\n";
			cout<<"\t3.DISPIRIN\n";
		
			cin>>c;
			if(c==1){
				cout<<"\n\t\tPANADOL\n";
				cout<<"\t\tRS 90\n";
			}
			else if(c==2){
				cout<<"\n\t\tARINAC\n";
				cout<<"\t\tRS 50\n";
				
			}
			else if(c==3){
				cout<<"\n\t\tDISPIRIN\n";
				cout<<"\t\tRS 80\n";
				
			}
			
			else{
				cout<<"\n\t\t***INVALID CHOICE***\n";
			}
			break;
		case 6:
			break;
		default:
			cout<<"\tENTER A VALID CHOICE\n";
			break;		
	}
}
int emer(){
	int a;
	cout<<"\n\n\tENTER YOUR CHOICE\n";
	cout<<"\t1.MAJOR ACCIDENT\n";
	cout<<"\t2.MINOR ACCIDENT\n";
	cout<<"\t3.HEART ATTACK\n";
	cout<<"\t4.ANY OTHER EMERGENCIES\n";
	cout<<"\t5.EXIT\n";
	cout<<"\n\tYour Choice: ";
	cin>>a;
	switch(a){
		case 1:
			cout<<"\n\tYOUR REQUEST HAS BEEN SENT TO THE RELIVANT DEPARTMENT\n";
			cout<<"\tYOUR REQUEST IS APPROVED\n";
			cout<<"\tWILL ENSURE YOUR TREATMENT WITHIN 5 MINS\n";
			break;
		case 2:
			cout<<"\n\tYOUR REQUEST HAS BEEN SENT TO THE RELIVANT DEPARTMENT\n";
			cout<<"\tYOUR REQUEST IS APPROVED\n";
			cout<<"\tWILL ENSURE YOUR TREATMENT WITHIN 5 MINS\n";
			break;
		case 3:
			cout<<"\n\tYOUR REQUEST HAS BEEN SENT TO THE RELIVANT DEPARTMENT\n";
			cout<<"\tYOUR REQUEST IS APPROVED\n";
			cout<<"\tWILL ENSURE YOUR TREATMENT WITHIN 5 MINS\n";
			break;
		case 4:
			cout<<"\n\tYOUR REQUEST HAS BEEN SENT TO THE RELIVANT DEPARTMENT\n";
			cout<<"\tYOUR REQUEST IS APPROVED\n";
			cout<<"\tWILL ENSURE YOUR TREATMENT WITHIN 5 MINS\n";
			break;
		case 5:
			break;
		default:
			cout<<"\n\t***ENTER A VALID CHOICE***\n";
			break;
	}
	
}
main(){
	cout<<"This Project is created  by:\t\t|\n\t\t\t\t\t|\n\tHassan Mehmood (BSCYS-009).\t|\n\tAreeba Zafar (BSCYS-018).\t|";
	cout<<"\n\tAmbreen (BSEE-014).\t\t|\n\n";
	hps c[30];
	int a,b,d,e,i=1,f,j=80;
	cout<<"\t\t\tWELCOME TO CITY HOSPITAL\n";
	do{
		cout<<"\n\n-------------------------------------------------------------------\n\n";
		cout<<"\t1.NEW REGISTRATION.\n";
		cout<<"\t2.LAB TESTS.\n";
		cout<<"\t3.PHARMACY.\n";
		cout<<"\t4.EMERGENCY.\n";
		cout<<"\t5.PATIENT'S INFO.\n";
		cout<<"\t6.NO OF BEDS.\n";
		cout<<"\t7.EXIT.\n";
		cout<<"\n\tENTER YOUR CHOICE: ";
		
		cin>>a;
		switch(a)
		{
			case 1:
				cout<<"\n\tENTER PATIENT'S NAME: ";
				cin>>c[i].name;
				cout<<"\tENTER YOUR AGE: ";
				cin>>c[i].age;
				cout<<"\tENTER YOUR GENDER: ";
				cin>>c[i].gender;
				cout<<"\tCREATE YOUR 4 DIGIT PIN: ";
				cin>>c[i].pin;
				c[i].reg=i;
				cout<<"\tREGISTRATION NUMBER FOR THE PATIENT IS: "<<c[i].reg<<endl;
				i++;
				cout<<endl;
				break;
			case 2:
				lab();
				cout<<endl;
				cout<<"\n\tIF YOU NEED ANY MEDICATIONS..?\n\tPRESS 1:\n\tOTHERWISE PRESS ANY NUMBER\n";
	cin>>f;
	if(f==1){
		pharm();
		cout<<endl;
	}
	else{
	break;
	}
	
				break;
			case 3:
				pharm();
				cout<<endl;
				cout<<"\n\tIF YOU NEED ANY LAB TESTS..?\n\tPRESS 1:\n\tOTHERWISE PRESS ANY NUMBER\n";
	cin>>f;
	if(f==1){
		lab();
		cout<<endl;
	}
	else{
		break;
	}
	
				break;
			case 4:
				emer();
				cout<<endl;
					j--;
				cout<<"\n\tNEED ANY MEDICATIONS OR LAB TESTS..?\n";
				cout<<"\n\tPRESS 1 FOR PHARMACY AND 2 FOR LAB TESTS  \n";
	cin>>f;
	if(f==1){
		pharm();
		cout<<endl;
	}
	else if(f==2){
		lab();
		cout<<endl;
	}
	else{
		break;
	}
	
			break;
				
			case 5:
				cout<<"\tENTER YOUR REG NUMBER: ";
				cin>>e;
			
				if(c[e].reg==e){
				
				cout<<"\tENTER YOUR PIN CODE: ";
				cin>>d;
				if(d==c[e].pin){
					cout<<"\tPATIENT'S NAME: "<<c[e].name<<endl;
					cout<<"\tPATIENT'S GENDER:"<<c[e].gender<<endl;
					cout<<"\tPATIENT'S AGE:"<<c[e].age<<endl;
				}
				else{
					cout<<"\n\t***ENTER A VALID PIN***\n";
				}}
				else{
					cout<<"\n\t***NO RECORD FOUND***\n";
				}
				break;
				case 6:
				if(j>0){
					cout<<"\n\tNUMBER OF AVAILABLE BEDS ARE:"<<j<<endl;
					
				}
				else{
					cout<<"\n\tNO BEDS AVAILABLE\n";
				}
				break;
			case 7:
				cout<<"\n\tTHANKYOU FOR YOUR TIME\n";
				exit(1);
				break;
								
			default:
				cout<<"\n\t***ENTER A VALID CHOICE***\n";
				break;
		}
	}
	while(a!=7);
	
}
