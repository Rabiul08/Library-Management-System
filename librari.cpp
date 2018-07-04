#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include<stdio.h>
using namespace std;
class Registration
{
    char Tname[15], Sname[15],Tdep[20],Sdep[20],session[10],post[20],year[10],id[10],st_bk_no[10],t_bk_no[10];
    int s_token,t_token;

public:
    int student_in()
    {
        system("cls");

        cout<<"\n\n\t\tEnter student ID : ";
        cin>>id;



        cout<<"\n\n\t\tEnter student name: ";
        cin.ignore();
        gets(Sname);
        cout<<"\n\n\t\tDepartment: ";

        gets(Sdep);

        cout<<"\n\n\t\tSession : ";

        gets(session);

        cout<<"\n\n\t\tyear : ";

        gets(year);
        s_token=0;
        st_bk_no[0]='\0';

        system("cls");
    }
    void Modify_student()
    {
       again:
        cout<<"\n\n\t\tEnter modify details\n"<<endl;
        cout<<"\n\n\n\t\tWhat do you want to modify\n\n\n\n\n\t\t press 1 for name modify\n\n\t\t press 2 for Department\n\n\t\t Press 3 for Session \n\n\t\t Press 4 for id \n\n\t\t Press 5 for Year \n\n\t\t Press 6 for All "<<endl;
       char c;
       cout<<"\n\t\t";
       switch(c=getche())
       {
        case '1':
             cin.ignore();
            cout<<"\n\n\n\t\tEnter  student name: ";
            cout<<"\n\t\t";
            gets(Sname);
            break;
        case '2':
            cin.ignore();
            cout<<"\n\n\n\t\tDepartment: \n";
            cout<<"\n\t\t";
            gets(Sdep);
            break;
        case '3':
            cout<<"\n\n\n\t\tSession :\n";
            cout<<"\n\t\t";
            gets(session);
            break;
        case '4':
            cout<<"\n\n\n\t\tEnter id"<<endl;

            cin.ignore();
            cout<<"\n\t\t";
            gets(id);
            break;
        case '5':
            cout<<"\n\n\n\t\tyear :";
            cin.ignore();
            cout<<"\n\t\t";
            gets(year);
            break;
       case '6':
        {
            cout<<"\n\n\n\t\tEnter id"<<endl;
            cin.ignore();
            cout<<"\n\t\t";
            gets(id);

            cout<<"\n\n\n\t\tEnter  student name: ";
            cout<<"\n\t\t";
            gets(Sname);
            cout<<"\n\n\n\t\tDepartment: \n";
            cout<<"\n\t\t";
            gets(Sdep);


            cout<<"\n\n\n\t\tSession :\n";

            cout<<"\n\t\t";
            gets(session);

            cout<<"\n\n\n\t\tyear :";
            cout<<"\n\t\t";
            gets(year);
            break;
        }

        default :
            system("cls");
            cout<<"\n\n\n\t\tWrong press \n\n\t\t";
            char a[10];
            cout<<"Press any key to enter chose your option again : ";gets(a);
            goto again ;
            break;
       }
    }
   char* ret_id()
   {
       return id;
   }
    char* ret_st_bk_no()
	{
		return st_bk_no;
	}

	int ret_s_token()
	{
		return s_token;
	}

	void add_s_token()
	{
	    s_token=s_token+1;
	}

	void reset_s_token()
	{
	    s_token=s_token-01;
    }

	void get_st_bk_no(char t[])
	{
		strcpy(st_bk_no,t);
	}
    int teacher_in()
    {

        system("cls");
        cin.ignore();
        cout<<"\n\n\tEnter teacher name: ";

        gets(Tname);

        cout<<"\n\n\tDepartment: ";
        gets(Tdep);
          //system("cls");
        cout<<"\n\n\tPost: ";
        gets(post);
        t_token=0;
        t_bk_no[0]='\0';
          //system("cls");

    }
     int student_out()
    {

        cout<<"\n\n\tstudent name: "<<Sname;

        cout<<" \n\n\tDepartment: "<<Sdep;

        cout<<" \n\n\tID :"<<id;

        cout<<"\n\n\tSession :"<<session;

        cout<<" \n\n\tyear :"<<year;
        cout<<"\n\n\tIssue book :"<<s_token;



    }
    void Modify_teacher()
    {
       // cin.ignore();
        cout<<"\n\n\tEnter modify details";

        cout<<"\n\n\tEnter teacher name: ";

        gets(Tname);

        cout<<"\n\n\tDepartment: ";
        gets(Tdep);
          //system("cls");
        cout<<"\n\n\tPost: ";
        gets(post);
    }

    int teacher_out()
    {

        cout<<"\n\n\tTeacher name: "<<Tname;

        cout<<"\n\n\tDepartment: "<<Tdep;

        cout<<"\n\n\tPost: "<<post<<endl;
        cout<<"\n\n\tIssue book :"<<s_token<<endl<<endl;

    }

    char* ret_Tname()
    {
        return Tname;
    }


    char* ret_t_bk_no()
	{
		return t_bk_no;
	}

	int ret_t_token()
	{
		return t_token;
	}

	void add_t_token()
	{
	    t_token=t_token+1;
    }

	void reset_t_token()
	{
	    t_token=t_token-1;
    }

	void get_t_bk_no(char t[])
	{
		strcpy(t_bk_no,t);
	}
    void report1()
    {
        //cout<<setw(10)<<Tname<<setw(20)<<Tdep<<setw(20)<<post<<setw(15)<<t_token<<endl;
        printf("%-25s%-20s%15s%15d\n",Tname,Tdep,post,t_token);
    }
    void report2()
    {
        //cout<<setw(10)<<Sname<<setw(15)<<Sdep<<setw(10)<<id<<setw(15)<<session<<setw(10)<<year<<setw(10)<<s_token<<endl;
        printf("\n%-20s%-10s********%13s%10s%8d\n",Sname,Sdep,session,year,s_token);
    }
};
class Book
{
char Book_name[20],Author[20],Dep[20];
char book_no[10];
public:
    int create_book()
    {
        cout<<"\n\n\tEnter the book no. : ";
        cin>>book_no;

        cout<<"\n\n\tEnter the book name : ";
        cin.ignore();
        gets(Book_name);

        cout<<"\n\n\tEnter the Author name : ";
        gets(Author);

        cout<<"\n\n\tEnter the department of the book : ";

        gets(Dep);



    }
    int show_book()
    {

        cout<<"\n\n\tBook no. : "<<book_no<<endl<<endl;
        cout<<"\tBook name : "<<Book_name<<endl<<endl;
        cout<<"\tAuthor name : "<<Author<<endl<<endl;
        cout<<"\tDepartment : "<<Dep<<endl<<endl;

    }
    void Modify_book()
	{
		cout<<"\n\n\tEnter Modify Book no. : ";
		cin>>book_no;
		cout<<"\n\n\tEnter Modify Book Name : ";
		cin.ignore();
		gets(Book_name);
		cout<<"\n\n\tEnter Modify Author's Name of Book : ";
		gets(Author);
		cout<<"\n\n\tEnter Modify Department name of Book : ";
		gets(Dep);
	}

    char* retbook_no()
    {
        return book_no;
    }

    void report()
	{

	   // cout<<book_no<<"\t\t"<<Book_name<<"\t\t"<<Author<<"\t\t"<<Dep<<endl;
        printf("%-15s%-30s%-27s%-5s\n",book_no,Book_name,Author,Dep);
	}


};
Registration obj_regis;
Book obj_book;
fstream Book_file,student_file,Teachers_file;
/*****************************************
Writing book to the file
******************************************/


void write_book()
{
    char c;
    Book_file.open("Bk.dat",ios::out|ios::app);
    do
    {

    obj_book.create_book();
    Book_file.write((char*)&obj_book,sizeof(Book));
    cout<<"\n\n\tDo you want to more add book press y/n : ";
    cin>>c;
    }while(c=='y');
    Book_file.close();
}

/***********************************************
Modify book
************************************************/
void modify_book()
{
	char n[6];
	int found=0;
	system("cls");
	cout<<"\n\n\n\t\tMODIFY BOOK REOCORD.... ";
	cout<<"\n\n\tEnter The book no. of The book : ";
	cin>>n;
	Book_file.open("Bk.dat",ios::in|ios::out);
	while( Book_file.read((char*)&obj_book,sizeof(Book)))
	{
		if(strcmpi(obj_book.retbook_no(),n)==0)
		{
			obj_book.show_book();
			cout<<"\n\n\tEnter The New Details of book";
			obj_book.Modify_book();
			int pos=-1*sizeof(obj_book);
		    	Book_file.seekp(pos,ios::cur);
		    	Book_file.write((char*)&obj_book,sizeof(Book));
		    	cout<<"\n\n\t Record Updated";
		    	found=1;
		}
	}

    	Book_file.close();
    	if(found==0)
    		cout<<"\n\n\tRecord Not Found ";
        cout<<"\n\n\t";
    	system("pause");
}

int book()
{
    char n;
    system("cls");
    cout<<"\n\n\tPress 1 for create book\n\n\tpress 2 modify book ";
    cout<<"\n\n\t";
    switch(n=getche())
    {
    case '1':
    write_book();
        break;
    case '2':
       modify_book();
       break;
    default:
        cout<<"\n\n\tWrong press ";
        cout<<"\n\n\t";
        system("pause");
        break;
    }

}
    /**************************************************
   Display specific book information
    **************************************************/
void dis_sps_book(char r[])
{
    int flag=0;
  Book_file.open("Bk.dat",ios::in);
   while( Book_file.read((char*)&obj_book,sizeof(Book)))
   {
       if((strcmpi(obj_book.retbook_no(),r))==0)
       {
         obj_book.show_book();
         flag=1;
       }
   }
   Book_file.close();

   if(flag==0)
   {
       cout<<"\n\n\tBook information does not exist"<<endl;
   }
   cout<<"\n\n\t";
   system("pause");
}
    /**************************************************
   Book information
    **************************************************/
void book_informaition()
{
    char ch;
    system("cls");
    cout<<"\n\n\tPress 1 for specific book information \n\n\tPress 2 for all book information  : ";

    switch(ch=getche())
    {
    case '1':
        {
          char b[15];
          cout<<"\n\n\n\tEnter the book no to show details  : ";
          gets(b);

        dis_sps_book(b);

        break;
        }
    case '2':
          {Book_file.open("Bk.dat",ios::in);
          system("cls");
          cout<<"\n\n\t\t\t\tBook LIST\n\n";
          cout<<"================================================================================\n";
          cout<<"Book Number       Book Name"<<"\t\t\t"<<"Author"<<"\t\t    "<<"Department\n";
          cout<<"================================================================================\n";
         while( Book_file.read((char*)&obj_book,sizeof(Book)))
         {
         obj_book.report( );
         }

         Book_file.close();
         cout<<"\n\n\t\t\t";
         system("pause");
          break;
          }
    default:
        cout<<"\n\n\tWrong press ";
        cout<<"\n\n\t\t";
        system("pause");
        break;

    }


}

    /************************************
    student record writing to the file
    *************************************/
    void write_student()
    {
       char d;
      student_file.open("st.dat",ios::out|ios::app);
       do
       {

           obj_regis.student_in();
          student_file.write((char*)&obj_regis,sizeof(Registration));
           cout<<"\n\n\t\tDo you want to more add student registration press y/n : ";
      cin>>d;
       }while(d=='y');
      student_file.close();
    }
    /*********************************************************
        Display all student information
    **********************************************************/
    void read_all_student()
    {
       student_file.open("st.dat",ios::in);
        system("cls");
        cout<<" \n\n                                 Student list                                               ";
        cout<<"\n===============================================================================\n";
	    cout<<"Student name      Department       Id       Session      Year      Issue book"<<endl;
        cout<<"================================================================================";
        int i=1;
        while(student_file.read((char*)&obj_regis,sizeof(Registration)))
        {

            obj_regis.report2();

        }
       student_file.close();
        cout<<endl;
        system("pause");
    }
    /**************************************************
   Display specific student information
    **************************************************/
    void disp_sps_st(char n[])
    {
        int flag=0;
       student_file.open("st.dat",ios::in);
        while(student_file.read((char*)&obj_regis,sizeof(Registration)))
        {
          if((strcmpi(obj_regis.ret_id(),n))==0)
            {obj_regis.student_out();
            flag=1;}
        }
       student_file.close();
        if(flag==0)
            cout<<"\n\n\tStudent does not exist  ";
        cout<<"\n\n\t";
        system("pause");


    }
    /****************************
    teacher information write to the file
    **************************/
    void write_teacher()
    {
       char d;
        Teachers_file.open("tf.dat",ios::out|ios::app);
        do{

        obj_regis.teacher_in();
        Teachers_file.write((char*)&obj_regis,sizeof(obj_regis));
        cout<<"\n\n\tDo you want to more add teacher registration press y/n : ";
        cin>>d;
        }while(d=='y');
        Teachers_file.close();
    }
    /**************************************************
   Display all teacher information
    **************************************************/

    void read_all_teacher()
    {
        Teachers_file.open("tf.dat",ios::in);
        system("cls");
        cout<<"\n\n\t\t\tAll teacher detail \n";
        cout<<"\n===============================================================================\n";
        cout<<"    Teacher name         Department               Post              Issue book  "<<endl;
        cout<<"================================================================================";

        while(Teachers_file.read((char*)&obj_regis,sizeof(Registration)))
        {
            obj_regis.report1();
        }
        Teachers_file.close();
        cout<<"\n\n\t\t\t";
        system("pause");
    }
    /******************************************
    display specific teacher
    *******************************************/
    void disp_sp_t(char t[])
    {
        int flag=0;
        Teachers_file.open("tf.dat",ios::in);
        while(Teachers_file.read((char*)&obj_regis,sizeof(Registration)))
        {
            if((strcmpi(obj_regis.ret_Tname(),t))==0)
            {
                obj_regis.teacher_out();
                flag=1;
            }
        }
        Teachers_file.close();
        if(flag==0)
    {
        cout<<"\n\n\tTeacher does not exist";
    }

            cout<<"\n\n\t";
            system("pause");


    }
    /******************************************
   Modify Student record
    *******************************************/
    void modify_student()
    {
        char r[10];
        system("cls");
        cout<<"\n\n\tEnter student id to modify record\n\n\t";
        cin>>r;
        int found=0;
       student_file.open("st.dat",ios::in|ios::out);
        while(student_file.read((char*)&obj_regis,sizeof(Registration))&&found==0)
        {
            if(strcmpi(obj_regis.ret_id(),r)==0)
            {
                obj_regis.student_out();
                obj_regis.Modify_student();
			    int pos=-1*sizeof(obj_regis);
		    	student_file.seekp(pos,ios::cur);
		    	student_file.write((char*)&obj_regis,sizeof(Registration));
		    	cout<<"\n\n\n\t\t Record Updated";
		    	found=1;

            }

        }
       student_file.close();
        if(found==0)
        {
            cout<<"\n\n\t\tRecord not found";
        }
        cout<<"\n\n\t\t";
        system("pause");
    }
    /*********************************
    modify Teacher record
    *********************************/
    void modify_techer()
    {
        char n[20];
        system("cls");
        cout<<"\n\n\tEnter the teacher name to modify record : ";
        gets(n);
        int found=0;
        Teachers_file.open("tf.dat",ios::in|ios::out);
        while(Teachers_file.read((char*)&obj_regis,sizeof(Registration))&&found==0)
        {
            if(strcmpi(obj_regis.ret_Tname(),n)==0)
            {
                obj_regis.teacher_out();
                obj_regis.Modify_teacher();
                int pos=-1*sizeof(obj_regis);
                Teachers_file.seekp(pos,ios::cur);
                Teachers_file.write((char*)&obj_regis,sizeof(Registration));
                cout<<"\n\n\tRecord Updated ";
                found=1;
            }
        }
        Teachers_file.close();
        if(found==0)
        {
            cout<<"\n\n \t Record not found ";
        }
        cout<<"\n\n\t";
        system("pause");
    }
    int reg()
{
    char n ;
    system("cls");

    cout<<"\n\n\tPress 1 for student registration \n\n\tpress 2 for Teacher registration \n\n\tPress 3 for modify student record \n\n\tPress 4 for modify teacher record \n ";
    cout<<"\n\t";
    switch(n=getche())
    {
    case '1':
       write_student();
       break;
    case '2':
        write_teacher();
        break;
    case '3':
        modify_student();
        break;
    case '4':
        modify_techer();
        break;
    default :
    cout<<"\n\n\t\tWrong press\n\n\t\t";
    system("pause");

    break;
    }


}
    /**************************************************
   Student and teacher information
    **************************************************/
    void stu_and_teac_in()
{
    char e;
    system("cls");
    cout<<"\n\n\tPress 1 for all student information\n\n\tPress 2 for specific student information\n\n\tPress 3 for all teacher information\n\n\tPress 4 for specific teacher information\n";
   cout<<"\n\n\t";
    switch(e=getche())
    {
    case '1':
        read_all_student();
        break;
    case '2':
        {char r[15];
        cout<<"\n\n\tEnter student id to show details  : ";
        gets(r);
        disp_sps_st(r);
        break;}
    case '3':
        read_all_teacher();
        break;
    case '4':
        {
         char t[15];
         cout<<"\n\n\tEnter teacher name  : ";
         gets(t);
         disp_sp_t(t);
         break;
        }
    default :
        cout<<"\n\n\tWrong press ";
        cout<<"\n\n\t";
        system("pause");
        break;

    }
    //system("pause");
}
/***************************************************************
//    	function to delete student  record of file
//****************************************************************/



void delete_student()
{
    char n[10];
    int flag=0;
    system("cls");
    cout<<"\n\n\n\tDELETE STUDENT...";
    cout<<"\n\n\tEnter The admission no. of the Student You Want To Delete : ";
    cin>>n;
   student_file.open("st.dat",ios::in|ios::out);
    fstream fp;
    fp.open("Temp.dat",ios::out);
    while(student_file.read((char*)&obj_regis,sizeof(Registration)))
    {
        if(strcmpi(obj_regis.ret_id(),n)!=0)
            fp.write((char*)&obj_regis,sizeof(Registration));
        else
            flag=1;
    }
    fp.close();
   student_file.close();
    remove("st.dat");
    rename("Temp.dat","st.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted";
    else
        cout<<"\n\n\tRecord not found";
    cout<<"\n\n\t";
    system("pause");
}



/***************************************************************
//    	function to delete  teacher record of file
//****************************************************************/



void delete_teacher()
{
    char r[20];
    int flag=0;
    system("cls");

    cout<<"\n\n\n\tDELETE TEACHER INFORAMTION...";
    cin.ignore();
    cout<<"\n\n\tEnter The name of Teacher You Want To Delete : ";

    gets(r);
    Teachers_file.open("tf.dat",ios::in|ios::out);
    fstream fp;
    fp.open("Temp.dat",ios::out);
    while(Teachers_file.read((char*)&obj_regis,sizeof(Registration)))
    {
        if(strcmpi(obj_regis.ret_Tname(),r)!=0)
            fp.write((char*)&obj_regis,sizeof(Registration));
        else
            flag=1;
    }
    fp.close();
    Teachers_file.close();
    remove("tf.dat");
    rename("Temp.dat","tf.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted";
    else
        cout<<"\n\n\tRecord not found";
    cout<<"\n\n\t";
    system("pause");
}
/***************************************************************
//    	function to delete book record of file
//****************************************************************/



void delete_book()
{
    char n[10];
    int flag=0;
    system("cls");
    cout<<"\n\n\n\tDELETE BOOK...";
    cout<<"\n\n\tEnter The  no. of the Book You Want To Delete : ";
    cin>>n;
    Book_file.open("Bk.dat",ios::in|ios::out);
    fstream fp;
    fp.open("Temp.dat",ios::out);
    while(Book_file.read((char*)&obj_book,sizeof(Book)))
    {
        if(strcmpi(obj_book.retbook_no(),n)!=0)
          fp.write((char*)&obj_book,sizeof(Book));
        else
            flag=1;
    }
    fp.close();
    Book_file.close();
    remove("Bk.dat");
    rename("Temp.dat","Bk.dat");
    if(flag==1)
        cout<<"\n\n\tRecord Deleted";
    else
        cout<<"\n\n\tRecord not found";
    cout<<"\n\n\t";
    system("pause");
}
void change_pass();
void DELETE()
{
    system("cls");
    cout<<"\n\n\n\tPress 1 for Student information delete\n\n\tPress 2 for Teacher information delete\n\n\tPress 3 for book information delete\n\n\tPress 4 for change password";
    char t;
    cout<<"\n\n\t";
    switch(t=getche())
    {
    case '1':
      delete_student();
      break;
    case '2':
        delete_teacher();
        break;
    case '3':
        delete_book();
        break;
    case '4':
        change_pass();
        break;
    default :
        cout<<"\n\n\tWrong press";
        cout<<"\n\n\t";
        system("pause");
        break;
    }

}
/*********************************************************
                 Searching  function
**********************************************************/

void Search()
{
  char ch;
  system("cls");
  cout<<"\n\n\tPress 1 for student search\n\n\tPress 2 for teacher search\n\n\tPress 3 for Book search";
  cout<<"\n\n\t";
  switch(ch=getche())
  {
  case '1':
    {
        system("cls");
        cout<<"\n\n\tEnter the student id to show detail : ";
        char i[10];
        cin>>i;
        int flag=0;
       student_file.open("st.dat",ios::in);
        while(student_file.read((char*)&obj_regis,sizeof(Registration))&&flag==0)
        {
           if(strcmpi(obj_regis.ret_id(),i)==0)
                {
                  obj_regis.student_out();
                  flag=1;
                }
        }
       student_file.close();
        if(flag==0)
            cout<<"\n\n\tRecord not found";
        cout<<"\n\n\t";
        system("pause");
       break;
    }
  case '2':
    {
        char n[20];
        system("cls");
        cout<<"\n\n\tEnter the teacher name to Search : ";
        gets(n);
        int found=0;
        Teachers_file.open("tf.dat",ios::in|ios::out);
        while(Teachers_file.read((char*)&obj_regis,sizeof(Registration))&&found==0)
        {
            if(strcmpi(obj_regis.ret_Tname(),n)==0)
            {
                obj_regis.teacher_out();
                found=1;
            }
        }
        Teachers_file.close();
        if(found==0)
        {
            cout<<"\n\n\tRecord not found ";
        }
        cout<<"\n\n\t";
        system("pause");
        break;
    }
  case '3':
    {
    char n[6];
	int found=0;
	system("cls");
	cout<<"\n\n\tEnter The book no. of The book to Search : ";
	cin>>n;
	Book_file.open("Bk.dat",ios::in|ios::out);
	while( Book_file.read((char*)&obj_book,sizeof(Book))&&found==0)
	{
		if(strcmpi(obj_book.retbook_no(),n)==0)
		{
			obj_book.show_book();
		    	found=1;
		}
	}

    	Book_file.close();
    	if(found==0)
    		cout<<"\n\n\tRecord Not Found ";
        cout<<"\n\n\t";
        system("pause");
    	break;
    }
  default :
    cout<<"\n\n\tWrong press";
    cout<<"\n\n\t";
    system("pause");
    break;
  }
}
/*********************************************************
            Function for issue book
**********************************************************/
void book_issue()
{
    char st_id[10],t_name[15],b_n[10];
    int found=0,flag=0;
    system("cls");
    cout<<"\n\n\n\t\t\t ISSUE BOOK \n";
    cout<<"\n\n\n\t Press 1 for student issue book \n\n\t Press 2 for teacher issue book "<<endl;
    char  d;
    cout<<"\n\n\t";
    switch(d=getche())
    {
    case '1':
        {
            cin.ignore();
            cout<<"\n\n\t Enter the student's id  : ";
            gets(st_id);
           student_file.open("st.dat",ios::in|ios::out);
        while(student_file.read((char*)&obj_regis,sizeof(Registration))&&flag==0)
        {
            if(strcmpi(st_id, obj_regis.ret_id())==0)
            {
                flag=1;
                if(obj_regis.ret_s_token()<5)
                {
                    cout<<"\n\n \t Enter the book number to issue : ";
                    gets(b_n);
                    cout<<endl<<endl;
                    Book_file.open("Bk.dat",ios::in|ios::out);
                    while( Book_file.read((char*)&obj_book,sizeof(Book))&&found==0)
                    {
                        if(strcmpi(obj_book.retbook_no(),b_n)==0)
                        {
                            obj_book.show_book();
                            found=1;
                            obj_regis.add_s_token();
                            obj_regis.get_st_bk_no(obj_book.retbook_no());
                            int pos=-1*sizeof(obj_regis);
                           student_file.seekp(pos,ios::cur);
                           student_file.write((char*)&obj_regis,sizeof(Registration));
                            cout<<"\n\n\t Book issued successfully\n\n\n\tPlease Note: Write current date in backside of book and submit\n\n\twithin 15 days fine Bdt. 1 for each day after 15 days period";
                        }

                    }
                    if(found==0)
                    {
                        cout<<"\n\n\tBook does not exist "<<endl;
                    }
                }
                else
                    cout<<"\n\n\tYour issue book is 5 now you need to return your book for new issue "<<endl;


            }

        }
        if(flag==0)
        {
            cout<<"\n\n\tStudent record not exist"<<endl;
        }
        cout<<"\n\n\t";
        system("pause");
        Book_file.close();
       student_file.close();
        break;
        }
    case '2':
         {
            cout<<"\n\n\t Enter the Teacher name : ";
            gets(t_name);
            Teachers_file.open("tf.dat",ios::in|ios::out);
        while(Teachers_file.read((char*)&obj_regis,sizeof(Registration))&&flag==0)
        {
            if(strcmpi(t_name, obj_regis.ret_Tname())==0)
            {
                flag=1;
                if(obj_regis.ret_t_token()<5)
                {
                    cout<<"\n\n \t Enter the book no to issue : ";
                    gets(b_n);
                    Book_file.open("Bk.dat",ios::in|ios::out);
                    while( Book_file.read((char*)&obj_book,sizeof(Book))&&found==0)
                    {
                        if(strcmp(b_n,obj_book.retbook_no())==0)
                        {
                            obj_book.show_book();
                            found=1;
                            obj_regis.add_t_token();
                            obj_regis.get_t_bk_no(obj_book.retbook_no());
                            int pos=-1*sizeof(obj_regis);
                            Teachers_file.seekp(pos,ios::cur);
                            Teachers_file.write((char*)&obj_regis,sizeof(Registration));
                            cout<<"\n\n\t Book issued successfully\n\n\n\tPlease Note: Write current date in backside of book and submit\n\n\twithin 15 days fine Bdt. 1 for each day after 15 days period";
                        }

                    }
                    if(found==0)
                    {
                        cout<<"\n\n\tBook does not exist "<<endl;
                    }
                }
                else
                    cout<<"\n\n\tYour issue book is 5 now you need to return your book for new issue "<<endl;


            }

        }
        if(flag==0)
        {
            cout<<"\n\n\tTeacher record not exist "<<endl;
        }
        cout<<"\n\n\t";
        system("pause");
        Book_file.close();
        Teachers_file.close();
        break;
        }
    default :
        cout<<"\n\n\tWrong press "<<endl;
        cout<<"\n\n\t";
        system("pause");
        break;

    }

}

/*********************************************************
                 Function for deposit book
**********************************************************/

void book_return()
{
char sn[10],tn[10],n;
int found=0,flag=0,day, fine;
system("cls");
cout<<"\n\n\n\t\t\tBook deposit ";
cout<<"\n\n\tPress 1 for student return book \n\n\tPress 2 for teacher return book : ";
switch(n=getche())
{
case '1':
    {
        cout<<"\n\n\tEnter the Student's id : ";
        gets(sn);
       student_file.open("st.dat",ios::in|ios::out);
        Book_file.open("Bk.dat",ios::in|ios::out);
        while(student_file.read((char*)&obj_regis,sizeof(Registration)) && found==0)
        {
            if(strcmpi(obj_regis.ret_id(),sn)==0)
            {
                found=1;
                if(obj_regis.ret_s_token()>0)
                {
                    while(Book_file.read((char*)&obj_book,sizeof(Book)) && flag==0)
                    {
                        if(strcmpi(obj_book.retbook_no(),obj_regis.ret_st_bk_no())==0)
                        {
                            obj_book.show_book();
                            flag=1;
                            cout<<"\n\n\tBook deposited in no. of days : ";
                            cin>>day;
                            if(day>15)
                            {
                                fine=(day-15)*1;
                                cout<<"\n\n\t Student has to deposited Bdt. "<<fine;
                            }
                            else
                                cout<<"\n\n\tNo fine to pay ";
                            obj_regis.reset_s_token();
                            int pos=-1*sizeof(obj_regis);
                           student_file.seekp(pos,ios::cur);
                           student_file.write((char*)&obj_regis,sizeof(Registration));
                            cout<<"\n\n\tBook returns successfully";
                        }
                        if(flag==0)
                        {
                            cout<<"\n\n\tBook does not exist"<<endl;
                        }
                    }
                }
                else
                {
                    cout<<"\n\n\tNo book is issued..please check!!";
                }
            }
        }
        if(found==0)
            cout<<"\n\n\tStudent record not exist...";
            cout<<"\n\n\t";
            system("pause");
            Book_file.close();
           student_file.close();
        break;
    }
case '2':
    {
        cout<<"\n\n\tEnter the Teacher name : ";
        gets(sn);
        Teachers_file.open("tf.dat",ios::in|ios::out);
        Book_file.open("Bk.dat",ios::in|ios::out);
        while(Teachers_file.read((char*)&obj_regis,sizeof(Registration)) && found==0)
        {
            if(strcmpi(obj_regis.ret_Tname(),sn)==0)
            {
                found=1;
                if(obj_regis.ret_t_token()==1)
                {
                    while(Book_file.read((char*)&obj_book,sizeof(Book)) && flag==0)
                    {
                        if(strcmpi(obj_book.retbook_no(),obj_regis.ret_t_bk_no())==0)
                        {
                            obj_book.show_book();
                            flag=1;
                            cout<<"\n\n\tBook deposited in no. of days : ";
                            cin>>day;
                            if(day>15)
                            {
                                fine=(day-15)*1;
                                cout<<"\n\n\tTeacher has to deposited Bdt. "<<fine;
                            }
                            else
                                cout<<"\n\n\tNo fine to pay ";
                            obj_regis.reset_t_token();
                            int pos=-1*sizeof(obj_regis);
                            Teachers_file.seekp(pos,ios::cur);
                            Teachers_file.write((char*)&obj_regis,sizeof(Registration));
                            cout<<"\n\n\tBook deposited successfully";
                        }
                        if(flag==0)
                        {
                            cout<<"\n\n\tBook does not exist"<<endl;
                        }
                    }
                }
                else
                {
                    cout<<"\n\n\tNo book is issued..please check!!";
                }
            }
        }
        if(found==0)
            cout<<"Teacher record not exist...";
            system("pause");
            Teachers_file.close();
            Book_file.close();
        break;
    }
default :
    cout<<"\n\n\tWrong press";
    cout<<"\n\n\t";
    system("pause");
    break;

}


}
class password
{
    char pas[20],c;
    int length;
public:

    int get_Pass()
    {

        cout<<"Enter new password : ";
        for(int i=0;i<6;i++)
        {
            c=getch();
            pas[i]=c;
            cout<<"*";


        }
       // gets(pas);


    }
    char* ret_pass()
    {
        return pas;
    }
};
int *length;
password obj;
fstream P_file;
void pass()
{
    char n[5],d,m[7];
    d='\o';
    int i;
    P_file.open("password.dat",ios::in|ios::out);
    int flag=0;
     label:
        cout<<"\n\n\t\tEnter your password : ";

        for(i=0;i<6;i++)
        {

             cin>>d;
            //d=getch();
            n[i]=d;
           // cout<<"*";

        }
    while(P_file.read((char*)&obj,sizeof(password)))
    {


        if(strcmpi(obj.ret_pass(),n)==0)
        {
            cout<<"\n\n\t\tYour entered password right \n\n\t\t";
            system("pause");
        }
        else
        {
            cout<<"\n\n\t\tYour entered password was not right \n";
            goto label;
        }

        flag=1;

    }
    P_file.close();
    if(flag==0)
    {
        cout<<"Please set your password \n";
        P_file.open("password.dat",ios::out|ios::app);
       {

        obj.get_Pass();
        P_file.write((char*)&obj,sizeof(password));
       }
        P_file.close();

    }
}
void change_pass()
{
    char v[5],d='\0';
    int flag=0;
    cout<<"\n\n\tEnter your current password  : ";
    for(int i=0;i<6;i++)
    {
        d=getch();
        v[i]=d;
        cout<<"*";

    }
    cout<<endl;
    P_file.open("password.dat",ios::in|ios::out|ios::app);
    while(P_file.read((char*)&obj,sizeof(password)))
    {
        if(strcmpi(obj.ret_pass(),v)==0)
        {
          cout<<"\n";
        }
        else
        {
            cout<<"\n\n\t\t Wrong entry\n\n\t\t";
            system("pause");
            flag=1;
        }
    }
    P_file.close();
    remove("password.dat");
    fstream temp;
    if(flag==0)
    {

        temp.open("Temp.dat",ios::out|ios::app);
        obj.get_Pass();
        temp.write((char*)&obj,sizeof(password));

        temp.close();
        cout<<"\n\n\t\tPassword Change successfully \n\n\t\t";
        system("pause");
    }
    rename("Temp.dat","password.dat");


}
int main()
{
     pass();
     system("cls");
    char num;
    do{
     cout<<"\n\n\t\t\tLibrary Management Software";
    cout<<"\n\n\n\n\t Press 1 for Registration & Modify record (Student and Teacher)\n\n\t Press 2 for Issue book\n\n\t Press 3 for Return book\n\n\t Press 4 for Searching\n\n\t Press 5 for Book input\n\n\t Press 6 for delete information And Change password\n\n\t Press 7 for Book information\n\n\t Press 8 for student & teachers information\n\n\t Press 9 for Exist    \n";
    cout <<"\n\n\t";
    switch(num=getche())
    {
case '1':
    reg();
    break;
case '2':
    book_issue();
    break;
case '3':
    book_return();
    break;
case '4':
   Search();
   break;
case '5':
   book();
break;
case '6':
    DELETE();
    break;
case '7':
  book_informaition();
  break;
case '8':
    stu_and_teac_in();
    break;
case '9' :
    {
    system("cls");
    cout<<"\n\n\n\t\t\tComplete your work \n\a";
    cout<<"\n\n\n\t\t\t!!!! Thank you !!!!! \n\n";
    exit(0);
    break;
    }
default :
    cout<<"\a";
    cout<<"Wrong Press";
    break;
    }
     system("cls");
    }while(num!=9);

    return 0;
}
