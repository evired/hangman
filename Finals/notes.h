easy: ponder delve mesa chalice monastery
	medium : arbiter preordain catacomb daze decay
	hard : dredge remand tabernacle neonate verdant

	(possibly needed)
	char easyChoice = what mode player chooses
	char medChoice = 
	char hardChoice = 
easyWords: easy words
medWords: medium words
	hardWords: hard words
	errorsMade = errors made by user




	declare dictionary kk 
	make initial vars kk?
	print array of boardstates
	prompt user
	ascii art man 
	win or loss
	play again?




	for (int i = 0; i <= 9; i++)
	{
		cin >> userArray[i];
	}
	  int b = 0;
	  cout << "What integer are you looking for?" << endl;
	  cin >> b;
	  int a = 0;
	  int i = 0;
	  for (i = 0; i <= 9; i++)
	  {
		  if (userArray[i] == b)
		  {
			  a = i;
			  bool d = true;
		  }
	  }
	  if (d = true)
		  cout << "Your number was in slot " << a << endl;
	  else
		  cout << "Your number was not found.";
}

{"           __________ /d"
"	       |         |/d"
"				     |/d"
"				     |/d"
"		    		 |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     | /d"
"				     |/d"
"		   __________|_______ /d",
"           __________ /d"
"	       |         |/d"
"		   0	     |/d"
"		   |	     |/d"
"					 |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     | /d"
"				     |/d"
"		   __________|_______ /d",
"           __________ /d"
"	       |         |/d"
"		   0	     |/d"
"	      -|	     |/d"
"					 |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     | /d"
"				     |/d"
"		   __________|_______ /d",
"           __________ /d"
"	       |         |/d"
"		   0	     |/d"
"	      -|-	     |/d"
"					 |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     | /d"
"				     |/d"
"		   __________|_______ /d",
"           __________ /d"
"	       |         |/d"
"		   0	     |/d"
"	      -|-	     |/d"
"		  /			 |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     | /d"
"				     |/d"
"		   __________|_______ /d",
"           __________ /d"
"	       |         |/d"
"		   0	     |/d"
"	      -|-	     |/d"
"		  /\		 |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     |/d"
"				     | /d"
"				     |/d"
"		   __________|_______ /d"}
boardstate above



















for (i = 0; i <= 9; i++)
{
	if (userArray[i] == b)
	{
		a = i;
		bool d = true;
	}
}
if (d = true)
	cout << "Your number was in slot " << a << endl;
else
	cout << "Your number was not found.";