// Online C++ compiler to run C++ program online
// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;
void adminVerification();
void addStudentData();
void Mainmenu();


//Admin Main Function start here


void adminFunction()
{
   
    while(1)
    {
    cout << "\n\n\t\t\t\t\t | Logged In as Admin |";
    cout << "\n\n\t\t\t\t\t 1. Add Students Detail";
    cout << "\n\n\t\t\t\t\t 2. Delete Students";
    cout << "\n\n\t\t\t\t\t 3. update Record";
    cout << "\n\n\t\t\t\t\t 4. View Table ";
    cout << "\n\n\t\t\t\t\t 5. Main Menu ";
    cout << "\n\n\t\t\t\t\t 6. Exit ";
     
     int option;
     cin>>option;
     
     switch(option)
     {
         case 1:
         addStudentData();
         break;
         case 2:
         cout<<"Delete Students";
         break;
         case 3:
         cout<<" update Record";
         break;
         case 4:
          cout<<"View Table ";
         break;
         case 5:
         Mainmenu();
         break;
         case 6:
         exit(0);
         
     }
    }
}


void  addStudentData()
{

    char rollNumber[10], name[20], college[50], branch[10], attendance[10], physics[5], chemistry[5], maths[5];
    string moreData;

   
    cout << "\nEnter Student's Name : ";
   cin.getline(name,20);
    

    cout << "\nEnter College : ";
   cin.getline(college,50);
  

    cout << "\nEnter Branch : ";
    cin.getline(branch,10);
  

    cout << "\nEnter Attendance : ";
    cin.getline(attendance, 10);
  

    cout << "\nEnter Physic's Marks : ";
    cin.getline(physics, 5);
   

    cout << "\nEnter Chemistry Marks : ";
   cin.getline(chemistry, 5);
  

    cout << "\nEnter Maths Marks : ";
   cin.getline(maths, 5);
    
   
   

    cout << "\nAdd more Record? (Y / N) : ";

    cin >> moreData;
    if (moreData == "y" || moreData == "Y" || moreData == "yes" || moreData == "Yes")
    {
       addStudentData();
    }
   
        

}
    

//Admin main function end here 



//void studentFunction();

void Mainmenu()
{
    
while(1)
{
     //system("cls");
 
  cout<<"\n\n\n\n\t\t\t\t\t Login As : ";
  cout<<"\n\n\n\n\t\t\t\t1. Admin ";
  cout<<"\n\n\n\n\t\t\t\t2. Student";
  cout<<"\n\n\n\n\t\t\t\t3. Exit";
  cout << "\n\n\n\t\t\t\t\t Enter your choice : ";

      
  int choice;
  cin>>choice;
  switch(choice)
   {
       case 1:
     
           adminVerification();
           break;
      
       case 2:
     
           //system("cls");
           cout<<" Welcome as student:";
           //studentFunction();
           break;
      
       case 3:
     
       // system("cls");
          cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";
          exit(0);
          break;
          default:
          cout<<"Invalid input:";
         }
         
       }
}
  

// adminVerification() here;

  
 //password verfication here
 
 void passwordVerification()
 {
          //system("cls");
     string password;
     cout << "\n\n\n\n\n\t\t\t\t\t";
     cout<<"\n\n\t\t Enter Password :";
     
     do
     {
         cin>>password;
         if(password!="admin")
        {
            //system("cls");
             cout << "\n\n\n\n\n\t\t"
                 << "wrong password!, try again or type 'quit' / 'exit' to Quit The program.";
                 cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }
        if(password=="Quit"||password=="quit"|| password=="exit"||
        password=="Exit"||password=="EXIT"||password=="QUIT")
        {
            //system("cls");
            
            cout << "\t\t\n\n\n\n\n\n\n\t\t\t\t\tQuitting The Program";

           

            exit(0);
        }

    }

    while (password != "admin");
    Mainmenu();
        }

void adminVerification()
{
        string password;

    cout << "\n\n\n\n\n\t\t\t\t\t";
    cout << "\n\n\n\t\t\t\t\tEnter Password : ";

    do
    {
        cin >> password;

        if (password != "admin")
        {
            //system("cls");
            cout << "\n\n\n\n\n\t\t"
                 << "wrong password!, try again or type 'menu' to Navigate to Main Menu";
            cout << "\n\n\n\t\t\t\t\tEnter Password : ";
        }

        if (password == "Menu" || password == "menu" || password == "MENU")
        {
            Mainmenu();
        }

    }

    while (password != "admin");
    adminFunction(); // main menu function is in the Header File adminFunction.h
}
     
 
 
 //password verificaion end here
  
  
  
//admin function end here
int main() {
 
  passwordVerification();
   
    return 0;
}