 // Name: Justen Phillips
     // Course: CIS 006 Intro to programming
     // CRN: 20577
     // Date: 2/10/2017
     // Assignment: Number Guesser
     #include <iostream>
     #include <limits>
     //preproccesor initialization
     using namespace std;
    
    char readChar();// input checker prototype
    
    int main(void)
    {
      char guess, ask='y';  
    do{    
    int mid=50, min=1,max=100;
    
    	//if user wants to play again start from here
    //declare my ints for my binary search between 1 and 100
    do{     
    		cout << "Guess a number between 1 and 100. " << endl;
    		cout << "is it " << mid << "? (h/l/c): ";
    		cin >> guess;
    		cin.clear();
         	cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << guess << endl;
    //ask if guess was too high or too low
    	if(guess == 'h')
    	{//too high
    		min=mid+1;//reset the min as mid plus one
    		mid = (min+max)/2;//divide the mid + max by 2
    			if(mid>100)//if mid is more than 100 decrement
    				mid--;}//decrement
    	else if(guess == 'l'){//too low
    		max=mid-1;//reset the max as mid minus 1
    		mid = (min+max)/2;//divide the min + max by 2
    			if(mid<1)//if less than one increment
    				mid++;}//increment
    	else if(guess == 'c')//you must have the correct number
    		{continue;}//ask to play again
    	else
    	{
    	    cout << "invalid" << endl;
    	    
    	}   
    }while(guess != 'c');
    	cout << "Great! Do you want to play again? (y/n):";
    	cin >> ask;
    	cin.clear();
    	cin.ignore(numeric_limits<streamsize>::max(), '\n');
    	}while(ask!='n');//start from begining
    	//exit
    	return 0;
    	}
    
