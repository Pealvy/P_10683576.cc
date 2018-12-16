#include <iostream>
#include <fstream>
#include <conio.h>
#include<stdio.h>
//#include <string>
//#include <windows.h>
using namespace std;

//first define your strutures for students, staff and subjects
struct subject{
    string course_code;
    string course_name;    
}subjectInfo;   

struct student{
    string studentno;
    string firstname;
    string lastname;    
}studentInfo;   

struct staff{
    string staffno;
    string firstname;
    string lastname;    
}staffInfo;

int main(){
    
    int option, ns, i, r, moption, soption;
    ofstream sfile, temp;
    string line, sid, fname, lname, s_fname, s_lname, holder;
    ifstream myfile;
    
    while(9){
    system("cls");
    cout<<"************************************************************************************"<<endl;
    cout<<"\t\t\tSCHOOL MANAGEMENT SYSTEM\t\t\t"<<endl;
    cout<<"************************************************************************************"<<endl;
    cout<<"MAIN MENU\n";
    cout<<"************\n";
	cout<<"Choose an option: "<<endl;
	cout<<"1 - Student Information "<<endl;
	cout<<"2 - Staff Information "<<endl;
	cout<<"3 - Subject Information "<<endl;
	cout<<"4 - View Information "<<endl;
	cout<<"\nEnter your option ... ";
	cin>>option;   
    
    switch(option){
        //case 1 is for recording student information
         case 1:
             system("cls");
             cout<<"  STUDENT MENU  "<<endl;
             cout<<"****************"<<endl;
             cout<<"Choose an option: "<<endl;
             cout<<"1 - Add Student"<<endl;
             cout<<"2 - Delete Student"<<endl;
             cout<<"\nEnter your option ... ";
             cin>>soption; 
	             
             switch(soption){
                 case 1:
                     sfile.open("studentInfo.txt",ios::app);
                     cout<<"Number Of Students To Record: "<<endl;
                     cin>>ns;
                     for(i=0; i<ns; i++){
                         cout<<"Information Of Student "<<i+1<<endl;
                         cout<<"Student Number ... ";
                         cin>>studentInfo.studentno;
                         sfile<<studentInfo.studentno<<"\t";
                         cout<<"Student Firstname ... ";
                         cin>>studentInfo.firstname;
                         sfile<<studentInfo.firstname<<"\t";
                         cout<<"Student Lastname  ... ";
                         cin>>studentInfo.lastname;
                         sfile<<studentInfo.lastname;
                         sfile<<"\n";
                         cout<<endl;
                     }sfile.close();
                      cout<<"Recorded Successfully!!!"<<endl;
                      cout<<"To return to main menu press 9 and Enter "<<endl;
                      cin>>r;
                      break;
                      
                 case 2:
                     cout << "DEL: Enter Student ID        ... ";
                     cin >> sid;
                     cout << "DEL: Enter Student Firstname ... ";
                     cin >> fname;
                     cout << "DEL: Enter Student Lastname  ...";
                     cin >> lname;
                     holder = sid + "\t" + fname + "\t" + lname;
                     myfile.open("studentInfo.txt");
                     temp.open("temp.txt");
                     while (getline(myfile, line)){
                         if (line != holder)
                             temp << line << endl;    
                         }
                         cout <<fname << " " << lname << " has been deleted!" << endl;
                         myfile.close();
                         temp.close();
                         remove("studentInfo.txt");
                         rename("temp.txt","studentInfo.txt");
                         getch();
                    break;  
                 }
                 
         case 2:
             system("cls");
             cout<<"  STAFF MENU  "<<endl;
             cout<<"****************"<<endl;
             cout<<"Choose an option: "<<endl;
             cout<<"1 - Add Staff"<<endl;
             cout<<"2 - Delete Staff"<<endl;
             cout<<"\nEnter your option ... ";
             cin>>soption; 
             
             switch(soption){
                  case 1:
                      sfile.open("staffInfo.txt",ios::app);
                      cout<<"Number of Teacher(s) To Record: "<<endl;
                      cin>>ns;
                      for(i=0; i<ns; i++){
                          cout<<"Information Of Staff "<<i+1<<endl;
                          cout<<"Staff Number ... ";
                          cin>>staffInfo.staffno;
                          sfile<<staffInfo.staffno<<"\t";
                          cout<<"Student Firstname ... ";
                          cin>>staffInfo.firstname;
                          sfile<<staffInfo.firstname<<"\t";
                          cout<<"Student Lastname  ... ";
                          cin>>staffInfo.lastname;
                          sfile<<staffInfo.lastname;
                          sfile<<"\n";
                          cout<<endl;
                      }sfile.close();
                      cout<<"Recorded Successfully!!!"<<endl;
                      cout<<"To return to main menu press 9 and Enter "<<endl;
                      cin>>r;
                  break;
                  
                  case 2:
                      cout << "DEL: Enter Staff ID        ... ";
                      cin >> sid;
                      cout << "DEL: Enter Staff Firstname ... ";
                      cin >> fname;
                      cout << "DEL: Enter Staff Lastname  ... ";
                      cin >> lname;
                      holder = sid + "\t" + fname + "\t" + lname;
                      myfile.open("staffInfo.txt");
                      temp.open("temp.txt");
                      while (getline(myfile, line)){
                           if (line != holder)
                           temp << line << endl;    
                      }
                      cout <<fname << " " << lname << " has been deleted!" << endl;
                      myfile.close();
                      temp.close();
                      remove("staffInfo.txt");
                      rename("temp.txt","staffInfo.txt");
                      getch();
                      break;
             }
              
         case 3:
             system("cls");
             cout<<"  COURSE MENU  "<<endl;
             cout<<"****************"<<endl;
             cout<<"Choose an option: "<<endl;
             cout<<"1 - Add Subject"<<endl;
             cout<<"2 - Delete Subject"<<endl;
             cout<<"\nEnter your option ... ";
             cin>>soption;
             
             switch(soption){
                 case 1: 
                     sfile.open("subjectInfo.txt",ios::app);
                     cout<<"Number of Subject(s) To Record: "<<endl;
                     cin>>ns;
                     for(i=0; i<ns; i++){
                         cout<<"Information on Subject "<<i+1<<endl;
                         cout<<"Subject Code ... ";
                         cin>>subjectInfo.course_code;
                         sfile<<subjectInfo.course_code<<"\t";
                         cout<<"Subject Name ... ";
                         cin>>subjectInfo.course_name;
                         sfile<<subjectInfo.course_name;
                         sfile<<"\n";
                         cout<<endl;
                     }sfile.close();
                     cout<<"Recorded Successfully!!!"<<endl;
                     cout<<"To return to main menu press 9 and Enter "<<endl;
                     cin>>r;
                     break;
                 
                 case 2:
                     cout << "DEL: Enter Course Code ... ";
                     cin >> sid;
                     cout << "DEL: Enter Course name ... ";
                     cin >> fname;
                     holder = sid + "\t" + fname;
                     myfile.open("subjectInfo.txt");
                     temp.open("temp.txt");
                     while (getline(myfile, line)){
                          if (line != holder)
                          temp << line << endl;    
                     }
                     cout <<fname << " " << lname << " has been deleted!" << endl;
                     myfile.close();
                     temp.close();
                     remove("subjectInfo.txt");
                     rename("temp.txt","subjectInfo.txt");
                     getch();
                     break;
             }
             break;
         case 4:
            system("cls");
            cout<<"  DISPLAY INFORMATION  "<<endl;
            cout<<"***********************"<<endl;
            cout<<"Choose an option: "<<endl;
            cout<<"1 - View Student Information"<<endl;
            cout<<"2 - View Staff Information"<<endl;
            cout<<"3 - View Course Information"<<endl;
            cout<<"\nEnter your option ... ";
            cin>>soption;
            
            switch(soption){
                case 1:
                    myfile.open("studentInfo.txt");
                    while(getline(myfile,line)){
                         cout<<line<<endl; 
                    }
                    cout<<"\nTo return to main menu press 9 and Enter "<<endl;
                    cin>>r;
                    break;
                
                case 2:
                    myfile.open("staffInfo.txt");
                    while(getline(myfile,line)){
                         cout<<line<<endl; 
                    }
                    cout<<"\nTo return to main menu press 9 and Enter "<<endl;
                    cin>>r;
                break;
                
                case 3:
                    myfile.open("subjectInfo.txt");
                    while(getline(myfile,line)){
                         cout<<line<<endl; 
                    }
                    cout<<"\nTo return to main menu press 9 and Enter "<<endl<<endl;
                    cin>>r;
                break;
            }
            
    }
    
}    
    system("pause");
    return 0;
}
