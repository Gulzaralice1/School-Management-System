
#include <iostream>
#include <fstream>
#include<string>
#include <conio.h>
#include <windows.h>
#include <ctime>
using namespace std;

int ID,ID2,ID3,CBSE,BIHAR;
struct Student {
    int id;
    string name,father,roll,clas,year,batch,address,number;
    string gender,mother,dob,religion,distt,pincode,parents_mobile,enrollment_no;
};



void timee()
{

    time_t now =time(0);
    //convert to string
    char* dt = ctime(&now);
    //convert to tmstructure
    tm *gmtm= gmtime(&now);
    dt = asctime(gmtm);
    cout<<dt;
}

//                               DEGINE FUNCTION////----------------------------------------------------------------------------------
void degin()
{
    char x=219;
    for(int i=1;i<=168;i++)
        {
            cout<<x;
        }
}

void degin21()
{
    char x=219;
    for(int i=1;i<=36;i++)
        {
            cout<<x<<" ";
        }
}

void d6()
{
    char x=219;
    for(int i=1;i<=71.5;i++)
    {
        cout<<x;
    }
}

void d182()
{
    char x=219;
    for(int i=1;i<=66;i++)
    {
        cout<<x;
    }
}

void d2()
{
    char x=219;
    cout<<x;
}
void login()
{
    char x=220;
    for(int i=1;i<=75; i++)
    {
        system("color 4");
        cout<<x;
    }
    cout<<"  LOGIN PROCESS  ";
    for(int i=1;i<=75; i++)
    {
        system("color 2");
        cout<<x;
    }
    for(int i=1;i<=168; i++)
    {
        system("color E");
        cout<<x;
    }
    cout<<x;
}

void loading()
{
    char x=219;
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\tLOADING ";
    for(int i=0;i<=20;i++)
    {
        system("color 0B");
        cout<<x;
        if(i<10)
        Sleep(300);
        if((i>=10) && (i<20))
            Sleep(150);
        if(i>=10)
            Sleep(25);
    }
}





void addStudent()
{
    char x=219;
    Student student;
    system("cls");
    degin();degin21();cout<<x;
    cout<<"FILL UP STUDENT DETAILS ";
    degin21();
    cout << "\n\n  NAME        : ";
    cin.get();
    getline(cin, student.name);
    cout << " \n  FATHER      : ";
    cin >> student.father;
    cout << " \n  MOTHER      : ";
    cin >> student.mother;
    cout << "\n  ROLL        : ";
    cin >> student.roll;
    cout << "\n  CLASS       : ";
    cin >> student.clas;
    cout << "\n  GENDER      : ";
    cin >> student.gender;
    if(student.gender=="male" || student.gender=="MALE")
    {
        ID2++;
    }
    else
    {
        ID3++;
    }
    cout << "\n  YEAR        : ";
    cin >> student.year;
    cout << "\n  BATCH       : ";
    cin >> student.batch;
    cout << "\n  NUMBER      : ";
    cin >> student.number;
    cout << "\n  PARENT'S NUMBER    : ";
    cin >> student.parents_mobile;
    cout << "\n  D.O.B       : ";
    cin >> student.dob;
    cout << "\n  RELIGION    : ";
    cin >> student.religion;
    cout << "\n  DISTRICT    : ";
    cin >> student.distt;
    cout << "\n  PIN CODE    : ";
    cin >> student.pincode;
    cout << "\n  ENROLL..NO  : ";
    cin >> student.enrollment_no;
    cout << "\n  ADDRESS     : ";
    cin >> student.address;
    ID++;
    //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     //----------------------------------------------------------------------------------------------------------------------------------------------
     //----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     //--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
     //----------------------------------------------------------------------------------------------------------------------------------------------
     if(student.clas=="11"  &&  student.batch=="CBSE" )
     {
        ofstream write1;
        write1.open("student data\\CLASS 11\\CBSE\\11TH CBSE STUDENT.dat", ios::app);
        write1 << "\n\n\n  ID [" << ID <<"]";
        write1 << "\n  NAME                        :"<< student.name ;
        write1 << "\n  FATHER                    :" << student.father ;
        write1 << "\n  MOTHER                   :" << student.mother ;
        write1 << "\n  ROLL                        :" << student.roll ;
        write1 << "\n  CLASS                      :" << student.clas;
        write1 << "\n  GENDER                   :" << student.gender ;
        write1 << "\n  YEAR                        :" << student.year;
        write1 << "\n  BATCH                      :" << student.batch ;
        write1 << "\n  NUMBER                   :" << student.number <<"   ------------------------------------------------------->"<<student.name;
        write1 << "\n  PARENTS_MOBILE   :" << student.parents_mobile  ;
        write1 << "\n  DOB                         :" << student.dob;
        write1 << "\n  RELIGION                 :" << student.religion  ;
        write1 << "\n  DISTT                       :" << student.distt  ;
        write1 << "\n  PINCODE                  :" << student.pincode  ;
        write1 << "\n  ENROLLMENT_NO   :" << student.enrollment_no ;
        write1 << "\n  ADDRESS                 :" << student.address ;
        write1.close();
        ofstream write;
        write.open("student data\\CLASS 11\\CBSE\\CLASS 11-CBSE-data.txt", ios::app);
        write << "\n" << ID;
        write << "\n" << student.name ;
        write << "\n" << student.father ;
        write << "\n" << student.mother ;
        write << "\n" << student.roll ;
        write << "\n" << student.clas;
        write << "\n" << student.gender ;
        write << "\n" << student.year ;
        write << "\n" << student.batch ;
        write << "\n" << student.number ;
        write << "\n" << student.parents_mobile ;
        write << "\n" << student.dob ;
        write << "\n" << student.religion ;
        write << "\n" << student.distt ;
        write << "\n" << student.pincode ;
        write << "\n" << student.enrollment_no ;
        write << "\n" << student.address ;
        write.close();
     }

     if(student.clas=="11"  && student.batch=="BSEB")
     {
        ofstream write1;
        write1.open("student data\\CLASS 11\\BSEB\\11TH BSEB STUDENT.dat", ios::app);
        write1 << "\n\n\n  ID [" << ID <<"]";
        write1 << "\n  NAME                        :"<< student.name ;
        write1 << "\n  FATHER                    :" << student.father ;
        write1 << "\n  MOTHER                   :" << student.mother ;
        write1 << "\n  ROLL                        :" << student.roll ;
        write1 << "\n  CLASS                      :" << student.clas;
        write1 << "\n  GENDER                   :" << student.gender ;
        write1 << "\n  YEAR                        :" << student.year;
        write1 << "\n  BATCH                      :" << student.batch ;
        write1 << "\n  NUMBER                   :" << student.number <<"   ------------------------------------------------------->"<<student.name;
        write1 << "\n  PARENTS_MOBILE   :" << student.parents_mobile  ;
        write1 << "\n  DOB                         :" << student.dob;
        write1 << "\n  RELIGION                 :" << student.religion  ;
        write1 << "\n  DISTT                       :" << student.distt  ;
        write1 << "\n  PINCODE                  :" << student.pincode  ;
        write1 << "\n  ENROLLMENT_NO   :" << student.enrollment_no ;
        write1 << "\n  ADDRESS                 :" << student.address ;
        write1.close();
        ofstream write;
        write.open("student data\\CLASS 11\\BSEB\\CLASS 11-BSEB-data.txt", ios::app);
        write << "\n" << ID;
        write << "\n" << student.name ;
        write << "\n" << student.father ;
        write << "\n" << student.mother ;
        write << "\n" << student.roll ;
        write << "\n" << student.clas;
        write << "\n" << student.gender ;
        write << "\n" << student.year ;
        write << "\n" << student.batch ;
        write << "\n" << student.number ;
        write << "\n" << student.parents_mobile ;
        write << "\n" << student.dob ;
        write << "\n" << student.religion ;
        write << "\n" << student.distt ;
        write << "\n" << student.pincode ;
        write << "\n" << student.enrollment_no ;
        write << "\n" << student.address ;
        write.close();
     }

//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------------------------------------------------
//----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
//--------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------





    if(student.clas=="12"  && student.batch=="CBSE")
     {
        ofstream write76;
        write76.open("student data\\CLASS 12\\CBSE\\12TH CBSE STUDENT.dat", ios::app);
        write76 << "\n\n\n  ID [" << ID <<"]";
        write76 << "\n  NAME                        :"<< student.name ;
        write76 << "\n  FATHER                    :" << student.father ;
        write76 << "\n  MOTHER                   :" << student.mother ;
        write76 << "\n  ROLL                        :" << student.roll ;
        write76 << "\n  CLASS                      :" << student.clas;
        write76 << "\n  GENDER                   :" << student.gender ;
        write76 << "\n  YEAR                        :" << student.year;
        write76 << "\n  BATCH                      :" << student.batch ;
        write76 << "\n  NUMBER                   :" << student.number <<"   ------------------------------------------------------->"<<student.name;
        write76 << "\n  PARENTS_MOBILE   :" << student.parents_mobile  ;
        write76 << "\n  DOB                         :" << student.dob;
        write76 << "\n  RELIGION                 :" << student.religion  ;
        write76 << "\n  DISTT                       :" << student.distt  ;
        write76 << "\n  PINCODE                  :" << student.pincode  ;
        write76 << "\n  ENROLLMENT_NO   :" << student.enrollment_no ;
        write76 << "\n  ADDRESS                 :" << student.address ;
        write76.close();
        ofstream write;
        write.open("student data\\CLASS 12\\CBSE\\CLASS 12-CBSE-data.txt", ios::app);
        write << "\n" << ID;
        write << "\n" << student.name ;
        write << "\n" << student.father ;
        write << "\n" << student.mother ;
        write << "\n" << student.roll ;
        write << "\n" << student.clas;
        write << "\n" << student.gender ;
        write << "\n" << student.year ;
        write << "\n" << student.batch ;
        write << "\n" << student.number ;
        write << "\n" << student.parents_mobile ;
        write << "\n" << student.dob ;
        write << "\n" << student.religion ;
        write << "\n" << student.distt ;
        write << "\n" << student.pincode ;
        write << "\n" << student.enrollment_no ;
        write << "\n" << student.address ;
        write.close();
     }
     if(student.clas=="12"  && student.batch=="BSEB")
     {
        ofstream write12;
        write12.open("student data\\CLASS 12\\BSEB\\12TH BSEB STUDENT.dat", ios::app);
        write12 << "\n\n\n  ID [" << ID <<"]";
        write12 << "\n  NAME                        :"<< student.name ;
        write12 << "\n  FATHER                    :" << student.father ;
        write12 << "\n  MOTHER                   :" << student.mother ;
        write12 << "\n  ROLL                        :" << student.roll ;
        write12 << "\n  CLASS                      :" << student.clas;
        write12 << "\n  GENDER                   :" << student.gender ;
        write12 << "\n  YEAR                        :" << student.year;
        write12 << "\n  BATCH                      :" << student.batch ;
        write12 << "\n  NUMBER                   :" << student.number <<"   ------------------------------------------------------->"<<student.name;
        write12 << "\n  PARENTS_MOBILE   :" << student.parents_mobile  ;
        write12 << "\n  DOB                         :" << student.dob;
        write12 << "\n  RELIGION                 :" << student.religion  ;
        write12 << "\n  DISTT                       :" << student.distt  ;
        write12 << "\n  PINCODE                  :" << student.pincode  ;
        write12 << "\n  ENROLLMENT_NO   :" << student.enrollment_no ;
        write12 << "\n  ADDRESS                 :" << student.address ;
        write12.close();
        ofstream write;
        write.open("student data\\CLASS 12\\BSEB\\CLASS 12-BSEB-data.txt", ios::app);
        write << "\n" << ID;
        write << "\n" << student.name ;
        write << "\n" << student.father ;
        write << "\n" << student.mother ;
        write << "\n" << student.roll ;
        write << "\n" << student.clas;
        write << "\n" << student.gender ;
        write << "\n" << student.year ;
        write << "\n" << student.batch ;
        write << "\n" << student.number ;
        write << "\n" << student.parents_mobile ;
        write << "\n" << student.dob ;
        write << "\n" << student.religion ;
        write << "\n" << student.distt ;
        write << "\n" << student.pincode ;
        write << "\n" << student.enrollment_no ;
        write << "\n" << student.address ;
        write.close();
     }

     //////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
         //-----------------------------12  12  12  12  12  12  12  12
         if (student.clas=="12")
         {
            ofstream write;
            write.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\12-internal-data.txt", ios::app);
            write << "\n" << ID;
            write << "\n" << student.name ;
            write << "\n" << student.father ;
            write << "\n" << student.mother ;
            write << "\n" << student.roll ;
            write << "\n" << student.clas;
            write << "\n" << student.gender ;
            write << "\n" << student.year ;
            write << "\n" << student.batch ;
            write << "\n" << student.number ;
            write << "\n" << student.parents_mobile ;
            write << "\n" << student.dob ;
            write << "\n" << student.religion ;
            write << "\n" << student.distt ;
            write << "\n" << student.pincode ;
            write << "\n" << student.enrollment_no ;
            write << "\n" << student.address ;
            write.close();


            ofstream write1;
            write1.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\12th-ALL-STUDENT.dat", ios::app);
            write1 << "\n\n\n  ID [" << ID <<"]";
            write1 << "\n  NAME                        :"<< student.name ;
            write1 << "\n  FATHER                    :" << student.father ;
            write1 << "\n  MOTHER                   :" << student.mother ;
            write1 << "\n  ROLL                        :" << student.roll ;
            write1 << "\n  CLASS                      :" << student.clas;
            write1 << "\n  GENDER                   :" << student.gender ;
            write1 << "\n  YEAR                        :" << student.year;
            write1 << "\n  BATCH                      :" << student.batch ;
            write1 << "\n  NUMBER                   :" << student.number <<"   ------------------------------------------------------->"<<student.name;
            write1 << "\n  PARENTS_MOBILE   :" << student.parents_mobile  ;
            write1 << "\n  DOB                         :" << student.dob;
            write1 << "\n  RELIGION                 :" << student.religion  ;
            write1 << "\n  DISTT                       :" << student.distt  ;
            write1 << "\n  PINCODE                  :" << student.pincode  ;
            write1 << "\n  ENROLLMENT_NO   :" << student.enrollment_no ;
            write1 << "\n  ADDRESS                 :" << student.address ;
            write1.close();
         }



        if(student.clas=="11")
        {
            ofstream write2;
            write2.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\11-internal-data.dat", ios::app);
            write2 << "\n\n\n  ID [" << ID <<"]";
            write2 << "\n  NAME                        :"<< student.name ;
            write2 << "\n  FATHER                    :" << student.father ;
            write2 << "\n  MOTHER                   :" << student.mother ;
            write2 << "\n  ROLL                        :" << student.roll ;
            write2 << "\n  CLASS                      :" << student.clas;
            write2 << "\n  GENDER                   :" << student.gender ;
            write2 << "\n  YEAR                        :" << student.year;
            write2 << "\n  BATCH                      :" << student.batch ;
            write2 << "\n  NUMBER                   :" << student.number <<"------------------------------------------------------->"<<student.name;
            write2 << "\n  PARENTS_MOBILE   :" << student.parents_mobile  ;
            write2 << "\n  DOB                         :" << student.dob;
            write2 << "\n  RELIGION                 :" << student.religion  ;
            write2 << "\n  DISTT                       :" << student.distt  ;
            write2 << "\n  PINCODE                  :" << student.pincode  ;
            write2 << "\n  ENROLLMENT_NO   :" << student.enrollment_no ;
            write2 << "\n  ADDRESS                 :" << student.address ;
            write2.close();

            ofstream write;
            write.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\11-internal-data.txt", ios::app);
            write << "\n" << ID;
            write << "\n" << student.name ;
            write << "\n" << student.father ;
            write << "\n" << student.mother ;
            write << "\n" << student.roll ;
            write << "\n" << student.clas;
            write << "\n" << student.gender ;
            write << "\n" << student.year ;
            write << "\n" << student.batch ;
            write << "\n" << student.number ;
            write << "\n" << student.parents_mobile ;
            write << "\n" << student.dob ;
            write << "\n" << student.religion ;
            write << "\n" << student.distt ;
            write << "\n" << student.pincode ;
            write << "\n" << student.enrollment_no ;
            write << "\n" << student.address ;
            write.close();
        }
    cout<<"\n\n  I declare that above particular of my son/daughter are correct if any error gets it is my responsibility.\n  My son/daughter will maintain his/her responsibility according to the coaching rule regulations.\n";
    Sleep(600);
    cout << "\n  SUCCESSFULLY SUBMITTED\n";
    cout<<"  BY";
        cout<<" M";
        Sleep(200);
        cout<<"K";
        Sleep(200);
        cout<<"  M";
        Sleep(200);
        cout<<"E";
        Sleep(200);
        cout<<"E";
        Sleep(200);
        cout<<"R";
        Sleep(200);
        cout<<"A";
        Sleep(200);

        cout<<"\n\n  PRESS ENTER FOR BACK ";
        getch();
}




void print(Student s)
{
    cout << "\n---------------------------------------------\n";
    cout << "\n  ID               \t\t" << s.id;//<<"\n";
    cout << "\n  NAME            \t\t" << s.name;//<<"\n";
    cout << "\n  FATHER          \t\t" << s.father;//<<"\n";
    cout << "\n  MOTHER          \t\t" << s.mother;//<<"\n";
    cout << "\n  ROLL            \t\t" << s.roll;//<<"\n";
    cout << "\n  CLASS           \t\t" << s.clas;//<<"\n";
    cout << "\n  GENDER            \t\t" << s.gender;//<<"\n";
    cout << "\n  YEAR            \t\t" << s.year;//<<"\n";
    cout << "\n  BATCH           \t\t" << s.batch;//<<"\n";
    cout << "\n  NUMBER          \t\t" << s.number;//<<"\n";
    cout << "\n  PARENTS_MOBILE  \t\t" << s.parents_mobile ;//<<"\n";
    cout << "\n  DOB             \t\t" << s.dob;//<<"\n";
    cout << "\n  RELIGION        \t\t" << s.religion ;//<<"\n";
    cout << "\n  DISTRICT        \t\t" << s.distt;//<<"\n";
    cout << "\n  PINCODE         \t\t" << s.pincode ;//<<"\n";
    cout << "\n  ENROLLMENT_NO   \t\t" << s.enrollment_no;//<<"\n";
    cout << "\n  ADDRESS           \t\t" << s.address;//<<"\n";
    cout<<"\n\n";

}



void clas12()//void student_info()
{
    //::::::::::::::::::::::::::::::::::::::::STUDENT INFORMATION LIST:::::::::::::::::::::::::::::::
    system("color 6");
    degin();degin21();
    int choice;
    cout<<"STUDENT INFORMATION LIST ";
    degin21();
    Student student;
    ifstream read;
    read.open("12-internal-data.txt");
    while (!read.eof())
    {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        print(student);
    }
    read.close();
    cout<<"\n\n  PRESS ENTER FOR BACK";
    //getch();
}




void clas11_CBSE()//void student_info()
{
    //::::::::::::::::::::::::::::::::::::::::STUDENT INFORMATION LIST:::::::::::::::::::::::::::::::
    system("color 6");
    degin();degin21();
    int choice;
    cout<<"STUDENT INFORMATION LIST ";
    degin21();
    Student student;
    ifstream read;
    read.open("student data\\CLASS 11\\CBSE\\CLASS 11-CBSE-data.txt");
    while (!read.eof())
    {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        print(student);
    }
    read.close();
    cout<<"\n\n  PRESS ENTER FOR BACK";
    //getch();
}


void clas11_BSEB()//void student_info()
{
    //::::::::::::::::::::::::::::::::::::::::STUDENT INFORMATION LIST:::::::::::::::::::::::::::::::
    system("color 6");
    degin();degin21();
    int choice;
    cout<<"STUDENT INFORMATION LIST ";
    degin21();
    Student student;
    ifstream read;
    read.open("student data\\CLASS 11\\BSEB\\CLASS 11-BSEB-data.txt");
    while (!read.eof())
    {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        print(student);
    }
    read.close();
    cout<<"\n\n  PRESS ENTER FOR BACK";
    //getch();
}




void clas12_CBSE()//void student_info()
{
    //::::::::::::::::::::::::::::::::::::::::STUDENT INFORMATION LIST:::::::::::::::::::::::::::::::
    system("color 6");
    degin();degin21();
    int choice;
    cout<<"STUDENT INFORMATION LIST ";
    degin21();
    Student student;
    ifstream read;
    read.open("student data\\CLASS 12\\CBSE\\CLASS 12-CBSE-data.txt");
    while (!read.eof())
    {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        print(student);
    }
    read.close();
    cout<<"\n\n  PRESS ENTER FOR BACK";
    //getch();
}


void clas12_BSEB()//void student_info()
{
    //::::::::::::::::::::::::::::::::::::::::STUDENT INFORMATION LIST:::::::::::::::::::::::::::::::
    system("color 6");
    degin();degin21();
    int choice;
    cout<<"STUDENT INFORMATION LIST ";
    degin21();
    Student student;
    ifstream read;
    read.open("student data\\CLASS 12\\BSEB\\CLASS 12-BSEB-data.txt");
    while (!read.eof())
    {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        print(student);
    }
    read.close();
    cout<<"\n\n  PRESS ENTER FOR BACK";
    //getch();
}

void student_info()
{
    system("CLS");
    system("color 6");
    //int choice;
    string stdd,board;
    do
    {
        char x=214;
        char y=219;
        system("CLS");
        degin();degin21();
        cout<<"STUDENT INFORMATION LIST";
        degin21();
        degin();
        cout<<y<<"  FOR BACK    [ CLASS=0    BOARD=0 ]                                                                                                                                  "<<y<<"\n";
        cout<<y<<"              [ CBSE=9     BSEB=99 ]                                                                                                                                  "<<y<<"\n";

        for(int i=1;i<=168;i++)
        {
            cout<<x;
        }
        cout<<"\n\n  CLASS  11-12:  ";
        cin>>stdd;
        cout<<"  BOARD  9-99:   ";
        cin>>board;

       if(stdd=="11" && board=="9")  //9 CBSE
        {
            cout<<"\n  WELCOME TO CLASS 11TH CBSE\n";
            cout<<"  PRESS ENTER FOR STUDENT INFORMATION...";getch();
            system("cls");
            //degin();degin21();
            clas11_CBSE();
        }
        else if(stdd=="11" && board=="99")
        {
            cout<<"\n  WELCOME TO CLASS 11TH BSEB\n";
            cout<<"  PRESS ENTER FOR STUDENT INFORMATION...";getch();
            system("cls");
            clas11_BSEB();
        }
       else if(stdd=="12" && board=="9")  //9 CBSE
        {
            cout<<"\n  WELCOME TO CLASS 12TH CBSE\n";
            cout<<"  PRESS ENTER FOR STUDENT INFORMATION...";getch();
            system("cls");
            clas12_CBSE();

        }
        else if(stdd=="12" && board=="99")
        {
            cout<<"\n  WELCOME TO CLASS 12TH BSEB\n";
            cout<<"  PRESS ENTER FOR STUDENT INFORMATION...";getch();
            system("cls");
            clas12_BSEB();

        }
        else
        {
            cout<<"\n  INVALID !";
        }
        getch();

    }while(board!="0");
}

void search_by_id() {

    id:
    Student student;
    int choice;
    string nam;
    string c;
    system("cls");
    system("color B");
    degin();
    cout << "\n\n  CLASS WANT TO SEARCH :";
    cin>>c;
    cout << "  STUDENT NAME WANT TO SEARCH : ";
    cin>>nam;
    //getline(cin, student.name);

    if(c=="11")
    {
    ifstream read;
    read.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\11-internal-data.txt");
    while (!read.eof()) {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        if (student.name == nam)
        {
            print(student);

        }
    }
    }
    if(c=="12")
    {
    ifstream read;
    read.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\12-internal-data.txt");
    while (!read.eof()) {
        read >> student.id;
        read.ignore();
        getline(read, student.name);
        read >> student.father;
        read >> student.mother;
        read >> student.roll;
        read >> student.clas;
        read >> student.gender;
        read >> student.year;
        read >> student.batch;
        read >> student.number;
        read >> student.parents_mobile;
        read >> student.dob;
        read >> student.religion ;
        read >> student.distt ;
        read >> student.pincode;
        read >> student.enrollment_no;
        read >> student.address;
        if (student.name == nam)
        {
            print(student);

        }
    }
    }


    cout<<"\n\n\n  1: SEARCH AGAIN\n  0: BACK <--\n  ......";
    cin>>choice;
    if(choice==1)
    {
        goto id;
    }
}

void enrollment_no() {

    enroll:
    int choice;
    string enrollment,c;
    system("cls");
    system("color 7");
    degin();
    cout << "\n\n  CLASS WANT TO SEARCH :";
    cin>>c;
    cout << "  STUDENT ENROLLMENT ID WANT TO SEARCH : ";
    cin >> enrollment;
    Student student;
    //ifstream read;
    if(c=="11")
    {
        ifstream read;
        read.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\11-internal-data.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.name);
            read >> student.father;
            read >> student.mother;
            read >> student.roll;
            read >> student.clas;
            read >> student.gender;
            read >> student.year;
            read >> student.batch;
            read >> student.number;
            read >> student.parents_mobile;
            read >> student.dob;
            read >> student.religion ;
            read >> student.distt ;
            read >> student.pincode;
            read >> student.enrollment_no;
            read >> student.address;
        if (student.enrollment_no == enrollment)
        {
            print(student);

        }
    }
    }
    if(c=="12")
    {
        ifstream read;
        read.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\12-internal-data.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.name);
            read >> student.father;
            read >> student.mother;
            read >> student.roll;
            read >> student.clas;
            read >> student.gender;
            read >> student.year;
            read >> student.batch;
            read >> student.number;
            read >> student.parents_mobile;
            read >> student.dob;
            read >> student.religion ;
            read >> student.distt ;
            read >> student.pincode;
            read >> student.enrollment_no;
            read >> student.address;
        if (student.enrollment_no == enrollment)
        {
            print(student);

        }
    }
    }

    cout<<"\n\n\n  1: SEARCH AGAIN\n  0: BACK <--\n  ......";
    cin>>choice;
    if(choice==1)
    {
        goto enroll;
    }
    //getch();
}


void search_by_number() {

    no:
    string no;
    int choice;
    string c;
    system("cls");
    system("color B");
    degin();
    cout << "\n\n  CLASS WANT TO SEARCH :";
    cin>>c;
    cout << "  ENTER STUDENT NUMBER WANT TO SEARCH : ";
    cin >> no;
    Student student;
    if(c=="11")
    {
        ifstream read;
        read.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\11-internal-data.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.name);
            read >> student.father;
            read >> student.mother;
            read >> student.roll;
            read >> student.clas;
            read >> student.gender;
            read >> student.year;
            read >> student.batch;
            read >> student.number;
            read >> student.parents_mobile;
            read >> student.dob;
            read >> student.religion ;
            read >> student.distt ;
            read >> student.pincode;
            read >> student.enrollment_no;
            read >> student.address;
        if (student.number == no)
        {
            print(student);

        }
    }
    }
    if(c=="12")
    {
        ifstream read;
        read.open("student data\\can't open\\lock\\internal data.xyz\\MK MEERA\\data\\student.data\\12-internal-data.txt");
        while (!read.eof()) {
            read >> student.id;
            read.ignore();
            getline(read, student.name);
            read >> student.father;
            read >> student.mother;
            read >> student.roll;
            read >> student.clas;
            read >> student.gender;
            read >> student.year;
            read >> student.batch;
            read >> student.number;
            read >> student.parents_mobile;
            read >> student.dob;
            read >> student.religion ;
            read >> student.distt ;
            read >> student.pincode;
            read >> student.enrollment_no;
            read >> student.address;
        if (student.number == no)
        {
            print(student);

        }
    }
    }
    cout<<"\n\n\n  1: SEARCH AGAIN\n  0: BACK <--\n  ......";
    cin>>choice;
    if(choice==1)
    {
        goto no;
    }
}
void search_student()
{
    int choice;
    system("cls");
    do
    {
        system("cls");
        degin();
        cout<<"||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||||\n";
        degin();
        cout<<"                                                                            FIND STUDENT INFORMATION ! ";
        cout<<"\n\n";
        cout<<"  1. SEARCH BY NAME\n\n";
        cout<<"  2. SEARCH BY ENROLLMENT ID\n\n";
        cout<<"  3. SEARCH BY NUMBER\n\n";
        cout<<"  0. EXIT\n\n";
        cout<<"  ENTER YOUR CHOICE ): ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            system("cls");
            search_by_id();
            break;
        case 2:
            system("cls");
            enrollment_no();
            break;
        case 3:
            system("cls");
            search_by_number();
            break;
        case 0:
            cout<<"  PRESS ENTER FOR BACK";
            break;
        default:
            system("CLS");
            system("color C");
            cout<<"\n  INVALID !";
            getch();
            break;
        }

    }while(choice !=0);

}
void no_internet()
{
    system("color 4");
    char x=219;
    cout<<"\n\n\n\n\n\n";
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x;
    cout<<"\n";
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"\t   "<<x<<x<<"   "<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"   "<<x<<"     "<<x<<x<<"    "<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"   "<<x<<"     "<<x<<x<<"     "<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"\t   "<<x<<x<<"      "<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"\t   "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"\t          "<<x<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"   "<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"   "<<x<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"  "<<x<<"          "<<x<<"  "<<x<<x<<"\n";(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<"\t          "<<x<<x<<"\n";(100);(100);
    cout<<"\t\t\t\t\t\t\t\t\t"<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<x<<"\n";
    cout<<"\n\t\t\t\t\t\t\t\t    726 Service Unavailable Error:\n\n";
    cout<<"\n\n\n\t\t\t\t\t\t\t\t\tPRESS ENTER FOR BACK";
    //getch();
}

void update_student()
{
    cout<<"\n-------------------------------------------------------------------------    M K  M E E R A    -------------------------------------------------------------------------";
    cout<<"\n  ----------------------------------------------------------------------    UPDATE STUDENT    -----------------------------------------------------------------------\n\n";
    no_internet();

}


void delete_student()
{
    cout<<"\n-------------------------------------------------------------------------    M K  M E E R A    -------------------------------------------------------------------------";
    cout<<"\n  ---------------------------------------------------------------------    DELETE INFORMATION    ----------------------------------------------------------------------\n\n";
    no_internet();
}



void about()
{
    system("color 1F");
    ifstream rea;
    rea.open("id.txt");
    rea >> ID;
    rea >>ID2;
    rea >>ID3;
    rea.close();

    char x=219;
    degin();Sleep(500);
    cout<<x<<x<<"                       ";Sleep(200);cout<<"                                   ";Sleep(200);cout<<"  THIS";Sleep(200);cout<<" SOFTWARE";Sleep(200);cout<<" IS";Sleep(200);cout<<" DEDICATED";Sleep(200);cout<<" TO";Sleep(200);cout<<" M";Sleep(200);cout<<".";Sleep(200);cout<<"K";Sleep(200);cout<<" MEERA";Sleep(200);cout<<"                                                                 "<<x<<x;cout<<"";
    degin();
    cout<<x<<x<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  This Software Created by Gulzar Alice.\n";Sleep(200);
    cout<<x<<x<<"  Author   :: GULZAR ALICE\n";Sleep(200);
    cout<<x<<x<<"  Social   :: https://www.instagram.com/gulzar_alice/\n";Sleep(200);
    cout<<x<<x<<"  Version  :: 1.0.0\n";Sleep(200);
    cout<<x<<x<<"  Type     :: Windows Application\n";Sleep(200);
    cout<<x<<x<<"  Date     :: 15-06-23\n";Sleep(200);
    cout<<x<<x<<"  Language :: C++\n";Sleep(200);
    cout<<x<<x<<"\n";
    cout<<x<<x<<x<<x<<x<<"\n";d6();cout<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"   HOW TO USE\n";Sleep(200);
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  1. NEW STUDENT\n";Sleep(200);
    cout<<x<<x<<"  2. STUDENT INFO..\n";Sleep(200);
    cout<<x<<x<<"  3. SEARCH STUDENT\n";Sleep(200);
    cout<<x<<x<<"  4. DELETE STUDENT \n";Sleep(200);
    cout<<x<<x<<"  5. UPDATE STUDENT \n";Sleep(200);
    cout<<x<<x<<"  6. ABOUT\n";Sleep(200);
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  PRESS 1 FOR NEW STUDENT FORM FILL UP !\n";Sleep(200);
    cout<<x<<x<<"  NAME    :   \n";Sleep(200);
    cout<<x<<x<<"  FATHER  :   \n";Sleep(200);
    cout<<x<<x<<"  ROLL    :   12\n";Sleep(200);
    cout<<x<<x<<"  CLASS   :   12th\n";Sleep(200);
    cout<<x<<x<<"  YEAR    :   2023\n";Sleep(200);
    cout<<x<<x<<"  BATCH   :   CBSE\n";Sleep(200);
    cout<<x<<x<<"  NUMBER  :   \n";Sleep(200);
    cout<<x<<x<<"  GENDER  :   MALE\n";Sleep(200);
    cout<<x<<x<<"  ADDRESS :   \n";Sleep(200);
    cout<<x<<x<<"\n";
    cout<<x<<x<<x<<x<<x;d6();cout<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  WARNING\n";Sleep(200);
    cout<<x<<x<<"\n";    cout<<x<<x<<"  do not use SPACE ( BETWEEN TWO WORDS )\n";Sleep(200);
    cout<<x<<x<<"  in the place of (space) you will use ( -  _  .  /  :  '  ,  =  *  !)\n";
    cout<<x<<x<<"  you will use anythink but not use space between two word\n";Sleep(200);
    cout<<x<<x<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<x<<x<<x;d6();cout<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  SPECIAL THANKS TO \n";Sleep(200);
    cout<<x<<x<<"           @gulzar_alice\n";Sleep(200);
    cout<<x<<x<<"\n";
    cout<<x<<x<<x<<x<<x;d6();cout<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  ABOUT ME !\n";
    cout<<x<<x<<"  NAME       GULZAR ALICE\n";
    cout<<x<<x<<"  CLASS      12TH\n";
    cout<<x<<x<<"  AGE        18\n";
    cout<<x<<x<<"  INSTAGRAM  @gulzar_alice\n";
    cout<<x<<x<<"  TWITTER    @gulzaralice\n";
    cout<<x<<x<<"  CONTACT    @gmail.com\n";
    cout<<x<<x<<"  PHONE NO   \n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  \n";
    cout<<x<<x<<"  ";timee();
    cout<<x<<x<<"\n";
    cout<<x<<x<<"\n";
    cout<<x<<x<<"  [PRESS ENTER FOR BACK]";
    //getch();
}

int main()
{
    ifstream read;
    read.open("id.txt");
    if (!read.fail())
    {
        read >> ID;
         read >> ID2;   //boy
          read >> ID3;   //girl
        read >> CBSE;
        read >> BIHAR;
    }
    else
    {
        ID = 0;
        ID2 = 0;
        ID3 = 0;
        CBSE = 0;
        BIHAR = 0;
    }
    read.close();


    string admin,password;
    loading();
    //admin_password:
    system("CLS");
    login();
    admin_password:
    system("CLS");
    system("color 2");
    cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\tUSER ID: ";
    cin>>admin;
    cout<<"\t\t\t\t\t\t\t\t\t\tPASSWORD: ";
    cin>>password;
    if(admin=="MK" && password=="123")
    {
        system("cls");
        int choice;
        system("color B");
        main:  //repeat the function main menu------------------------------------------------------------------
        system("CLS");
        degin();
        d6();cout<<"M.K. MEERA PHYSICS CLASSES";d6();
        d182();cout<<"11th & 12th , JEE (Mains+Adv.), NEET";d6();
        d6();d182();timee();
        degin();
        //menu--------------------------------------------------------------------------------------------------
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  1.\tNEW STUDENT\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  2.\tSTUDENT INFO.. \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  3.\tSEARCH STUDENT    \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  4.\tDELETE STUDENT \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"   \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  5.\tUPDATE STUDENT \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  9.\tABOUT      \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"  0.\tEXIT       \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        d2();d2();cout<<"    \t           \t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t\t      ";d2();d2();
        degin();
        cout<<"\n\n      ENTER YOUR CHOICE:) ";
        cin>>choice;
        switch(choice)
        {
        case 1:
            system("cls");
            system("color D");
            addStudent();
            goto main;
            break;
        case 2:
            system("cls");
            student_info();
            goto main;
            break;
        case 3:
            system("cls");
            search_student();

            getch();
            goto main;
            break;
        case 4:
            system("cls");
            delete_student();
            getch();
            goto main;
            break;
        case 5:
            system("cls");
            update_student();
            getch();
            goto main;
            break;
        case 9:
            system("cls");
            about();
            getch();
            goto main;
            break;
        case 0:
            system("cls");
            exit(0);
            break;
        default:
            system("cls");
            system("color C");
            cout<<"\n  INVALID !";
            getch();
            goto main;
            break;
        }

    }
    else
    {
        system("cls");
        system("color C");
        cout<<"\n\n\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t\t\t  INVALID!";
        getch();
        goto admin_password;
    }









}//main function
