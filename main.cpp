// Header File  //
#include<iostream>
#include<conio.h>b
#include<windows.h>
#include<string.h>
#include<fstream>

using namespace std;

// User defined Function //
void delay();
void exit();
void mainpage();
void login();
void firReport(int&fir);
void filecheckerfirReport(int&);
void add();
void filecheckerFirReportupdate(int&fir);
void update();
void filecheckerfirReportdisplay(int&);
void firReportdisplay(int&);
void display();
void removefir();
void menu();

//  Function For Delay or Loading //
void delay()
{
    cout<<"\n\n\n\t\t\t\t\t\t\t\tLOADING";
    for (int i=1;i<=25;i++)
    {
        cout<<".";
        Sleep(100);
    }
}

// Function For Exit the Program //
void exit()
{
    delay ();
    cout<<"\n\n\n\t\t\t\t\t**TAKING OUT  OF THE SYSTEM";
    system("cls");
    cout<<"\n\n\n\t\t\t\t\t\t\t\t   PEACE IN THE COUNTRY IS PEACE IN THE WORLD";
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t*YOU ARE OUT*";
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\t\t\t\t\t\t THANK YOU";
    exit (0);
}

// Function For Mainpage //
void mainpage()
{
    system("cls");
    cout <<"\n\n\t\t\t\t\t\t\t\t ------------------------------";
    cout <<"\n\t\t\t\t\t\t\t\t |MILITIARY COLLEGE OF SIGNALS|";
    cout <<"\n\t\t\t\t\t\t\t\t ------------------------------";
    cout <<"\n\n\t\t\t\t\t\t\t\t---------------------------------";
    cout <<"\n\t\t\t\t\t\t\t\t|POLICE REPORT MANAGEMENT SYSTEM|";
    cout <<"\n\t\t\t\t\t\t\t\t---------------------------------";
    cout <<"\n\n\t\t\t\t\t\t\t\t---------------------------------";
    cout <<"\n\t\t\t\t\t\t\t\t|   Prepared By   :  GROUP 12   |";
    cout <<"\n\t\t\t\t\t\t\t\t|                               |";
    cout <<"\n\t\t\t\t\t\t\t\t|           INSTRUCTOR          |";
    cout <<"\n\t\t\t\t\t\t\t\t|       SIR SHAHZAIB TAHIR      |";
    cout <<"\n\t\t\t\t\t\t\t\t|                               |";
    cout <<"\n\t\t\t\t\t\t\t\t|          MEMBERS NAME         |";
    cout <<"\n\t\t\t\t\t\t\t\t|           NAMRA GUL           |";
    cout <<"\n\t\t\t\t\t\t\t\t|          SAMAN ZOHRA          |";
    cout <<"\n\t\t\t\t\t\t\t\t|       MUHAMMAD UMER KHAN      |";
    cout <<"\n\t\t\t\t\t\t\t\t----------------------------------";
    cout <<"\n\n\n\t\t\t\t\t\t\t\t\t";
    cout <<"\t\t\t\t\n\n\n\n";
    cout <<"\t\t\t\t\t\t\t\t";
    system("pause");
}

// Function For Entering Password //
void login()
{
    system("Color E4");
    system("cls");
    char username[30],password[30];
    cout<<endl;
    cout<<"\n\n\t\t\t\t\t\t\t\t---------------------------------";
    cout<<"\n\n\t\t\t\t\t\t\t\t|POLICE REPORT MANAGEMRNT SYSTEM|";
    cout<<"\n\n\t\t\t\t\t\t\t\t---------------------------------";
    cout<<"\n\n\n\n\t\t\t\t\t\t\t\t          LOGIN  PAGE           ";
    for(int i=1;i<=3;i++)
    {
        cout<<"\n\n\t\t\t\t\tUSER NAME: ";
        cin>>username;
        cout<<"\n\t\t\t\t\tPASSWORD: ";
        cin>>password;
        if(strcmp(username,"admin")==0 && strcmp(password,"pass")==0)
        {
            cout<<"\n\n\n\t\t\t\t\t\t\t\t\t*ENTERING THE  MENU PAGE*";
            delay ();
            cout<<"\n\n\n\t\t\t\t\t\t\t\t\t*PRESS ANY  KEY TO PROCEED*";
            break;
        }
        else if(i>=1 && i<=2)
        {
            system("Color F4");
            system("cls");
            cout<<"\n\n\n\n\n\n\n";
            cout<<"\n\n\n\t\t\t\t\t\t\t!!!!INVALID ENTERY TRY AGAIN!!!!";
            if(i==1)
            {
                cout<<"\n\n\n\t\t\t\t\t\t\t\tyou have 2 more entries left";
            }
            else
            {
                cout<<"\n\n\n\t\t\t\t\t\t\t\tThis is your last entry";
            }
            cout<<endl;
        }
        else
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t*ERROR*";
            exit ();
        }
    }
    getch ();
}

// Function for  Checking Fir Report //
void filecheckerfirReport(int&fir)
{
    ifstream file("firReport#"+to_string(fir) + ".txt");
    if(file.fail())
    {
        firReport(fir);

    }
    else
    {
        cout<<"\n\t\t\t\t\tFIR already exists\n";
    }
}


// Function for Add Fir Report //
void firReport(int&fir)
{
    char vinfo[100];
    ofstream ininfo("firReport#"+to_string(fir)+".txt");
    cout<<"\t\t\t\t\t\t\t\t\t\tVictim:";
    ininfo<<"\t\t\t\t\tVictim:";
    cout<<"\n\n\t\t\t\tName : ";
    ininfo<<"\nName : ";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tFather Name:";
    ininfo<<"Father Name:";
    cin>>ws;
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tCNIC (*****-*******-*):";
    ininfo<<"CNIC(*****-*******-*):";
    cin>>ws;
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tDate of birth (xx/xx/xxxx):";
    ininfo<<"Date of birth (xx/xx/xxxx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tAGE:";
    ininfo<<"AGE:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tSEX (M/F):";
    ininfo<<"SEX (M/F):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tNationality:";
    ininfo<<"Nationality:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tPhone number (****-*******):";
    ininfo<<"Phone number (****-*******):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tHOME ADDRESS:";
    ininfo<<"HOME ADDRESSS:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tHOME TELEPHONE NUMBER (****-******):";
    ininfo<<"HOME TELEPHONE NUMBER (****-******):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tCITY:";
    ininfo<<"CITY:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tSTATE:";
    ininfo<<"STATE:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tWORK ADRESSS:";
    ininfo<<"WORK ADRESSS:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tWORK TELEOHONE NUMBER (****-******):";
    ininfo<<"WORK TELEPHONE NUMBER (****-******):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tCITY:";
    ininfo<<"CITY:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tSTATE:";
    ininfo<<"STATE:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tCRIME REPORT TYPE (murder, robbery, cyber crime or others):";
    ininfo<<"CRIME REPORT TYPE (murder, robbery, cyber crime or others):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tDATE REPORTED (xx/xx/xxxx):";
    ininfo<<"DATE REPORTED (xx/xx/xxxx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tTIME (xx:xx):";
    ininfo<<"TIME (xx:xx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tLocation of incient:";
    ininfo<<"Location of incient:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tDate Started (xx/xx/xxxx):";
    ininfo<<"Date Started (xx/xx/xxxx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tTime (xx:xx):";
    ininfo<<"Time (xx:xx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tLocation of suspect(if known):";
    ininfo<<"Location of suspect(if known):";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tDate of Last activity (xx/xx/xxxx):";
    ininfo<<"Date of Last activity (xx/xx/xxxx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tTime (xx:xx):";
    ininfo<<"Time (xx:xx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tsuspect:"<<endl;
    ininfo<<"\t\t\t\t\tsuspect:"<<endl;
    cout<<"\n\n\t\t\t\tName:";
    ininfo<<"Name:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tDate of birth (xx/xx/xxxx):";
    ininfo<<"Date of birth (xx/xx/xxxx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tAGE:";
    ininfo<<"AGE:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tSEX (M/F):";
    ininfo<<"SEX (M/F):";
    cin>>vinfo;;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tHEIGHT:";
    ininfo<<"HEIGHT:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tWEIGHT:";
    ininfo<<"WEIGHT:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tHAIR:";
    ininfo<<"HAIR:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tEYES COLOR:";
    ininfo<<"EYES COLOR:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tSUSPECT 2:"<<endl;
    ininfo<<"\t\t\t\t\tsuspect 2:"<<endl;
    cout<<"\n\n\t\t\t\tNAME:";
    ininfo<<"NAME:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tDATE OF BIRTH (xx/xx/xxxx):";
    ininfo<<"DATE OF BIRTH (xx/xx/xxxx):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tAGE:";
    ininfo<<"AGE:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tSEX (M/F):";
    ininfo<<"SEX (M/F):";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tHEIGHT:";
    ininfo<<"HEIGHT:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tWEIGHT:";
    ininfo<<"WEIGHT:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tHAIR:";
    ininfo<<"HAIR:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tEYES COLOR:";
    ininfo<<"EYES COLOR:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\t\t\t\t\t\t\t\t\t\tPolice Officer In Charge: "<<endl;
    ininfo<<"\t\t\t\tPolice Officer In Charge:"<<endl;
    cout<<"\n\n\t\t\t\tName of Officer:";
    ininfo<<"Name of officer:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tID Number:";
    ininfo<<"ID Number:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cin.ignore();
    ininfo<<"Rank:";
    cout<<"\n\n\t\t\t\tRank:";
    cin>>vinfo;
    ininfo<<vinfo<<endl;
    cout<<"\n\n\t\t\t\tPolice Station:";
    ininfo<<"Police Station:";
    cin.ignore();
    cin.getline(vinfo,100);
    ininfo<<vinfo<<endl;
    ininfo.close();
}

//  Function For Menu Page //
void add()
{
    int option;
    system("cls");
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout<<"\n\t\t\t\t\t|POLICE REPORT MANAGEMRNT SYSTEM|";
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout <<"\n\n\t\t\t\t\t1. ADD NEW REPORT ";
    cout <<"\n\n\t\t\t\t\t2. BACK TO MENU   ";
    cout <<"\n\n\t\t\t\t\tChoose Option:[1/2] : " ;
    cin>>option;
    switch (option)
    {
        case 1:
        {
            int fir;
            cout<<"\n\n\t\t\t\t\tEnter the FIR number   :  ";
            cin>>fir;
            filecheckerfirReport(fir);
            cout<<"\n\t\t\t\t\t\t\t\t\tGOING BACK TO MENU PAGE";
            cout<<"\n\t\t\t\t\t\t\t\t";
            system("pause");
            menu();
        }
        case 2:
        {
            menu();
        }
    }
}

// Function For Checking Fir Report for Updating //
void filecheckerFirReportupdate(int&fir)
{
    ifstream file("firReport#"+to_string(fir) + ".txt");
    if(file.fail())
    {
        cout<<"\n\t\t\t\t\tFir don't exists\n";
    }
    else
    {
        firReport(fir);
    }
}

//  Function For Update Report //
void update()
{
    int option;
    system("cls");
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout<<"\n\t\t\t\t\t|POLICE REPORT MANAGEMRNT SYSTEM|";
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout <<"\n\n\t\t\t\t\t1. UPDATE REPORT  ";
    cout <<"\n\n\t\t\t\t\t2. BACK TO MENU   ";
    cout <<"\n\n\t\t\t\t\tChoose Option:[1/2] : " ;
    cin>>option;
    switch (option)
    {
        case 1:
        {
            int fir;
            cout<<"\n\n\t\t\t\t\tEnter the FIR number : ";
            cin>>fir;
            filecheckerFirReportupdate(fir);
            cout<<"\n\t\t\t\t\tGOING BACK TO MENU PAGE";
            cout<<"\n\t\t\t\t\t";
            system("pause");
            menu();
        }
        case 2:
        {
            menu();
        }
    }
}

// Function for Checking Fir for Displaying //
void filecheckerfirReportdisplay(int&fir)
{
    ifstream file("firReport#"+to_string(fir) + ".txt");
    if(file.fail())
    {
        cout<<"\n\t\t\t\t\tFIR don't exists\n";
    }
    else
    {
        firReportdisplay(fir);
    }
}
//  Function For Display Report //
void firReportdisplay(int&fir)
{

    string getcontent;
    ifstream ininfo("firReport#"+to_string(fir)+".txt");
    if(ininfo.is_open())
    {
        while(!ininfo.eof())
        {
            getline(ininfo,getcontent);
            cout<<"\n\n\t\t\t\t";
            cout<<getcontent<<endl;
        }
        ininfo.close();
    }
}
void display()
{
    int option;
    system("cls");
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout<<"\n\t\t\t\t\t|POLICE REPORT MANAGEMRNT SYSTEM|";
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout <<"\n\n\t\t\t\t\t1. DISPLAY REPORT ";
    cout <<"\n\n\t\t\t\t\t2. BACK TO MENU   ";
    cout <<"\n\n\t\t\t\t\tChoose Option:[1/2] : " ;
    cin>>option;
    switch (option)
    {
        case 1:
        {
            int fir;
            cout<<"\n\n\t\t\t\t\tEnter the FIR number : ";
            cin>>fir;
            filecheckerfirReportdisplay(fir);
            cout<<"\n\t\t\t\t\tGOING BACK TO MENU PAGE";
            cout<<"\n\t\t\t\t\t";
            system("pause");
            menu();
        }
        case 2:
        {
            menu();
        }
    }
}

// Function For Delete Report //
void removefir()
{
    system("cls");
    cout<<"\n\t\t\t\t\t---------------------------------";
    cout<<"\n\t\t\t\t\t|POLICE REPORT MANAGEMRNT SYSTEM|";
    cout<<"\n\t\t\t\t\t---------------------------------";
    int status;
    char fileName[20];
    cout<<"\n\n\n\t\t\t\t\tEnter the Name of File: ";
    cin>>fileName;
    status = remove(fileName);
    if(status==0)
    {
        cout<<"\n\n\t\t\t\t\tFir Deleted Successfully!";
        cout<<"\n\n\t\t\t\t\t";
        system("pause");
        menu();
    }
    else
    {
        cout<<"\n\n\t\t\t\t\tFIR doesnot exist!";
        cout<<"\n\n\t\t\t\t\t";
        system("pause");
        menu();
    }
}

// Function For Menu Page //
void menu()
{
    system("Color 8F");
    system("cls");
    cout <<"\n\t\t\t\t\t---------------------------------";
    cout <<"\n\t\t\t\t\t|POLICE REPORT MANAGEMENT SYSTEM|";
    cout <<"\n\t\t\t\t\t---------------------------------";
    int option;
    cout <<"\n\n\t\t\t\t\t1. ADD NEW REPORT ";
    cout <<"\n\n\t\t\t\t\t2. UPDATE REPORT  ";
    cout <<"\n\n\t\t\t\t\t3. DISPLAY REPORT ";
    cout <<"\n\n\t\t\t\t\t4. DELETE REPORT  ";
    cout <<"\n\n\t\t\t\t\t5. EXIT           ";
    cout <<"\n\n\t\t\t\t\tChoose Option:[1/2/3/4/5] : " ;
    cin >> option;
    switch (option)
    {
        case 1:
        {
            add ();
            break;
        }
        case 2:
        {
            update();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            removefir();
            break;
        }
        case 5:
        {
            exit();
            break;
        }
        default:
        {
            system("cls");
            cout<<"\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t        INVALID";
            cout<<"\n\t\t\t\t\tGOING BACK TO MENU PAGE";
            cout<<"\n\t\t\t\t\t";
            system("pause");
            menu ();
        }
    }
}

// Main Function //
int main ()
{
    system("Color E4");
    mainpage();
    login ();
    menu ();
    return 0;
}
