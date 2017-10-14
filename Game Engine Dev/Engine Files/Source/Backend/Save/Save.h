/*
	The save class will have functions meant for saving game state. it will have
	a few children all used for saving game state via different methods.
	Children include cloud save for saving files to the cloud, text save for
	saving games in a blank text file and XML save for saving game state in
	XML format.  
*/

//Save is an abstract class

class Save{

	//init will create a save file of the chosen type (based on class initlized) 
	//and test writing something to it to ensure it works as well as create mutex for it.
	//shutdown will unlock save file and make sure nothing can save to it from here on out (might also encrypt save file)
};
