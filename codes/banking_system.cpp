#include<iostream>
#include<string>

using namespace std;

class Account{
    long long int acc_num;
    static long long int cnt;
    string name;
    string acc_type;
    float balance=0;

    public: 
        void set_accnt(){
            int choice;
            acc_num = cnt++;
            cout<<"\nEnter your Full Name: ";
             cin.ignore();
            getline(cin,name);

            
           
            cout<<"Available Account types are : \n"
                    <<"1) Saving Account (default balance can be 0)\n"
                    <<"2) Current Account (Must have Rs.1000 minimum balance) \n";
                    level1:
                cout<<"Enter your choice: \n";
                cin>>choice;
                switch(choice){
                    case 1: cout<<"Your Account is now Saving account type \n";
                            acc_type = "Saving Account";
                            cout<<"\nYour Account Number is : "<<acc_num<<endl;
                            cout<<"Your account has been Added Successfully \n\n";
                            break;
                    case 2: cout<<"Your Account is now Current account type \n";
                     int n;
                    do{
                       
                            cout<<"You need to deposit Rs. 1000 immediately or you will be fined. \n";
                            cout<<"Deposit money \n";
                            cin>>n;
                            balance = n;
                    
                    }while(n<1000);
                    cout<<"\nYour Account Number is : "<<acc_num<<endl;
                    cout<<"Your current balance : "<<balance<<endl;
                    cout<<"Your account has been Added Successfully \n\n";
                    break;
                    default :
                    cout<<"invalid choice\n";
                    goto level1;
                }
        }
        void withdrawn(){
            long long int num;
            cout<<"Enter your Account Number : ";
            cin>>num;
            if(num==acc_num){
                float money;
                do{
                cout<<"Enter Money to be Withdrawn: ";
                cin>>money;
                }while(money<0);
                if(money<=balance){
                    balance-=money;
                    cout<<"\nAccount has been Debited with "<<money<<"Rs"<<endl;
                    cout<<"Your Current Balance is "<<balance; 
                    cout<<endl;
                }
                else{
                    cout<<"\nInsufficient Balance \n";
                }
            }
            else{
                cout<<"Invalid Account Number \n";
                return;
            }
        }
        void deposit(){
             long long int num;
            cout<<"\nEnter your Account Number : ";
            cin>>num;
            if(num==acc_num){
                float money;
                do{
                cout<<"\nEnter Money to be deposited: ";
                cin>>money;
                }while(money<0);
                balance+=money;
                cout<<"Your Account has been Credited with "<<money<<" Rs" << endl;
                cout<<"Your Current Balance is : "<<balance<<endl;
             cout<<"\nYour Account Number is : "<<acc_num<<endl;}
             else{
                cout<<"Invalid Account Number \n";
                return;
             }
        }
        void get_accnt(){
             long long int num;
            cout<<"Enter your Account Number : ";
            cin>>num;
            if(num==acc_num){
                cout<<"Your Account Details are : \n";
                cout<<"Account Number: "<<acc_num<<endl;
                cout<<"Account Holder's Name: "<<name<<endl;
                cout<<"Account Type : "<<acc_type<<endl;
                cout<<"Current Balance : "<<balance;
            cout<<"\nYour Account Number is : "<<acc_num<<endl;}
            else{
                cout<<"Invalid Account Number \n";
                return;
            }
        }
        void display_all(){
            cout<<"Your Account Details are : \n";
                cout<<"Account Number: "<<acc_num<<endl;
                cout<<"Account Holder's Name: "<<name<<endl;
                cout<<"Account Type : "<<acc_type<<endl;
                cout<<"Current Balance : "<<balance;
        }
};
long long int Account::cnt = 16000000;

int main(){
    Account A1[3];
            
        while(true){    
        int choice,j=0;
            cout<<"1)Add account \n2)Withdraw\n3)Deposit\n4)Display Individual Account\n5)Display all account Details\n6)Exit\n";
            cout<<"Enter your Choice: ";
            cin>>choice;
            switch(choice){
                case 1: 
                for(int i=0;i<3;i++){
                    A1[i].set_accnt();
                }
                break;

                case 2: 
                do{cout<<"Enter your index:(0-2) \n";
                cin>>j;
                }while(j>2 || j<0);
                A1[j].withdrawn();
                break;
                
                case 3:
                do{cout<<"Enter your index:(0-2) \n";
                cin>>j;
                }while(j>2 || j<0);
                A1[j].deposit();
                break;

                case 4:
                do{cout<<"Enter your index:(0-2) \n";
                cin>>j;
                }while(j>2 || j<0);
            A1[j].get_accnt();
            break;

            case 5: for(int i=0;i<3;i++){
                A1[i].display_all();
                cout<<endl;
            }
            break;
            
            case 6: cout<<"Goodbye!"; 
            exit(0);
            }
    
  }
    return 0;
}