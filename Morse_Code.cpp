#include<iostream>
using namespace std;
int Encode();
int Decode()
{
	string message,word="";
	char morse_alphabet[26][5]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
								".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	char morse_number[10][6]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
	char morse_decode[100][6];
	cout<<"Enter the decoded message\n\nREMEMBER!!!\n\n1. Every letter should be space seperated.\n2. Place \'|\' at the end of each word.\n\n";
	cin.ignore();
	getline(cin,message);
	int j=0;
	cout<<"\nCode Successfully Decoded\n\n";
	for(int i=0;i<message.size();i++)
	{
		
		if(message[i]==' ')
		{
			for(j=0;j<26;j++)
			{
				if(j<=10)
				{
			if(word==morse_alphabet[j])
			{
				cout<<(char)(65+j);
			
			}
			else if(word==morse_number[j])
			{
				cout<<(char)(48+j);
				
			}
				}
		else
		{
			if(word==morse_alphabet[j])
			{
				cout<<(char)(65+j);
		
			}
			
		}
			}
		
			word="";
			
		}
		else if(message[i]=='|')
		{
			cout<<" ";
		}
		else
		{
			word=word+message[i];
		}
	}
	for(j=0;j<26;j++)
	{
		
		if(j<=10)
		{
			if(word==morse_alphabet[j])
			{
				cout<<(char)(65+j);
				
			}
			else if(word==morse_number[j])
			{
				cout<<(char)(48+j);
				
			}
			
		}
		else
		{
			if(word==morse_alphabet[j])
			{
				cout<<(char)(65+j);
				
			}
		
		}
	}
	char Another_Answer,Answer;
	cout<<"\n\nWant to Decode or Encode Another message ?\nType \'Y\' for Yes!\nType \'N\' for No!\n";
	cin>>Another_Answer;
	if(Another_Answer=='Y'||Another_Answer=='y')
	{
		cout<<"\nWant to Decode or Encode ?\nType \'E\' for Encode\nType \'D\' for Decode\n";
		cin>>Answer;
		if(Answer=='E'||Answer=='e')
		{
			return Encode();
		}
		else if(Answer=='D'||Answer=='d')
		{
			return Decode();
		}
		else
		{
			cout<<"\nError!!!\nYour input is incorrect.";
			return 0;
		}
	}
	else if(Another_Answer=='N'||Another_Answer=='n')
	{
		cout<<"\nOkay! Have a nice day.\nSigning out......\n";
		return 0;
	}
	else
	{
		cout<<"\nError!!!\nYour input is incorrect.";
		return 0;
	}
}
int Encode()
{
	string message;
	char morse_alphabet[26][5]={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",
								".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
	char morse_number[10][6]={"-----",".----","..---","...--","....-",".....","-....","--...","---..","----."};
	cout<<"Enter the message:\n";
	cin.ignore();
	getline(cin,message);
	cout<<"\n\nCode Successfully Encoded\n\n";
	for(int i=0;i<message.size();i++)
	{
		if(message[i]==' ')
		{
			cout<<"|";
		}
		else if(message[i]>='0'&&message[i]<='9')
		{		
			for(int j=48;j<=57;j++)
			{
				if(message[i]==(char)j)
				{
					cout<<" "<<morse_number[j-48]<<" ";
				}
			}
		}
		else if(message[i]>='A'&&message[i]<='Z')
		{
			for(int j=65;j<=90;j++)
			{
				if(message[i]==(char)j)
				{
					cout<<" "<<morse_alphabet[j-65]<<" ";
				}
			}
		}
		else if(message[i]>='a'&&message[i]<='z')
		{
			for(int j=97;j<=122;j++)
			{
				if(message[i]==(char)j)
				{
					cout<<" "<<morse_alphabet[j-97]<<" ";
				}
			}
		}
		else
		{
			cout<<"#";
		}
	}
	char Another_Answer,Answer;
	cout<<"\n\nWant to Decode or Encode Another message ?\nType \'Y\' for Yes!\nType \'N\' for No!\n";
	cin>>Another_Answer;
	if(Another_Answer=='Y'||Another_Answer=='y')
	{
		cout<<"\nWant to Decode or Encode ?\nType \'E\' for Encode\nType \'D\' for Decode\n";
		cin>>Answer;
		if(Answer=='E'||Answer=='e')
		{
			return Encode();
		}
		else if(Answer=='D'||Answer=='d')
		{
			return Decode();
		}
		else
		{
			cout<<"\nError!!!\nYour input is incorrect.";
			return 0;
		}
	}
	else if(Another_Answer=='N'||Another_Answer=='n')
	{
		cout<<"\nOkay! Have a nice day.\nSigning out......\n";
		return 0;
	}
	else
	{
		cout<<"\nError!!!\nYour input is incorrect.";
		return 0;
	}
}

int main()
{
	char Answer;
	cout<<"MORSE CODE TRANSLATOR:\n";
	cout<<"To Encode press\'E\'\nTo Decode press\'D\'\n";
	cin>>Answer;
	if(Answer=='E'||Answer=='e')
	{
		cout<<"You chose to Encode\n\n";
		Encode();
	}
	else if(Answer=='D'||Answer=='d')
	{
		cout<<"You chose to Decode\n\n";
		Decode();
	}
	else
	{
		cout<<"Error!!!\nYour input is incorrect.";
	}
	return 0;
}
