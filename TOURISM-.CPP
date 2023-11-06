#include<iostream.h>
#include<conio.h>
//using multilevel inheritance
class tourism //base class//1 member function
	{
		public:
		void input()
		{
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<"                 Project Name:Tourism Management               "<<endl;
			cout<<"-------------------------------------------------------------------------------"<<endl;
			cout<<" "<<endl;
			cout<<"*******************************************************************************"<<endl;
			cout<<"                     Welcome to Manav Tours And Travels                        "<<endl;
			cout<<"*******************************************************************************"<<endl;
			cout<<" "<<endl;
			cout<<"-----------------Information About The Holiday Packages And Prices-------------"<<endl;
			cout<<" "<<endl;
			cout<<"-----------------------------Rules and Regulations------------------------------"<<endl;
			cout<<"Timings on which booking is available everyday except sunday's:8 a.m - 8 p.m"<<endl;
			cout<<" "<<endl;
			cout<<"If You Want To Cancel Your Bookings,You Can Cancel It Anytime But 1200 Rupees would be charged as your cancellation charge"<<endl;
			cout<<"********************************************************************************"<<endl;
		}
	};
class tourists:public tourism
	{
		public:
		int n,adults,childrens;
		void details()
			{
				cout<<" "<<endl;
				cout<<"                            Tourist Information                           "<<endl;
				cout<<"**************************************************************************"<<endl;
				cout<<"Please enter the number of passengers: "<<endl;
				cin>>n;
				cout<<"Please enter the number of adults: "<<endl;
				cin>>adults;
				cout<<"Please enter the number of childrens: "<<endl;
				cin>>childrens;
					if((adults+childrens)==n)
						{
							cout<<"Please fill in the details below"<<endl;
						}
					else
						{
							cout<<"Please check the number of passengers"<<endl;
						}
			}
		char name[20],username[50],add[50],dob[50];
		int age,phoneno,x;
		void getdata()
			{
				cout<<"Please Enter Your Name:"<<endl;
				cin>>name;
				cout<<"Please Enter Your Username:"<<endl;
				cin>>username;
				cout<<"Please Enter Your Date Of Birth in (dd-mm-yyyy) format:";
				cin>>dob;
				cout<<"Please Enter Your Age:";
				cin>>age;
				cout<<"Please Enter Your Phone Number:";
				cin>>phoneno;
				cout<<"Please Enter Your Home Address:";
				cin>>add;
				cout<<" "<<endl;
				cout<<"**************Thank You!******************"<<endl;
				cout<<" "<<endl;
			}
		void display()
			{
				cout<<" "<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"***********************Information Of The Tourist********************"<<endl;
				cout<<"---------------------------------------------------------------------"<<endl;
				cout<<"Name:"<<name<<endl;
				cout<<"Username:"<<username<<endl;
				cout<<"Date Of Birth:"<<dob<<endl;
				cout<<"Age:"<<age<<endl;
				cout<<"Phone Number:"<<phoneno<<endl;
				cout<<"Home Address:"<<add<<endl;
				cout<<"*****************You have successfully entered your information*****************"<<endl;
				cout<<" "<<endl;
			}
		void choose()
			{
				cout<<"Select your Preference:"<<endl;
				cout<<"1.International Packages"<<endl;
				cout<<"2.Domestic Packages"<<endl;
				cin>>x;
					if(x==1)
						{
						int op;
						float price;
						cout<<" "<<endl;
						cout<<"*********************Holiday Packages With Their Prices********************"<<endl;
						cout<<"---------------------------------------------------------------------------"<<endl;
						cout<<"1.Dubai"<<endl;
						cout<<"Price For Dubai Package:"<<60000<<endl;
						cout<<"price=60000"<<endl;
						cout<<"2.USA"<<endl;
						cout<<"Price For USA Package:"<<75000<<endl;
						cout<<"price=75000"<<endl;
						cout<<"3.France"<<endl;
						cout<<"Price For France Package:"<<80000<<endl;
						cout<<"price=80000"<<endl;
						cout<<"4.Greece"<<endl;
						cout<<"Price For Greece Package:"<<85000<<endl;
						cout<<"price=85000"<<endl;
						cout<<"5.Switzerland"<<endl;
						cout<<"Price For Switzerland Package:"<<75000<<endl;
						cout<<"price=75000"<<endl;
						cout<<"--------------------------------------------"<<endl;
						cout<<"Please Select Any Of The Package Of Your Choice:";
						cin>>op;
							if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
								{
									cout<<"You Have Selected The Package Of  "<<op<<endl;
								}
							else
								{
									cout<<"Please Enter a Valid Choice"<<endl;
									cout<<"1.Dubai"<<endl;
									cout<<"Price For Dubai Package:"<<60000<<endl;
									cout<<"price=60000"<<endl;
									cout<<"2.USA"<<endl;
									cout<<"Price For USA Package:"<<75000<<endl;
									cout<<"price=75000"<<endl;
									cout<<"3.France"<<endl;
									cout<<"Price For France Package:"<<80000<<endl;
									cout<<"price=80000"<<endl;
									cout<<"4.Greece"<<endl;
									cout<<"Price For Greece Package:"<<85000<<endl;
									cout<<"price=85000"<<endl;
									cout<<"5.Switzerland"<<endl;
									cout<<"Price For Switzerland Package:"<<75000<<endl;
									cout<<"price=75000"<<endl;
									cout<<"--------------------------------------------"<<endl;
									cout<<"Please Select Any Of The Package Of Your Choice:";
									cin>>op;
										if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
											{
												cout<<"You Have Selected The Package Of  "<<op<<endl;
											}
								}
							cout<<" "<<endl;
						}
					else if(x==2)
						{
							int op;
							float price;
							cout<<" "<<endl;
							cout<<"***************************Holiday Packages With Their Prices************************"<<endl;
							cout<<"-------------------------------------------------------------------------------------"<<endl;
							cout<<"1.Rajasthan"<<endl;
							cout<<"Price For Rajasthan Package:"<<6000<<endl;
							cout<<"price=6000"<<endl;
							cout<<"2.Goa"<<endl;
							cout<<"Price For Goa Package:"<<7500<<endl;
							cout<<"price=7500"<<endl;
							cout<<"3.Jammu and Kashmir"<<endl;
							cout<<"Price For Jammu and Kashmir Package:"<<8000<<endl;
							cout<<"price=8000"<<endl;
							cout<<"4.Delhi and Agra"<<endl;
							cout<<"Price For Delhi and Agra Package:"<<6500<<endl;
							cout<<"price=6500"<<endl;
							cout<<"5.Kerala"<<endl;
							cout<<"Price For Kerala Package:"<<5500<<endl;
							cout<<"price=5500"<<endl;
							cout<<"--------------------------------------------"<<endl;
							cout<<"Please Select Any Of The Package Of Your Choice:";
							cin>>op;
								if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
									{
										cout<<"You Have Selected The Package Of Your Destination Choice "<<op<<endl;
									}
								else
									{
										cout<<"Please Enter a Valid Choice"<<endl;
										cout<<"1.Rajasthan"<<endl;
										cout<<"Price For Rajasthan Package:"<<6000<<endl;
										cout<<"price=6000"<<endl;
										cout<<"2.Goa"<<endl;
										cout<<"Price For Goa Package:"<<7500<<endl;
										cout<<"price=7500"<<endl;
										cout<<"3.Jammu and Kashmir"<<endl;
										cout<<"Price For Jammu and Kashmir Package:"<<8000<<endl;
										cout<<"price=8000"<<endl;
										cout<<"4.Delhi and Agra"<<endl;
										cout<<"Price For Delhi and Agra Package:"<<6500<<endl;
										cout<<"price=6500"<<endl;
										cout<<"5.Kerala"<<endl;
										cout<<"Price For Kerala Package:"<<5500<<endl;
										cout<<"price=5500"<<endl;
										cout<<"--------------------------------------------"<<endl;
										cout<<"Please Select Any Of The Package Of Your Choice:";
										cin>>op;
											if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
												{
													cout<<"You Have Selected The Package Of Your Destination Choice "<<op<<endl;
												}
									}
								cout<<" "<<endl;
						}
					else
						{
							cout<<"Invalid Choice"<<endl;
							cout<<"Select your Prefernce:"<<endl;
							cout<<"1.International Packages"<<endl;
							cout<<"2.Domestic Packages"<<endl;
							cin>>x;
								if(x==1)
									{
										int op;
										float price;
										cout<<" "<<endl;
										cout<<"***************************Holiday Packages With Their Prices************************"<<endl;
										cout<<"-------------------------------------------------------------------------------------"<<endl;
										cout<<"1.Dubai"<<endl;
										cout<<"Price For Dubai Package:"<<60000<<endl;
										cout<<"price=60000"<<endl;
										cout<<"2.USA"<<endl;
										cout<<"Price For USA Package:"<<75000<<endl;
										cout<<"price=75000"<<endl;
										cout<<"3.France"<<endl;
										cout<<"Price For France Package:"<<80000<<endl;
										cout<<"price=80000"<<endl;
										cout<<"4.Greece"<<endl;
										cout<<"Price For Greece Package:"<<85000<<endl;
										cout<<"price=85000"<<endl;
										cout<<"5.Switzerland"<<endl;
										cout<<"Price For Switzerland Package:"<<75000<<endl;
										cout<<"price=75000"<<endl;
										cout<<"--------------------------------------------"<<endl;
										cout<<"Please Select Any Of The Package Of Your Choice:";
										cin>>op;
											if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
												{
													cout<<"You Have Selected The Package Of  "<<op<<endl;
												}
											else
												{
													cout<<"Please Enter a Valid Choice"<<endl;
													cout<<"1.Dubai"<<endl;
													cout<<"Price For Dubai Package:"<<60000<<endl;
													cout<<"price=60000"<<endl;
													cout<<"2.USA"<<endl;
													cout<<"Price For USA Package:"<<75000<<endl;
													cout<<"price=75000"<<endl;
													cout<<"3.France"<<endl;
													cout<<"Price For France Package:"<<80000<<endl;
													cout<<"price=80000"<<endl;
													cout<<"4.Greece"<<endl;
													cout<<"Price For Greece Package:"<<85000<<endl;
													cout<<"price=85000"<<endl;
													cout<<"5.Switzerland"<<endl;
													cout<<"Price For Switzerland Package:"<<75000<<endl;
													cout<<"price=75000"<<endl;
													cout<<"--------------------------------------------"<<endl;
													cout<<"Please Select Any Of The Package Of Your Choice:";
													cin>>op;
														if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
															{
																cout<<"You Have Selected The Package Of  "<<op<<endl;
															}
												}
											cout<<" "<<endl;
									}
								if(x==2)
									{
										int op;
										float price;
										cout<<" "<<endl;
										cout<<"***************************Holiday Packages With Their Prices************************"<<endl;
										cout<<"-------------------------------------------------------------------------------------"<<endl;
										cout<<"1.Rajasthan"<<endl;
										cout<<"Price For Rajasthan Package:"<<6000<<endl;
										cout<<"price=6000"<<endl;
										cout<<"2.Goa"<<endl;
										cout<<"Price For Goa Package:"<<7500<<endl;
										cout<<"price=7500"<<endl;
										cout<<"3.Jammu and Kashmir"<<endl;
										cout<<"Price For Jammu and Kashmir Package:"<<8000<<endl;
										cout<<"price=8000"<<endl;
										cout<<"4.Delhi and Agra"<<endl;
										cout<<"Price For Delhi and Agra Package:"<<6500<<endl;
										cout<<"price=6500"<<endl;
										cout<<"5.Kerala"<<endl;
										cout<<"Price For Kerala Package:"<<5500<<endl;
										cout<<"price=5500"<<endl;
										cout<<"--------------------------------------------"<<endl;
										cout<<"Please Select Any Of The Package Of Your Choice:";
										cin>>op;
											if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
												{
													cout<<"You Have Selected The Package Of Your Destination Choice "<<op<<endl;
												}
											else
												{
													cout<<"Please Enter a Valid Choice"<<endl;
													cout<<"1.Rajasthan"<<endl;
													cout<<"Price For Rajasthan Package:"<<6000<<endl;
													cout<<"price=6000"<<endl;
													cout<<"2.Goa"<<endl;
													cout<<"Price For Goa Package:"<<7500<<endl;
													cout<<"price=7500"<<endl;
													cout<<"3.Jammu and Kashmir"<<endl;
													cout<<"Price For Jammu and Kashmir Package:"<<8000<<endl;
													cout<<"price=8000"<<endl;
													cout<<"4.Delhi and Agra"<<endl;
													cout<<"Price For Delhi and Agra Package:"<<6500<<endl;
													cout<<"price=6500"<<endl;
													cout<<"5.Kerala"<<endl;
													cout<<"Price For Kerala Package:"<<5500<<endl;
													cout<<"price=5500"<<endl;
													cout<<"--------------------------------------------"<<endl;
													cout<<"Please Select Any Of The Package Of Your Choice:";
													cin>>op;
														if((op==1) || (op==2) || (op==3) || (op==4) || (op==5))
															{
																cout<<"You Have Selected The Package Of Your Destination Choice "<<op<<endl;
															}
												}
											cout<<" "<<endl;
										}
							}
			 }
};
class calculation:public tourism
{
public:
	void ticket()
		{
			int op,opt,no,cno,pin,otp,contact,select;
			char name[50];
			cout<<"--------------------------------------------------------------------"<<endl;
			cout<<"********************************************************************"<<endl;
			cout<<"1.Book Ticket"<<endl;
			cout<<"2.Cancel Ticket"<<endl;
			cout<<"3.Print Ticket"<<endl;
			cout<<"Please Click On Any Of The Options:";
			cin>>op;

				if(op==1)
				   {
				     cout<<"Your Booking is Processing. Please do the needful."<<endl;
				     cout<<"----------------------------------------------------------------"<<endl;
				     cout<<"1.Credit Card"<<endl;
				     cout<<"2.Debit Card"<<endl;
				     cout<<"3.UPI"<<endl;
				     cout<<"Please Choose the payment option from above: "<<endl;
				     cin>>opt;
					  if((opt==1) || (opt==2))
						{
						     cout<<"Please enter the Card Number: "<<endl;
						     cin>>cno;
						     cout<<"Please enter the name of the card holder: "<<endl;
						     cin>>name;
						     cout<<"Please enter the CVC given on your card: "<<endl;
						     cin>>pin;
						     cout<<"1.Submit"<<endl;
						     cout<<"2.Reset"<<endl;
						     cin>>no;
							  if (no==1)
							   {
							     cout<<"Please the otp send on ur mobile number: "<<endl;
							     cin>>otp;
							     cout<<"You have successfully booked your ticket!!"<<endl;
							   }
							  if (no==2)
							   {
							     cout<<"Please enter the Card Number: "<<endl;
							     cin>>cno;
							     cout<<"Please enter the name of the card holder: "<<endl;
							     cin>>name;
							     cout<<"Please enter the CVC given on your card: "<<endl;
							     cin>>pin;
							     cout<<"Please the otp send on ur mobile number: "<<endl;
							     cin>>otp;
							     cout<<"You have successfully booked your ticket!!"<<endl;
							   }
							  else
							  {
							      cout<<" "<<endl;
							    }
						  }
					if(opt==3)
					     {
						     cout<<"Please enter your mobile number: "<<endl;
						     cin>>contact;
						     cout<<"You have successfully booked your ticket!!"<<endl;
						     cout<<"Print ticket:"<<endl;
						     cout<<"1.Yes"<<endl;
						     cout<<"2.No"<<endl;
						     cin>>select;
							if (select==1)
								{
									cout<<"Your ticket is printed succesfully!"<<endl;
								}
							if (select==2)
								{
									cout<<"Check your message to get the ticket details."<<endl;
								}
							else
								{
									cout<<" "<<endl;
								}
					     }
					else
					    {
						     cout<<" "<<endl;
					    }
				}

			else if(op==2)
				{
				     cout<<"You have cancelled your booking, Rs.1200*-/- would be charged"<<endl;
			       }

			else if(op==3)
			      {
				     cout<<"You have to first do the payment and get the tickets."<<endl;
				     cout<<"----------------------------------------------------------------"<<endl;
				     cout<<"1.Credit Card"<<endl;
				     cout<<"2.Debit Card"<<endl;
				     cout<<"3.UPI"<<endl;
				     cout<<"Please Choose the payment option from above: "<<endl;
				     cin>>opt;
					if((opt==1) || (opt==2))
					   {
					      cout<<"Please enter the Card Number: "<<endl;
					      cin>>cno;
					      cout<<"Please enter the name of the card holder: "<<endl;
					      cin>>name;
					      cout<<"Please enter the CVC given on your card: "<<endl;
					      cin>>pin;
					      cout<<"1.Submit"<<endl;
					      cout<<"2.Reset"<<endl;
					      cin>>no;
							if (no==1)
							   {

								      cout<<"Please the otp send on ur mobile number: "<<endl;
							      cin>>otp;
							      cout<<"You have successfully booked your ticket!!"<<endl;
							   }
							if (no==2)
							   {
							     cout<<"Please enter the Card Number: "<<endl;
							     cin>>cno;
							     cout<<"Please enter the name of the card holder: "<<endl;
							     cin>>name;
							     cout<<"Please enter the CVC given on your card: "<<endl;
							     cin>>pin;
							     cout<<"Please the otp send on ur mobile number: "<<endl;
							     cin>>otp;
							     cout<<"You have successfully booked your ticket!!"<<endl;
							    }
							else
							    {
							      cout<<"Invalid option"<<endl;
							    }
					    }
					if(opt==3)
					    {
						     cout<<"Please enter your mobile number: "<<endl;
						     cin>>contact;
						     cout<<"You have successfully booked your ticket!!"<<endl;
						     cout<<"Print ticket:"<<endl;
						     cout<<"1.Yes"<<endl;
						     cout<<"2.No"<<endl;
						     cin>>select;
								if (select==1)
									{
										cout<<"Your ticket is printed succesfully!"<<endl;
									}
								if (select==2)
									{
										cout<<"Check your message to get the ticket details."<<endl;
									}
								else
									{
										cout<<" "<<endl;
									}
					   }
				      else
					   {
					      cout<<" "<<endl;
					   }
			}
		else
		   {
		      cout<<"Please Enter a valid option";
		   }
	}
};
class contact:public tourism
{
public:
void showcontact()
{
cout<<"*****************************************************************************"<<endl;
cout<<"For more inquires................"<<endl;
cout<<"Contact Us:25527933/25581089"<<endl;
cout<<"Contact Timings: 8 a.m to 8 p.m"<<endl;
cout<<"Address:Shop No.34,Carter Road,BandStand,Bandra(West),Mumbai."<<endl;
cout<<"Thank You For Using Our Service And Visit Again"<<endl;
cout<<" "<<endl;
}
};
void main()
{
clrscr();
tourists t[10];
calculation cl;
contact ct;
ct.input();
t[1].choose();
t[1].details();
for(int i=1;i<=t[1].n;i++)
{
t[i].getdata();
}
for(int j=1;j<=t[1].n;j++)
{
t[j].display();
}
cl.ticket();
ct.showcontact();
getch();
}