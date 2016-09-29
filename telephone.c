#include <stdio.h>
main()
{
        char type;
        int coin,sec;
        int num,insert;//this holds the input number which to be called

        printf("\t \tPHONE BOX SIMULATOR \n");
        getchar();// this captures the RETURN button

        printf("please choose the call you wish to take\n"
                "\nlocal = L ,trunk = T , international =I\n"
                "\nplease input with a capital letter according to call type: ");
        type:
        scanf("%c",&type);
        getchar();

        //error check for input value of type of call
        if(type != 'L' && type != 'T' && type != 'I')
        {
	 printf("You entered the wrong input please choose only one between\n"
                "local = L ,trunk = T , international =I\nre-enter");
                goto type;
        }

        printf("please insert your coin now (insert only 5,10,20,50,100):");
        scanf("%d",&coin);
        //------------------------------------------------------------------
        //the part below is the one responsible for calculating how many seconds
        //you get for the coins inserted by the user
        //-----------------------------------------------------------------
        if( type == 'L')
        {
        sec=coin/2*4;
        }
        if( type == 'T')
        {
        sec=coin;
        }
        if( type == 'I')
        {
        sec=coin/2.5;
        }
	//------------------------------------------------------------------
        //part below checks if the condition is met when choosing the type
        //of call a user wishes to make 
        //------------------------------------------------------------------
        if( type == 'L')
        {
        printf("You have requested a call.\n"
               "The charge of the call for this type is: 10p per 20 sec \n");
        }

        if( type == 'T')
        {
        printf("You have requested a call.\n"
               "The charge of the call for this type is: 10p per 10 sec \n");
        }

        if( type == 'I')
        {
        printf("You have requested a call.\n"
               "The charge of the call for this type is: 10p per 4 sec \n");
        }
        //-----------------------------------------------------------------
        //this is where a user will enter the numbers he/she wishes to call
	//then the program will make the call
        //----------------------------------------------------------------
        printf("please dail the numbers you want to call \n");
        scanf("%d",&num);

        printf("Now dailing.........+27%d \n",num);
        system("sleep 3");

        printf("connected-Please start your conversation\n"
                "You have %d seconds of talking time \n",sec);
        system("sleep 1");
        //--------------------------------------------------
        //the loop below is the one responsible for counting down the
        //duration of the call 
        //--------------------------------------------------
        do{
        printf("remaining time %d\n",sec);
        sec--;
        sleep(1);
        }while (sec>0);
        //---------------------------------------------------------------
        printf("Time is up \n");
}


