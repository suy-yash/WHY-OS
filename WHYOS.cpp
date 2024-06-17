#include<bits/stdc++.h>
#include<cmath>
#include<string>
#include<stdlib.h>
#include<time.h>
using namespace std;
//clearscreen
void clrscr()
{
	system("CLS");
}
//end clearscreen

//keypad
void key()
{
	cout<<"\t\t        __\n\t\t  <    |__|    >"<<endl<<endl;
	cout<<"\t\t   1     2     3\n\t\t   4     5     6\n\t\t   7     8     9\n\t\t   *     0     #"<<endl;
}
//end keypad
int i,n=0,x,l=0,k,m=1;
    string p[1000],c[1000],name,t,v,r;
//calculator
void cal()
{
	float a,b; int sum=1;
	char c;
	cout<<"\n\t\t""_____________________\n\t\t sr=s    7 8 9      +\n\t\t sq=q    4 5 6      -\n\t\t cb=c    1 2 3      *\n\t\t cr=r      0        %\n\t\t csin=o  sin=i  tan=t\n\t\t fact=f  pow=p  log=l\n\t\t_________x=ext________"<<endl<<endl;
	cin>>a;
	cin>>c;
	while(c!='v')
	{
		switch(c)
		{
			case '+':{
				cin>>b;
				cout<<a+b;
				a=a+b;
				cin>>c;
				break;
			}
			case '-':{
				cin>>b;
				cout<<a-b;
				a=a-b;
				cin>>c;
				break;
			}
			case '*':{
				cin>>b;
				cout<<a*b;
				a=a*b;
				cin>>c;
				break;
			}
			case '%':{
				cin>>b;
				cout<<a/b;
				a=a/b;
				cin>>c;
				break;
			}
			case 's':{
				cout<<a*a;
				a=a*a;
				cin>>c;
				break;
			}
			case 'q':{
				cout<<sqrt(a);
				cin>>c;
				break;
			}
			case 'c':{
				cout<<a*a*a;
				a=a*a*a;cin>>c;
				break;
			}
			case 'r':{
				cout<<cbrt(a);
				a=cbrt(a);cin>>c;
				break;
			}
			case 'i':{
				a=sin(a);
				cout<<a;
				cin>>c;
				break;
			}
			case 'o':{
				a=cos(a);
				cout<<a;
				cin>>c;
				break;
			}
			case 't':{
				a=tan(a);
				cout<<a;
				cin>>c;
				break;
			}
			case 'f':{
				while(a>0)
				{
					sum=sum*a;
					a--;
				}
				cout<<sum;
				a=sum;
				cin>>c;
				break;
			}
			case 'p':{
				cin>>b;
				a=pow(a,b);
				cout<<a;
				cin>>c;
				break;
			}
			case 'log':{
				a=log(a);
				cout<<a;
				cin>>c;
				break;
			}
			case 'x':{
				cout<<"exiting>>>"<<endl;
				clrscr();
				c='v';
				break;
			}
		}
	}
}
//end calculator

//game
void game(){
	char c='a';
	int a;
	cout<<"\t\t Welcome to mind reader\n\n\t\" I Will read your mind you don't believe let's try \""<<endl<<endl;
	cout<<"\t\tTip: Enter 0 to continue >>>"<<endl;
	cin>>a;
	if(a==0)
	{
	while(c!='~')
	{
		cout<<"\t\tPlease Think any Number!!"<<endl; 
		cin>>a;
		if(a==0)
			{
				cout<<"\t\tAdd this number to next immediate number!!"<<endl;
				cin>>a;
				if(a==0)
				{
					cout<<"\t\tNow add 3 to sum!!"<<endl;
					cin>>a;
					if(a==0)
					{
						cout<<"\t\tDivide the New Number by 2!!"<<endl;
						cin>>a;
						if(a==0)
						{
							cout<<"\t\tSubstract Original number from New Number!!"<<endl;
							cin>>a;
							if(a==0)
							{
									cout<<"\t\tYour Answer is 2 !!"<<endl<<endl;
									cout<<"\t\tEnter 1 to Play again Or ~ to exit!!!"<<endl;
									cin>>c;
									clrscr();
							}
						}
						else
					{cout<<"\t\tPlease enter 0 to continue"<<endl;
					cin>>a;
					clrscr();}
					}else
				{	cout<<"\t\tPlease enter 0 to continue"<<endl;
					cin>>a;
					clrscr();}
				}else
				{	cout<<"\t\tPlease enter 0 to continue"<<endl;
					cin>>a;
					clrscr();}
			}
			else
				{	cout<<"\t\tPlease enter 0 to continue"<<endl;
					cin>>a;
					clrscr();}
			
	}
}
}
//end game

//power function
void systum()
{
	int choice;

    cout << "\t\t1. Power Off \n";
    cout << "\t\t2. Restart \n";
    cout << "\t\t3. Exit\n";
    cout << "\n\t\tEnter your choice: ";
    cin >> choice;

    switch (choice)
    {
        case 1:
            cout << "System will Turn off after 10 seconds \n";
            system("C:\\windows\\system32\\shutdown /s /t 10\n\n");
            break;

        case 2:
            cout << "System will restart in 10 seconds\n";
            system("C:\\windows\\system32\\shutdown /r /t 10\n\n");
            break;

        case 3:
            choice=0;
            break;

        default:
            cout << "Wrong Choice!!\n";
            break;
    }

}
//end power

//calender	
	int dayNumber(int day, int month, int year)
{
 
    static int t[] = { 0, 3, 2, 5, 0, 3, 5, 1,
                       4, 6, 2, 4 };
    year -= month < 3;
    return ( year + year/4 - year/100 +
             year/400 + t[month-1] + day) % 7;
}
 
string getMonthName(int monthNumber)
{
    string months[] = {"January", "February", "March",
                       "April", "May", "June",
                       "July", "August", "September",
                       "October", "November", "December"
                      };
 
    return (months[monthNumber]);
}
 

int numberOfDays (int monthNumber, int year)
{
    // January
    if (monthNumber == 0)
        return (31);
 
    // February
    if (monthNumber == 1)
    {
        // If the year is leap then February has
        // 29 days
        if (year % 400 == 0 ||
                (year % 4 == 0 && year % 100 != 0))
            return (29);
        else
            return (28);
    }
 
    // March
    if (monthNumber == 2)
        return (31);
 
    // April
    if (monthNumber == 3)
        return (30);
 
    // May
    if (monthNumber == 4)
        return (31);
 
    // June
    if (monthNumber == 5)
        return (30);
 
    // July
    if (monthNumber == 6)
        return (31);
 
    // August
    if (monthNumber == 7)
        return (31);
 
    // September
    if (monthNumber == 8)
        return (30);
 
    // October
    if (monthNumber == 9)
        return (31);
 
    // November
    if (monthNumber == 10)
        return (30);
 	// December
    if (monthNumber == 11)
        return (31);
}
 
void printCalendar(int year)
{
    printf ("         Calendar - %d\n\n", year);
    int days;
    int current = dayNumber (1, 1, year);
    for (int i = 0; i < 12; i++)
    {
        days = numberOfDays (i, year);
 
        // Print the current month name
        printf("\n  ------------%s-------------\n",
               getMonthName (i).c_str());
 
        // Print the columns
        printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");
 
        // Print appropriate spaces
        int k;
        for (k = 0; k < current; k++)
            printf("     ");
 
        for (int j = 1; j <= days; j++)
        {
            printf("%5d", j);
 
            if (++k > 6)
            {
                k = 0;
                printf("\n");
            }
        }
 
        if (k)
            printf("\n");
 
        current = k;
    }
 
    return;
}
//end calender

//date
void date()
{
	time_t t = time(NULL);
 tm* tPtr = localtime(&t);
 		if(tPtr->tm_hour<12&&tPtr->tm_hour>5)
        {
           	cout<<"\t\t  Good Morning *_*"<<endl<<endl;
    	}
    	else if(tPtr->tm_hour>=12&&tPtr->tm_hour<17)
    	{
    		cout<<"\t\t  Good Aftnoon *_*"<<endl<<endl;
		}
		else if(tPtr->tm_hour>=18&&tPtr->tm_hour<24)
        { 
        	cout<<"\t\t  Good Evening *_*"<<endl<<endl;
   	 	}
        cout << "\t\t     " <<(tPtr->tm_mday)<<"/"<< (tPtr->tm_mon)+1 <<"/"<< (tPtr->tm_year)+1900<< endl;
        if(tPtr->tm_hour<12&&tPtr->tm_hour>5)
        {
			cout << "\t\t    " << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) <<" AM"<< endl; 
           	cout << endl;
    	}
    	else
    	{
    		cout << "\t\t    "  << (tPtr->tm_hour)<<":"<< (tPtr->tm_min)<<":"<< (tPtr->tm_sec) <<" PM"<< endl; 
		}
}
//end date

/*Phonebook
void phone()
{
	int i,n=0,x,j=1,l=0;
    string p[1000],c[1000];
    cout<<"Press 1 to create new contact"<<endl;
    cout<<"Press 2 to open contacts"<<endl;
    while(j)
    {
        cin>>x;
        switch(x)
        {
            case 1:{
                n++;
                l++;
                clrscr();
                cout<<"Enter the number: "<<endl;
                cin>>p[n];
                cin>>c[n];
                break;
            } 
            case 2:{
                if(n==0)
                  {
                  	clrscr();
					cout<<"list is empty"<<endl;
					}  
                else
                {   clrscr();
                	cout<<"\t\t There are "<<l<<" contacts"<<endl;
                    for(i=1;i<=n;i++)
                    {
                        cout<<"\t\t"<<i<<". "<<p[i]<<endl;
                        cout<<"\t\t"<<"   "<<c[i]<<endl;
                    }
                }
                break;
            }
            case 3:{
                j=0;
                break;
            }
        }
    }
}
end Phonebook*/

// diplay
void displaylkd()
{
	clrscr();
	int a,e=1,s,b;
	int j=1;
	char d;
		clrscr();
		cout<<endl;
		date();
	cout<<endl;
	cout<<"\t\t   Hello "<<name<<" !"<<endl<<endl;
	key();
	cin>>d;
	while(d!='$')
	{
		switch(d)
		{
			case '#':{
				clrscr();
				game();
				displaylkd();
				cin>>d;
				break;
			}
			case '-':{
				clrscr();
				cout<<"\t\t Enter the year "<<endl;
				cin>>a;
				clrscr();
				printCalendar(a);
				cout<<"\n\t\tPress 1 to exit "<<endl;
				cin>>a;
				if(a==1)
				displaylkd();
				cin>>d;
				break;
			}
			case '|':{
				clrscr();
				cal();
				displaylkd();
				cin>>d;
				break;
			}
			case '>':{
				clrscr();
				systum();
				displaylkd();
				cin>>d;
				break;
			}
			case '<':{
				clrscr();
				cout<<"\n\t\tPress 1 to create new contact"<<endl;
    cout<<"\t\tPress 2 to open contacts"<<endl;
    cout<<"\t\tPress 3 to delete contacts"<<endl;
    cout<<"\t\tPress 4 to exit"<<endl;
    while(j)
    {
		cin>>x;
        switch(x)
        {
            case 1:{
                n++;
                l++;
                clrscr();
                cout<<"\n\t\tEnter the Information: "<<endl;
                cout<<"\n\t\t Name: ";
                cin>>p[n];
                cout<<"\n\t\t Phone no.: ";
                cin>>c[n];
                break;
            } 
            case 2:{	
                if(n==0)
                  	{
                  	clrscr();
					cout<<"\n\t\tlist is empty\n\t\tSave contacts"<<endl;
					}  
                else
                	{   clrscr();
                	cout<<"\n\t\t There are "<<l<<" contacts"<<endl;
                    for(i=1;i<=n;i++)
                    {
                        cout<<"\t\t"<<i<<". "<<p[i]<<endl;
                        cout<<"\t\t"<<"   "<<c[i]<<endl;
                    }
                	}
                break;
           			 }
            case 3:{
            		clrscr();
                	cout<<"\n\t\t There are "<<l<<" contacts"<<endl;
                    for(i=1;i<=n;i++)
                    {
                        cout<<"\t\t"<<i<<". "<<p[i]<<endl;
                        cout<<"\t\t"<<"   "<<c[i]<<endl;
                    }
                    cout<<"\n\t\tEnter the contact to delete: ";
                    cin>>r;
                    for(i=1;i<=n;i++){
                    	for(k=1;k<=n-1;k++)
							if(p[k]==r)
                    		{
                    			t=p[k];
                    			p[k]=p[k+1];
                    			p[k+1]=t;
                    			v=c[k];
                    			c[k]=c[k+1];
                    			c[k+1]=v;
                    			m++;
							} }
					clrscr();
					cout<<"\n\t\tContact deleted"<<endl;
					n--;l--;
					cout<<"\n\t\t There are "<<l<<" contacts"<<endl;
                    for(i=1;i<=n;i++)
                    {
                        cout<<"\t\t"<<i<<". "<<p[i]<<endl;
                        cout<<"\t\t"<<"   "<<c[i]<<endl;
                    }
				break;
			}
			/*case 4:{
				clrscr();
				cout<<"\n\t\t There are "<<m<<" deleted contacts"<<endl;
				n++;
				for(i=m;i<n;i++)
				{
					cout<<"\t\t"<<"*  "<<p[i]<<endl;
                        cout<<"\t\t"<<"   "<<c[i]<<endl;	
				}
				break;
			}*/
			case 4:{
                j=0;
                break;
           			}
        }
    }
				
				displaylkd();
				cin>>d;
				break;
			}
			case '*':{
				clrscr();
				cout<<endl;
				date();
				cout<<"\n\t\t  Enter Password: ";
				cin>>b;
				if(b==25)
				displaylkd();
				else{
					clrscr();
					date();
					cout<<"\n\t\t  Invalid Password: ";
					cout<<"\n\t\t  Try again: ";
					cin>>b;
					if(b==25)
						displaylkd();
					else{
							clrscr();
							date();
							cout<<"\n\t\t  Invalid Password: ";
							cout<<"\n\t\t  Try again: ";
							cin>>b;
							if(b==25)
							displaylkd();
							else{
							clrscr();
							date();
							cout<<"\n\t\t  Invalid Password: ";
							cout<<"\n\t\t  Try again: ";
							cin>>b;
							if(b==25)
								displaylkd();
							else
								{
									clrscr();
									cout<<"\n\t\tYou have exceeded the maximum limit"<<endl;
									cout<<"\n\t\tSystem will turn off in 30 seconds"<<endl;
									system("C:\\windows\\system32\\shutdown /s /t 30\n\n");
								}
							}
							
						}
					}
				cin>>d;
				break;
			}
		}
	}

}
//display

//display
void display()
{
	clrscr();
	date();
	cout<<endl;
	cout<<"\t\t   Hello buddy!!"<<endl<<endl;
	key();
}
//end display

void manual()
{
	clrscr();
	cout<<"\n\t\t   Please read it carefully..."<<endl<<endl;
	cout<<"\t\t 1. < is used to open phonebook\n\t\t 2. > is used to Power of system\n\t\t 3. | is used to open calculator\n\t\t 4. _ is used to open calender\n\t\t 5. # is used to play game\n\t\t 6. * is used to lock device"<<endl;
	cout<<"\n\t\t Press any key to contiue >> ";;
}
int main()
{
	int c ,e;
	cout<<"\n\t\t Welcome On-board Sir!!"<<endl<<endl;
	cout<<"\t\t Please press any key to continue >> ";
	cin>>c;
	if(c)
	{
		manual();
		cin>>c;
			if(c)
			{
				clrscr();
				cout<<"\n\t\t Press 1 to enable password\n\t\t ";
				cin>>c;
				cout<<"\t\t Your password is 25 \n\n\t\t Press 0 to continue\n\t\t ";
				cin>>c;
				if(c==0)
				{
					clrscr();
					cout<<"\n\t\t Enter the Password: ";
					cin>>e;
					if(e==25)
					 {
					 	cout<<"\n\t\t Please tell me your name: ";
					 	cin>>name;
					 	clrscr();
					   displaylkd(); }
				}
				else if(c==2)
				{
					display();
				}
			}
	}
	return 0;
}
