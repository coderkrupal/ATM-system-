#include<iostream>
#include<cstdlib>
      //create global variable//

     double amount = 1000;

 //first create shownmenu//
 using namespace std;
  
   void showmenu();
   //create for a function for check balance//

    int  checkbalance();
    //create a function for widraw money//
    int  widraw();

    int  deposit();

  int main()
  {
      showmenu();
   
              //  double amount;

          int opt;
          cout<<endl;
          cout<<"select any option"<<endl;
          cin>>opt;

          system("cls");

          switch (opt)
          {
          case 1:
             checkbalance();
             main();
            break;
          
          case 2:
               widraw();
               break;

           case 3:
               deposit();
               break;
          default:
            break;
          }
  }

   void showmenu(){

          int opt;

          cout<<"########################################################"<<endl;
          cout<<"                       ATM                                     "<<endl;
          cout<<"###########################################################"<<endl;
       
               cout<<endl<<endl;;
          cout<<"---------------------MAIN MENU---------------------------------"<<endl;
          cout<<"1:check balace"<<endl;
          cout<<"2:widraw money"<<endl;
          cout<<"3:deposit monye"<<endl;
          cout<<"4:EXIT"<<endl;

   }

       int  checkbalance(){


              cout<<"your current balance is: $"<<amount<<endl;

              if(amount<1000){
                     cout<<"your amount is too less"<<endl;
                     
              }
              else{
                  cout<<"balance read successfully"<<endl;
              }

              cout<<endl;
       }

       int widraw(){

            double wamount;

            cout<<"enter  widraw  amount: ";
            cin >> wamount;  

            if(wamount>amount){
                  cout<<"you have not sufficient money for widrawing,please re-enter your money"<<endl;
                  widraw();
            }
            else{
                 cout<<"you widrawing is successfully done"<<endl;
            }
              amount-=wamount;

            //  cout<<"now your current balance is : "<<amount<<endl;

                main();

       }

            int  deposit(){

                double damount;

                cout<<"enter deposit amount"<<endl;

                cin>>damount;

                amount+=damount;

                cout<<"your deposit successfully add to your account"<<endl;

                main();
            }