//Computer Science Project - Hogwarts Fun Center
#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<iomanip.h>
#include<stdlib.h>
#include<ctype.h>
#include<iomanip.h>
#include<graphics.h>

char House[15],str[30],val_ans;
int points,Hpt=0,l,score;
static int i=0;
char ans[30][30]={"Gryffindor","Albus Dumbledore","Hogsmeade","Snake",
"Dementor","Patronus Charm","Transfiguration","Seeker","Hedwig",
"Ron	Hermione","Filch","Nick","Professor Snape","Sirius Black","Firebolt",
"Crookshanks","Peter Pettigrew","Whomping Willow","Viktor Krum","Dobby",
"Mrs Figg","Parseltongue","Professor Trelawney","Tom Marvolo Riddle",
"Gellert Grindelwald","Fawkes","Herbology","Ignotus Peverell",
"Deluminator","Doe"},Ans[5];

//Structure declaration for file Shopping.dat
struct Items
{ char name[50];
  float price;
  int sno;
}I,N,A;
int s=sizeof(I);
int po;

//Structure declaration for file Canteen.dat
struct Food
{ char name[40];
  float price;
  int sno;
}C;
int si=sizeof(C);
void Valid_check()
{
 while(1)
 {
   cin>>val_ans;
   if(val_ans=='t'||val_ans=='T'||val_ans=='f'||val_ans=='F')
   {Ans[i++]=val_ans;
    break;}
    else cout<<"Please enter t/T for True and f/F for false-             ";
 }
}
//Sorting of houses
void sort()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 cleardevice();
 int g,h,r,s,max, a[4];
 g=h=r=s=max=0;
 cout<<"Answer these Questions by giving T/F for True/False:";
 cout<<"\n\nYou are amicable and friendly to all-                    ";
 Valid_check();
 cout<<"\nYou have a certain disregard for rules-                  ";
 Valid_check();
 cout<<"\nYou like to follow your mind and are very thoughtful-    ";
 Valid_check();
 cout<<"\nYou value friendship and are ready to sacrifice"
     <<"\nanything for the sake of your friendship- 	         ";
 Valid_check();
 for(i=0;i<4;i++)
  Ans[i]=toupper(Ans[i]);
  if(Ans[3]=='T'&& (Ans[2]=='T'|| Ans[1]=='T'|| Ans[0]=='T'))   g++;
  if((Ans[3]=='T'|| Ans[2]=='T' || Ans[1]=='F') && Ans[0]=='T') h++;
  if((Ans[3]=='T'||Ans[1]=='F'||Ans[0]=='T') && Ans[2]=='T')    r++;
  if(Ans[1]=='T'&& (Ans[0]=='F'||Ans[2]=='T'||Ans[3]=='F'))     s++;
 i=0;
 a[i++]=g;
 a[i++]=h;
 a[i++]=r;
 a[i++]=s;
 for(i=0;i<4;i++)
 {if(a[i]>=max)
  max=a[i];}
 if(max==g)
  strcpy(House,"GRYFFINDOR");
   else if(max==r)
    strcpy(House,"RAVENCLAW");
     else if(max==s)
      strcpy(House,"SLYTHERIN");
       else
	strcpy(House,"HUFFLEPUFF");
 cout<<"\nCONGRATULATIONS! YOU HAVE BEEN SORTED INTO "<<House<<"!";
 getch();
}

void Main_menu()
{
 clrscr();
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");

 setcolor(7);
 setbkcolor(6);

 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);  
 cout<<"\n\n\t\t\t     HOGWARTS FUN CENTRE";

 /* draw a rectangle */
 rectangle(200,120,300,220);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);
 outtextxy(216,170,"1.OVERVIEW");

 rectangle(200,120,400,220);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);
 outtextxy(320,170,"2.GAMEZZZ");

 rectangle(200,320,300,220);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);
 outtextxy(205,270,"3.HONEYDUKES");

 rectangle(200,320,400,220);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);
 outtextxy(315,270,"4.SHOPPEE");

 rectangle(200,420,400,220);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);
 outtextxy(285,370,"5.EXIT");
 getch();
}

//First Page
void Welcome()
{
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(9);
 setcolor(5);
 settextstyle(SMALL_FONT,HORIZ_DIR,5);
 settextjustify(LEFT_TEXT,1);
 cout<<"\n\n\n\n\n\n\n\n\n\t\t              HOGWARTS FUN CENTRE";
 cout<<"\n\n\t   HOGWARTS FUN CENTRE WELCOMES YOU!\n\t   THE SORTING CEREMONY IS AN AGE OLD CEREMONY AT HOGWARTS.\n\t";
 cout<<"   YOU MIGHT BELONG IN GRYFFINDOR, WHERE DWELL THE BRAVE AT HEART\n\t";
 cout<<"   YOU MIGHT BELONG IN HUFFLEPUFF, WHERE THEY ARE JUST AND LOYAL\n\t";
 cout<<"   OR YET IN WISE OLD RAVENCLAW IF YOU HAVE A READY MIND\n\t";
 cout<<"   OR PERHAPS IN SLYTHERIN YOU WILL MAKE YOUR REAL FRIENDS\n\t";
 cout<<"   NOW BEFORE YOU START YOUR JOURNEY TO THE MARVELS WITHIN\n\t";
 cout<<"   IT IS A CUSTOMARY RULE, SO LET THE SORTING NOW BEGIN!!!";
 getch();
 sort();
 Main_menu();
}

//Last Page
void Exit()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 cout<<"\nYour total House points:-\n"<<House<<":"<<Hpt<<"\nHope you had a MAGICAL Experience!\nHOGWARTS FUN CENTRE WISHES YOU A VERY WONDERFUL DAY!!";
}

//Overview
void Overview()
{cleardevice();
 int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(9);
 setcolor(1);
 fstream f1;
 char line[80];
 f1.open("FIRST.txt",ios::in);
 while(!f1.eof())
 {f1.getline(line,80);
  settextstyle(SANS_SERIF_FONT,HORIZ_DIR,10);
  puts(line);
 }
 getch();
 Main_menu();
}

//Shopping
void consumer()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 fstream f;
 cout<<"\n\t\tMENU";
 f.open("Shopping.dat",ios::binary|ios::in);
 cout<<endl;
 f.read((char*)&I, s);
 while(f)
 {cout<<setw(9)<<I.sno<<") "<<I.name<<":Rs."<<I.price;
  cout<<endl;
  f.read((char*)&I, s);
 }
 f.close();
 int y=0,r=0,w[25],p=0,counter[25];
 char D[25][50];
 cout<<endl;
 cout<<" Enter your order ( type 0 (zero) when you are finished.) :";
 float bill=0;
 int q,t;
 f.open("Shopping.dat",ios::binary|ios::in|ios::out);
 while(1)
 {cout<<"\n Item number: ";
  cin>>t;
  if(t!=0)
   {cout<<" Quantity: ";
    cin>>q;
    counter[p++]=q;
    f.seekp(0);
    f.read((char*)&I, s);
    while(f)
     {if(t==I.sno)
       {strcpy(D[y++],I.name);
	bill+=I.price*q;
	w[r++]=I.price*q;
	break;
       }
      else
      f.read((char*)&I, s);
     }
   }
  else
   {if(r!=0)
    {
    cout<<"\n\n";
    cout<<" ---------------------------------------------------------";
    cout<<"\n                         SHOPEE\n";
    cout<<"                Best Ever Shopping Centre!\n";
    cout<<"              93, Diagon Alley, Hogsmeade\n";
    cout<<"                    Phone no.:9898098980\n";
    cout<<"  Date: 27-05-2015                          Time: 04:36pm\n";
    cout<<" --------------------------------------------------------------";
    cout<<endl;
    cout<<" Sno.       Item name                       Quantity    Price  ";
    for(y=0;y<r;y++)
     {cout<<endl;
      cout<<"  "<<y+1<<"    "<<D[y]<<counter[y]<<"     "<<w[y]<<"\n";
     }
    cout<<endl;
    cout<<" --------------------------------------------------------------";
    cout<<"\n GROSS AMOUNT: Rs."<<bill;
    cout<<"\n Service tax(5% of gross amount): Rs."<<0.05*bill;
    cout<<"\n VAT(2% of the gross amount): Rs."<<0.02*bill;
    cout<<"\n\n TOTAL BILL:Rs."<<bill+0.07*bill;
    cout<<"\n\n Tuesdays and Fridays holidays";
    cout<<"\n Working Hours - 8:00am to 10:00pm";
    points=bill*10;
    Hpt+=points;
    cout<<"\n\n Congratulations! You won "<<points<<" points!";
    cout<<"\n These points will be added to your house score.";
    cout<<"\n\n Thank you for visiting...........:)";
    }
    else
    cout<<" Thank you for visiting.........:)";
    break;
   }
 }
 f.close();
}

//Displaying shopping menu
void disp()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(9);
 setcolor(1);
 fstream f;
 cout<<"\n\t\tMENU";
 f.open("Shopping.dat",ios::binary|ios::in);
 cout<<endl;
 f.read((char*)&I, s);
 while(f)
  {cout<<setw(9)<<I.sno<<") "<<I.name<<":Rs."<<I.price;
   cout<<endl;
   f.read((char*)&I, s);
  }
 f.close();
 getch();
}

//Appending an item details
void append()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 ofstream f;
 f.open("Shopping.dat",ios::app|ios::binary);
 cout<<"\nEnter the no. of items to be appended: ";
 int n;
 cin>>n;
 for(int i=1;i<=n;i++)
  {cout<<"\nITEM NO.: ";
   cin>>A.sno;
   cout<<"ITEM: ";
   gets(A.name);
   cout<<"PRICE: ";
   cin>>A.price;
   f.write((char*)&A,s);
  }
 f.close();
}

//Inserting an item details
void insert()
{setbkcolor(9);
 setcolor(1);
 fstream f1,f2;
 f1.open("Shopping.dat",ios::binary|ios::in);
 f2.open("temp.dat",ios::binary|ios::out);
 cout<<"\nEnter the details of the item(s):";
 cout<<"\nITEM NO.: ";
 cin>>N.sno;
 cout<<"ITEM: ";
 gets(N.name);
 cout<<"PRICE: ";
 cin>>N.price;
 f1.read((char*)&I,s);
 while(f1)
 {if(I.sno<N.sno)
   f2.write((char*)&I,s);
    else
     {f2.write((char*)&N,s);
      break;
     }
   f1.read((char*)&I,s);
 }
 while(f1)
 {f2.write((char*)&I,s);
  f1.read((char*)&I,s);
 }
 remove("Shopping.dat");
 rename("temp.dat","Shopping.dat");
 f1.close();
 f2.close();
}

//Deleting an item details
void del()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 fstream f1,f2;
 int n;
 cout<<"\nEnter the item no. to be deleted: ";
 cin>>n;
 f1.open("Shopping.dat",ios::in|ios::binary);
 f2.open("temp.dat",ios::out,ios::binary);
 f1.read((char*)&I,s);
 while(f1)
 {if(I.sno!=n)
  f2.write((char*)&I,s);
  f1.read((char*)&I,s);
 }
 f1.close();
 f2.close();
 f1.open("Shopping.dat",ios::out|ios::binary);
 f2.open("temp.dat",ios::in|ios::binary);
 while(f2.read((char*)&I,s))
 f1.write((char*)&I,s);
 f1.close();
 f2.close();
 f1.open("temp.dat",ios::out|ios::binary);
 f1.close();
}

//Modifying an item details
void modify()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 int p;
 float amt;
 cout<<"\nEnter the item no. to be modified: ";
 cin>>p;
 cout<<"Enter the new price: ";
 cin>>amt;
 fstream f;
 f.open("Shopping.dat",ios::in|ios::binary|ios::out);
 f.read((char*)&I,s);
 while(f)
 {if(I.sno==p)
  I.price=amt;
  f.seekp(-s,ios::cur);
  f.write((char*)&I,s);
  f.read((char*)&I,s);
 }
 f.close();
}

//Shopping bill display
void Shopping()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(9);
 setcolor(1);
 cleardevice();
 int ch,c;
 fstream f;
 /*cout<<"Enter the details.";
 f.open("Shopping.dat",ios::binary|ios::out);
 for(int i=1;i<=15;i++)
 {cout<<"\nITEM NO.: ";
  cin>>I.sno;
  cout<<"ITEM: ";
  gets(I.name);
  cout<<"PRICE: ";
  cin>>I.price;
  f.write((char*)&I, s);
 }
 f.close();
 */

 cout<<"******************** WELCOME TO SHOPZEEE ********************";
 cout<<endl;
 do
 {cout<<"\n\t\tMAIN MENU\n1)Consumer\n2)Administrator\n3)Exit\n";
  cout<<"\n Enter your choice(main menu): ";
  cin>>ch;
  switch(ch)
   {case 1: consumer();
	    break;

    case 2: do
	    {cout<<"\n\t\tMENU\n1)Insert an item\n2)Delete an item";
	     cout<<"\n3)Modify the price of an item\n4)Display\n";
	     cout<<"5)Append\n6)Exit";
	     cout<<"\n Enter your choice(Sub menu): ";
	     cin>>c;
	     switch(c)
	     {case 1: insert();
		      break;
	      case 2: del();
		      break;
	      case 3: modify();
		      break;
	      case 4: disp();
		      break;
	      case 5: append();
		      break;
	      case 6: cout<<" Exiting.....";
		      getch();
		      break;
	     default: cout<<" Invalid choice!"; }
	     }while(c!=6);
	    break;

    case 3: cout<<"\n Thank you for visiting . Exiting.....";
	    break;
   default: cout<<"\n Invalid choice!";
	    break;
   }
 }while(ch!=3);
 getch();
 Main_menu();
}

//Foodstore
void Food()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 cleardevice();
 fstream f;
 char D[15][40];
 int y=0,p=0,r=0,counter[15];
 float w[15],fl;
 /*cout<<"Enter the details.";
 f.open("Canteen.dat",ios::binary|ios::out);
 for(int i=1;i<=15;i++)
 {cout<<"\nITEM NO.: ";
  cin>>I.sno;
  cout<<"ITEM: ";
  gets(I.name);
  cout<<"PRICE: ";
  cin>>I.price;
  f.write((char*)&I, s);
 }
 f.close();*/
 char ch;
 do
 {cout<<endl;
  cout<<"*************************** HONEYDUKES ******************************\n";
  cout<<"                        A Canteen for all ! ";
  cout<<endl;
  cout<<"                              MENU";
  f.open("Canteen.dat",ios::binary|ios::in);
  f.read((char*)&C, si);
  cout<<"\n  Non-Magical\n";
  while(f)
   {cout<<setw(9)<<C.sno<<") "<<C.name<<":Rs."<<C.price;
    cout<<endl;
    if(C.sno==8)
     break;
    f.read((char*)&C, si);
   }
  f.close();
  f.open("Canteen.dat",ios::binary|ios::in);
  cout<<"  Magical\n";
  f.seekg(8*si);
  f.read((char*)&C, si);
  while(f)
   {cout<<setw(9)<<C.sno<<") "<<C.name<<":Rs."<<C.price;
    cout<<endl;
    f.read((char*)&C, si);
   }
  f.close();
  cout<<endl;
  cout<<" Enter your order ( type 0 (zero) when you are finished.) :";
  float bill=0,b=0;
  int q,t;
  f.open("Canteen.dat",ios::binary|ios::in|ios::out);
  char c,bc;
  while(1)
   {cout<<"\n Item number: ";
    cin>>t;
    if(t!=0)
     {cout<<" Quantity: ";
      cin>>q;
      counter[p++]=q;
      f.seekp(0);
      f.read((char*)&C, si);
      while(f)
       {if(t==C.sno)
	 {strcpy(D[y++],C.name);
	  bill+=C.price*q;
	  w[r++]=C.price*q;
	  b=bill;
	  break;
	 }
	else
	 f.read((char*)&C, si);
       }
     }
    else
     {if(r!=0)
      {cout<<"\n Would you like to take it as a parcel(Y/N)? ";
      cin>>c;}
      else ;
      if(c=='Y'||c=='y')
      {fl=r*5;
       bill+=fl;
      }
       else ;
      if(r!=0)
      {
      cout<<"\n Would you like to order a mineral water bottle(Y/N)? ";
      cin>>bc;
      if(bc=='Y'||bc=='y')
      bill+=30;
       else ;
      cout<<"\n\n";
      cout<<" ---------------------------------------------------------";
      cout<<"\n                      HONEYDUKES\n";
      cout<<"                    A Canteen for all!\n";
      cout<<"                   HOGWARTS SHOPPING MALL\n";
      cout<<"              70, Whomping Willow Lane, Hogsmeade\n";
      cout<<"                    Phone no.:9999999999\n";
      cout<<"  Date: 15-02-2015                          Time: 11:37am\n";
      cout<<" ---------------------------------------------------------";
      cout<<endl;
      cout<<" Sno.       Item name               Quantity    Price  ";
      for(y=0;y<r;y++)
       {cout<<endl;
	cout<<"  "<<y+1<<"    "<<D[y]<<counter[y]<<"        "<<w[y]<<"\n";
       }
      cout<<endl;
      cout<<" ---------------------------------------------------------";
      cout<<"\n GROSS AMOUNT: Rs."<<b;
      cout<<"\n Service tax(5% of gross amount): Rs."<<0.05*b;
      cout<<"\n VAT(2% of the gross amount): Rs."<<0.02*b;
      if(c=='y'||c=='Y')
      cout<<"\n Parcel Charges: Rs."<<fl;
      if(bc=='Y'||bc=='y')
      cout<<"\n Mineral Water Bottle Charges: Rs."<<30;
      cout<<"\n\n TOTAL BILL:Rs."<<bill+0.07*b;
      cout<<"\n\n Working Days - Monday to Saturday";
      cout<<"\n Working Hours - 8:00am to 10:00pm";
      cout<<"\n\n Do you want to try the lucky draw (Y/N)? ";
      char choice;
      cin>>choice;
      randomize();
      if(choice=='y'||choice=='Y')
       {po=random(999)+1;
	cout<<"\n And you win........"<<po<<" points!";
	cout<<"\n Congratulations !!! ";
	cout<<"These points will be added to your house score.";
	Hpt+=po;
       }
      else
      cout<<"\n Okay, catch up with you later.";
      cout<<"\n\n Thank you for visiting...........:)";
      }
      else
      cout<<"\n Thank you for visiting........:)";
      break;
     }
  }
  cout<<"\n\n Do you want to continue (Y/N)? ";
  cin>>ch;
  f.close();
 }while(ch=='y'||ch=='Y');
  getch();
  Main_menu();
}

//Gamelore menu
void menu()
{setbkcolor(9);
 setcolor(1);
 cout<<"\n\t\t\t\tGAMELORE WELCOMES YOU\n\t1.REUSABLE HANGMAN-SPELL IT\n\t2.POTTERMORE QUIZ\n\t3.EXIT\n";
}

//End of Gamelore
void end()
{    cout<"\nTHANK YOU!\nVISIT AGAIN!!";
}

//Score calculation for type 1
void chk1(char x[])
{static int i=0;
 if(strcmpi(x,ans[i])!=0)
 {score-=2;
  cout<<"\nCorrect Answer is ";
  puts(ans[i]);
 }
 else
 score+=5;
 i++;
}

//Score calculation for type 2
void chk2(char x[])
{static int i=10;
 if(strcmpi(x,ans[i])!=0)
  {score-=2;
   cout<<"\nCorrect Answer is ";
   puts(ans[i]);
  }
 else
 score+=5;
 i++;
}

//Score calculation for type 3
void chk3(char x[])
{static int i=20;
 if(strcmpi(x,ans[i])!=0)
  {score-=2;
   cout<<"\nCorrect Answer is ";
   puts(ans[i]);
  }
 else
 score+=5;
 i++;
}

//Fabrications
void dsgn()
{cout<<"*******************************************************";}
void dash()
{ cout<<"-------------------------------------------------------";}

//Hangman picture
char p[10];

void stand()
{
cout<<"     |==============|                \n";
cout<<"     |              |                \n";
cout<<"     |              |                \n";
cout<<"     |              |                \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |                               \n";
cout<<"     |========================       \n";
}


void head()
{
cout<<"     |==============|                \n";
cout<<"     |              |                \n";
cout<<"     |              |                \n";
cout<<"     |              |                \n";
cout<<"     |              |                 \n";
cout<<"     |              |                 \n";
cout<<"     |         ----------  \n";
cout<<"     |         |           |  \n";
cout<<"     |         | O    O|  \n";
cout<<"     |         |           |  \n";
cout<<"     |         |   <>   |  \n";
cout<<"     |         ----------  \n";
}



void neck()
{
cout<<"     |                    |                \n";
cout<<"     |   O----------|----------O      \n";
cout<<"     |                    |                 \n";
}


void body()
{
cout<<"     |              |     \n";
cout<<"     |              |      \n";
cout<<"     |              |      \n";
cout<<"     |              |      \n";
cout<<"     |              |      \n";
cout<<"     |              |      \n";
cout<<"     |             / \\     \n";
cout<<"     |            /   \\    \n";
cout<<"     |           /     \\   \n";
cout<<"     |          /       \\  \n";
cout<<"     |         O         O \n";
cout<<"    ================================ \n";
}


void dead()
{
cout<<"     |==============|                             \n";
cout<<"     |              |                             \n";
cout<<"     |              |                             \n";
cout<<"     |              |                             \n";
cout<<"     |              |                             \n";
cout<<"     |              |   # RIP                     \n";
cout<<"     |              /\\                            \n";
cout<<"     |             /   \\                           \n";
cout<<"     |            / O  \\                          \n";
cout<<"     |           /         \\                         \n";
cout<<"     |          \\  # O/                         \n";
cout<<"     |           \\      /                          \n";
cout<<"     |           (\\   /                           \n";
cout<<"     |          /  \\/                            \n";
cout<<"     |         /(\\	                              \n";
cout<<"     |        / | \\                              \n";
cout<<"     |       /   \\ \\                           \n";
cout<<"     |      O    \\  O                         \n";
cout<<"     |             \\                             \n";
cout<<"     |             /\\                             \n";
cout<<"     |            / /                             \n";
cout<<"     |           / /                              \n";
cout<<"     |          O  \\O                             \n";
cout<<"     ================================             \n";
}


void graph(int c)
{if(c==4)
  {stand();
   cout<<"You have 4 chances left.You can do it !\n";}
   else if(c==3)
    {head();
     cout<<"\nYou have 3 chances left. Do not lose hope.\n";}
     else if(c==2)
      {head();
       neck();
       cout<<"\nYou have just 2 chances left. Hurry up !\n";}
       else if(c==1)
        {head();
          neck();
          body();
          cout<<"\nYou have just 1 chance left"
	     <<"It is high time that you guess the word!\n";}
	 else if(c==0)
	   {dead();
	    cout<<"Sorry about that ! May you live a long life.....in heaven !\n";}
	     else if(c==5) ;
	      else;
}

//Hangman Gaming Technique
int len(char s[10])
{for(int i=0;s[i];i++);
 return i;
}

int Check(char p[10])
{int m=0;
 for(int i=0;p[i];i++)
 if(p[i]!='-')
 m++;
 if(m==i)
  return 1;
   else
    return 0;
}

void Game(char s[10],char r,int&c)
{int t=0;
 for(int i=0;s[i];i++)
 if(s[i]==tolower(r))
  {p[i]=r;
   t++;
  }
 if(t==0)
   c--;
}

void Hangman()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 cleardevice();
 setbkcolor(12); 
 randomize();
 char s[30][10]={"legend","success","wisdom","world","virtue","magic","aspire",
 "nation","democracy","style","computer","emotion","friend","poetry","painting",
 "ethic","functions","static","memory","fashion","science","royal","serene",
 "trophy","coffee","illusion","divine","dynamic","music","talent"},q,ch;
 int x,k=0;
 do
 {x=random(30);
  if(k==0)
   {cout<<"\n\nWelcome to HANGMAN \nYou have five chances to guess the given word";
    cout<<"\nAll the Best!\n";
   }
  int &c=5;
  for(int i=0;i<len(s[x]);i++)
  p[i]='-';
  p[i]='\0';
  while(c!=0)
   {cout<<endl;
    puts(p);
    cout<<"\nEnter a character:";
    cin>>q;
    (Game(s[x],q,c));
    if(Check(p)==1)
     {k++;
      cout<<"\nCongratulations!\nYou won!! and the answer is ";
      puts(p);
      break;
     }
    graph(c);
   }
 if(c==0)
  {cout<<"\nBetter Luck Next Time !!!"<<"\nThe answer is ";
   puts(s[x]);
  }
 cout<<"\nDo you wanna Continue ??? Enter choice:(Y for Yes)";
 cin>>ch;
 }
 while(ch=='y'||ch=='Y');
 getch();
 menu();
}

//Quiz
void Quiz()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 cleardevice();
 cout<<"\n\t\t\tWELCOME TO HARRY POTTER TRIVIA QUIZ\n";
 cout<<"\nGAME RULES:Answer in one/ two words only. Every correct answer earns a 5 points and incorrect answer earns a -2.\n\nYour score will be added to your House points!";
 cout<<"\n\n\tCHOOSE YOUR DIFFICULTY LEVEL:\n"<<"\t 1.EASY\n"<<"\t 2.MEDIUM\n"<<"\t 3.HARD\n\t Enter level:";
 cin>>l;
switch(l)

{case 1:
score=0;
cout<<"\n1)Which house was Harry Potter sorted into?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n2)Who was the greatest Headmaster Hogwarts ever had?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n3)Name the wizarding village situated near Hogwarts?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n4)Which symbol represents the Slytherin House?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n5)Which creature feeds on positive thoughts and hopes?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n6)What charm can drive the dementors away?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n7)What subject does Professor Mcgonagall teach?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n8)What position does Harry play on the Quidditch team?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n9)What was the name of Harry's owl?\n";
gets(str);
chk1(str);
dsgn();
cout<<"\n\n10)Who were Harry's best friends?\n";
gets(str);
chk1(str);
dash();
break;

case 2:
score=0;
cout<<"\n1)Who was the caretaker at Hogwarts?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n2)Who was the Resident Ghost of Gryffindor Tower?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n3)Who was Harry's least favourite teacher at Hogwarts?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n4)Who was Harry's godfather?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n5)What was the name of the broomstick sent by Harry's godfather?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n6)What was the name of Hermione's pet cat?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n7)Which wizard had the animagus form of a rat?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n8)What was the tree planted at the end of the Shrieking Shack called?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n9)Who played the Seeker in Bulgarian National Team?\n";
gets(str);
chk2(str);
dsgn();
cout<<"\n\n10)Who was the elf who was set free by Harry Potter?\n";
gets(str);
chk2(str);
dash();
break;

case 3:
score=0;
cout<<"\n1)Who was Harry's Squib neighbour?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n2)What is the ability to converse with snakes known as?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n3)Who made the prophecy about Harry and Lord Voldemort?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n4)What was the original name of Lord Voldemort?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n5)From whom did Dumbledore win the Elder Wand?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n6)What was the name of Dumbledore's pet Phoenix?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n7)What was Neville's favourite subject?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n8)Which Peverell Brother was Harry's ancestor?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n9)What did Dumbledore leave for Ron in his will?\n";
gets(str);
chk3(str);
dsgn();
cout<<"\n\n10)What form does Severus Snape's Patronus take?\n";
gets(str);
chk3(str);
dash();
break;
}
 cout<<"\n\tSCORE: "<<score<<" out of 50";
 if(score>45)
 cout<<"\n\tBRAVO ! You are truly a Potterhead !!!";
 else if(score>35)
 cout<<"\n\tCONGRATULATIONS !!! You are MAGICAL !!!";
 else if(score<30)
 cout<<"\n\tKeep TRYING !!! Better Luck Next Time!!!";
 Hpt+=score;
 getch();
 menu();
}

//Quiz Gaming Technique
void Game()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 cleardevice();
 int choice;
 menu();
 do
 {cout<<"\nEnter Your Choice:";
  cin>>choice;
  if(choice==1)
    Hangman();
      else if(choice==2)
	Quiz();
	 else if(choice==3)
	   end();
 }
 while(choice!=3);
 getch();
 Main_menu();
}

//Main compilation
void main()
{int gdriver = DETECT, gmode, errorcode;
 initgraph(&gdriver, &gmode, "\\tc\\bgi");
 setbkcolor(6);
 setcolor(5);
 int opt;
 Welcome();
 do
 {cout<<"\nEnter your choice:";
  cin>>opt;
  switch(opt)
   {case 1: Overview();
	    break;
    case 2: Game();
	    break;
    case 3: Food();
	    break;
    case 4: Shopping();
	    break;
    case 5: Exit();
	    break;
   default: cout<<"Wrong choice!";
   }
 }
 while(opt!=5);
 getch();
}