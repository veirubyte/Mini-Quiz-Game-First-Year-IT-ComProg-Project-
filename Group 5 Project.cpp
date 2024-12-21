#include <iostream>
#include <string>
using namespace std;
void startSentence()
{
	cout<<" "<<endl;
	cout<<"<--------------------------------------------->"<<endl<<endl;
	cout<<"WELCOME TO: THE EZQUIZ (A Simple Quiz Game)"<<endl<<endl;
	cout<<"Rules:"<<endl;
	cout<<"1. Only small letters are accepted, using capital letters will not record your answer."<<endl;
	cout<<"2. Using other forms of answer like numbers and special characters will also not record your answer."<<endl;
	cout<<"3. You only have 3 lives."<<endl<<endl;
}
int main()
{
	string username, password, ppassword, pusername, start;
	char num1, num2, num3, num4, num5, num6, num7, num8, num9, num10, num11, num12, num13, num14, num15, num16, num17, num18, num19, num20, ans;
	int tot = 0;
	int life = 0;
	
	cout<<"As a new User, Please enter your desired Username and Password!"<<endl<<endl;
	cout<<"Please enter your desired Username: ";
	cin>>pusername;
	cout<<"Please enter your desired Password: ";
	cin>>ppassword;
	cout<<" "<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<"Done Saving Account!"<<endl;
	cout<<"-----------------------------------------------"<<endl<<endl;
	
	cout<<"--====Please Log-in to Access the Program====--"<<endl<<endl;
	cout<<"Enter Username: ";
	cin>>username;
	cout<<"Enter Password: ";
	cin>>password;
	
	
    while (username != pusername) 
	{
        cout<<"Username not found, Try Again."<<endl<<endl;
        cout<<"Enter the Username: ";
        cin>>username;
        cout<<"Enter Password: ";
		cin>>password;
		
        if(username == pusername)
        {
        	cout<<"User found"<<endl;
		}
		
        while(password!=ppassword)
		{
        	cout<<"Incorrect Password, Try Again."<<endl<<endl;
        	cout<<"Enter the Password: ";
        	cin>>password;
    	}
    }
    
    while (password != ppassword) 
	{
        cout<<"Password incorrect, Try Again."<<endl<<endl;
        cout<<"Enter the Username: ";
        cin>>username;
        cout<<"Enter Password: ";
		cin>>password;
		
	    if(password == ppassword)
        {
        	cout<<"Correct Password"<<endl;
		}
	}
    while(username!=pusername)
	{
        cout<<"User not found, Try Again."<<endl<<endl;
        cout<<"Enter the Username: ";
        cin>>username;
        cout<<"Enter Password: ";
		cin>>password;
		
		while (password != ppassword) 
		{
        	cout<<"Password incorrect, Try Again."<<endl<<endl;
        	cout<<"Enter the Username: ";
        	cin>>username;
        	cout<<"Enter Password: ";
			cin>>password;
    	}	
	} 
  	if ((pusername == username)&&(password==ppassword))
    {
    	cout<<" "<<endl;
		cout<<"--===========================================--"<<endl;
		cout<<" "<<endl;
		cout<<"-----------------------------------------------"<<endl;
		cout<<"Succesfully Logged in"<<endl;
		cout<<"-----------------------------------------------"<<endl<<endl;
		cout<<"Type - Y - to start the game: ";
		cin>>start;
		
		while (start != "Y")
		{
			cout<<"Type - Y - to start the game: ";
			cin>>start;
		}

	
		if (start == "Y")
		{
  			do 
			{
				life = 3;
				startSentence();
		
				cout<<"1. What is the chemical symbol for water?"<<endl<<endl;
				cout<<"a) H2O"<<endl;
				cout<<"b) CO2"<<endl;
				cout<<"c) NaCl"<<endl;
				cout<<"d) O2"<<endl;
				cout<<"Your answer: ";
				cin>>num1;
				cout<<" "<<endl;

				if(num1=='a')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num1!='a')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (a)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	
					
				cout<<"2. Who painted the Mona Lisa?"<<endl<<endl;
				cout<<"a) Michelangelo"<<endl;
				cout<<"b) Raphael"<<endl;
				cout<<"c) Leonardo da Vinci"<<endl;
				cout<<"d) Donatello"<<endl;
				cout<<"Your answer: ";
				cin>>num2;
				cout<<" "<<endl;
		
				if(num2=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}
				else if(num2!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	
		
				cout<<"3. What is the highest mountain in the world?"<<endl<<endl;
				cout<<"a) K2"<<endl;
				cout<<"b) Kangchenjunga"<<endl;
				cout<<"c) Mount Everest"<<endl;
				cout<<"d) Lhotse"<<endl;
				cout<<"Your answer: ";
				cin>>num3;
				cout<<" "<<endl;

				if(num3=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}
				else if(num3!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	
				
				if (life == 0)
				{
					goto endline;
				}
				cout<<"4. In what year did World War II begin?"<<endl<<endl;
				cout<<"a) 1914"<<endl;
				cout<<"b) 1939"<<endl;
				cout<<"c) 1945"<<endl;
				cout<<"d) 1918"<<endl;
				cout<<"Your answer: ";
				cin>>num4;
				cout<<" "<<endl;
		
				if(num4=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num4!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	
				
				if (life == 0)
				{
					goto endline;
				}						
				cout<<"5. What is the capital of France?"<<endl<<endl;
				cout<<"a) Rome"<<endl;
				cout<<"b) Berlin"<<endl;
				cout<<"c) Paris"<<endl;
				cout<<"d) Madrid"<<endl;
				cout<<"Your answer: ";
				cin>>num5;
				cout<<" "<<endl;
		
				if(num5=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num5!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}								
				cout<<"6. Who wrote Hamlet?"<<endl<<endl;
				cout<<"a) William Shakespeare"<<endl;
				cout<<"b) Jane Austen"<<endl;
				cout<<"c) Charles Dickens"<<endl;
				cout<<"d) Leo Tolstoy"<<endl;
				cout<<"Your answer: ";
				cin>>num6;
				cout<<" "<<endl;
		
				if(num6=='a')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num6!='a')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (a)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}								
				cout<<"7. What is the largest planet in our solar system"<<endl<<endl;
				cout<<"a) Mars"<<endl;
				cout<<"b) Earth"<<endl;
				cout<<"c) Jupiter"<<endl;
				cout<<"d) Saturn"<<endl;
				cout<<"Your answer: ";
				cin>>num7;
				cout<<" "<<endl;
		
				if(num7=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num7!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}							
				cout<<"8. What is the name of Earth's only natural satellite?"<<endl<<endl;
				cout<<"a) Phobos"<<endl;
				cout<<"b) Deimos"<<endl;
				cout<<"c) The Moon"<<endl;
				cout<<"d) Titan"<<endl;
				cout<<"Your answer: ";
				cin>>num8;
				cout<<" "<<endl;
		
				if(num8=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num8!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}							
				cout<<"9. What is the chemical symbol for gold?"<<endl<<endl;
				cout<<"a) Ag"<<endl;
				cout<<"b) Fe"<<endl;
				cout<<"c) Au"<<endl;
				cout<<"d) Hg"<<endl;
				cout<<"Your answer: ";
				cin>>num9;
				cout<<" "<<endl;
		
				if(num9=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}
				else if(num9!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}									
				cout<<"10. What is the name of the longest river in the world?"<<endl<<endl;
				cout<<"a) Amazon River"<<endl;
				cout<<"b) Nile River"<<endl;
				cout<<"c) Yangtze River"<<endl;
				cout<<"d) Mississippi River"<<endl;
				cout<<"Your answer: ";
				cin>>num10;
				cout<<" "<<endl;
		
				if(num10=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num10!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}								
				cout<<"11. Who is the author of Pride and Prejudice?"<<endl<<endl;
				cout<<"a) Charlotte Bronte"<<endl;
				cout<<"b) Emily Bronte"<<endl;
				cout<<"c) Jane Austen"<<endl;
				cout<<"d) George Eliot"<<endl;
				cout<<"Your answer: ";
				cin>>num11;
				cout<<" "<<endl;
		
				if(num11=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num11!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}							
				cout<<"12. What is the smallest country in the world?"<<endl<<endl;
				cout<<"a) Monaco"<<endl;
				cout<<"b) Vatican City"<<endl;
				cout<<"c) Nauru"<<endl;
				cout<<"d) Tuvalu"<<endl;
				cout<<"Your answer: ";
				cin>>num12;
				cout<<" "<<endl;
		
				if(num12=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num12!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}								
				cout<<"13. In what year did the Titanic sink?"<<endl<<endl;
				cout<<"a) 1910"<<endl;
				cout<<"b) 1912"<<endl;
				cout<<"c) 1915"<<endl;
				cout<<"d) 1918"<<endl;
				cout<<"Your answer: ";
				cin>>num13;
				cout<<" "<<endl;
		
				if(num13=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num13!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}							
				cout<<"14. What is the name of the largest ocean?"<<endl<<endl;
				cout<<"a) Atlantic Ocean"<<endl;
				cout<<"b) Indian Ocean"<<endl;
				cout<<"c) Arctic Ocean"<<endl;
				cout<<"d) Pacific Ocean"<<endl;
				cout<<"Your answer: ";
				cin>>num14;
				cout<<" "<<endl;
		
				if(num14=='d')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num14!='d')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (d)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}							
				cout<<"15. What is the capital of Australia?"<<endl<<endl;
				cout<<"a) Sydney"<<endl;
				cout<<"b) Melbourne"<<endl;
				cout<<"c) Canberra"<<endl;
				cout<<"d) Brisbane"<<endl;
				cout<<"Your answer: ";
				cin>>num15;
				cout<<" "<<endl;
		
				if(num15=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num15!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}							
				cout<<"16. Who developed the theory of relativity?"<<endl<<endl;
				cout<<"a) Isaac Newton"<<endl;
				cout<<"b) Albert Einstein"<<endl;
				cout<<"c) Galileo Galilei"<<endl;
				cout<<"d) Marie Curie"<<endl;
				cout<<"Your answer: ";
				cin>>num16;
				cout<<" "<<endl;
		
				if(num16=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num16!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}								
				cout<<"17. What is the name of the largest desert in the world?"<<endl<<endl;
				cout<<"a) Sahara Desert"<<endl;
				cout<<"b) Arabian Desert"<<endl;
				cout<<"c) Gobi Desert"<<endl;
				cout<<"d) Antarctic Desert"<<endl;
				cout<<"Your answer: ";
				cin>>num17;
				cout<<" "<<endl;
		
				if(num17=='d')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}
				else if(num17!='d')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (d)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}									
				cout<<"18. What is the name of the tallest building in the world? (as of October 26, 2023)"<<endl<<endl;
				cout<<"a) Shanghai Tower"<<endl;
				cout<<"b) Burj Khalifa"<<endl;
				cout<<"c) Abraj Al-Bait Clock Tower"<<endl;
				cout<<"d) Ping An Finance Centre"<<endl;
				cout<<"Your answer: ";
				cin>>num18;
				cout<<" "<<endl;
		
				if(num18=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}	
				else if(num18!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}				
				cout<<"19. What is the name of the currency used in Japan?"<<endl<<endl;
				cout<<"a) Won"<<endl;
				cout<<"b) Yuan"<<endl;
				cout<<"c) Yen"<<endl;
				cout<<"d) Rupee"<<endl;
				cout<<"Your answer: ";
				cin>>num19;
				cout<<" "<<endl;
		
	    		if(num19=='c')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}
				else if(num19!='c')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (c)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	

				if (life == 0)
				{
					goto endline;
				}					
				cout<<"20. Who painted The Starry Night?"<<endl<<endl;
				cout<<"a) Claude Monet"<<endl;
				cout<<"b) Vincent van Gogh"<<endl;
				cout<<"c) Pablo Picasso"<<endl;
				cout<<"d) Edvard Munch"<<endl;
				cout<<"Your answer: ";
				cin>>num20;
				cout<<" "<<endl;
		
				if(num20=='b')
				{
					tot = tot + 1;
					cout<<"Correct Answer!"<<endl<<endl;
				}
				else if(num20!='b')
				{
					life = life - 1;
					cout<<"You got a wrong answer, the answer should be (b)"<<endl;
					cout<<"You only have: "<<life<<" live(s) remaining."<<endl<<endl;
				}	
				if (life == 0)
				{
					goto endline;
				}					
				if (tot == 20)
				{
					cout<<"Congratulations you got a perfect score of 20!!"<<endl<<endl;
				}
				
				else if (tot != 20)
				{
					cout<<"!----------------------- Your score is: "<<tot<<" -----------------------!"<<endl<<endl;
				}
			
				tot = 0;
				
				cout<<"Do you want to try again? Type - Y - or - y - for Yes and type anything for No"<<endl;
				cout<<"Your answer: ";
				cin>>ans;
				cout<<" "<<endl<<endl;
				
				endline:
					if (life == 0)
					{	
						cout<<"!----------------------- Your score is: "<<tot<<" -----------------------!"<<endl<<endl;
						life = 0;
						tot = 0;
						cout<<"You have used up all your lives"<<endl<<endl;
						cout<<"Do you want to try again? Type - Y - or - y - for Yes and type anything for No"<<endl;
						cout<<"Your answer: ";
						cin>>ans;
						cout<<" "<<endl<<endl;
					}
			} while((ans=='Y')||(ans=='y'));
		}
	}
	return 0;
}