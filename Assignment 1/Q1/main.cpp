// Charlie Orch
// A04751172
#include <iostream>
#include <string>
#include "myStack.h"
#include <stdio.h>
#include <ctype.h>
#include <climits>
using namespace std;

int main()
{
  cout<<"***************************************************************** "<<endl;
	cout<<"*************** postfix mini calculator ************************* "<<endl;
	cout<<"***************************************************************** "<<endl;


	//Todo: Create numberTwoour stack
	myStack <char> theStack;

	char inputItem; //User input
	bool flag=true;

	while(true)
	{
        cout<<"Enter your input items. Then enter 'c' at the end of your input line!"<<endl;
        cout<<"Enter 'H' to halt the program at any time!"<<endl;

        while(flag)
        {
                cin>>inputItem;
                if(inputItem=='H')
                {
                    cout<<"***************************************************************** "<<endl;
                    cout<<"***************************************************************** "<<endl;
                    cout<<"***************************************************************** "<<endl;
                    return 0;
                }

                else if(inputItem=='c')
                {
                    //Todo:
                            //1) Check if the input line is in the correct format.
                            //2) If true, compute the theResults based on the algorithm and print for the user.
                            //3) Otherwise, print a meaningful error message and pop all items of the stack.
                            int theResult = theStack.pop();
                            cout << "The final result is " << theResult << endl;
                            flag=false;

                }

                else if(isspace(inputItem)) //skip space characters
                {
                                continue;
                }

                else if((inputItem=='+')||(inputItem=='/')||(inputItem=='-')||(inputItem=='*'))
                {
                		//Todo:
                        	//Follow the steps mentioned in the algorithm for operators.
                        	int numberOne = theStack.pop();
                        	int numberTwo = theStack.pop();
                        	int theResult;

                        	switch (inputItem)
                        	{
                        	    case '+':
                                    theResult = numberOne + numberTwo;
                                    theStack.push(theResult);
                                    break;
                        	    case '/':
                        	        theResult = numberOne / numberTwo;
                                  theStack.push(theResult);
                                    break;
                        	    case '-':
                        	        theResult = numberOne - numberTwo;
                                  theStack.push(theResult);
                                    break;
                        	    case '*':
                        	        theResult = numberOne * numberTwo;
                                  theStack.push(theResult);
                                    break;
                                default:
                                    theResult = 0;
                                    break;
                        	}

                        	theStack.push(theResult);
                }

                else
                {

                    int num= inputItem-'0';
                    if((num>=0)&&(num<=9))
                    {
                    	//Todo:
                        	//Follow the steps mentioned in the algorithm for integer values.
                        	theStack.push(num);
                    }
                    else
                    {
                            cout<<"Invalid input line!!!"<<endl;
                            flag=false;
                            //Todo:
                            	//Pop all input items
                              for(int x=0; x < num; x++){
                                theStack.pop();
                              }
                            while ((getchar() != '\n')); //flush the buffer
                    }
                }
            }
        flag=true;
	}
}
