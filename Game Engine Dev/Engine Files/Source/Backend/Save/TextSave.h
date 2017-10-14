/*
	TextSave inherits from save and is used to save game state localy using
	simple text file.  Users are responsible for creating their own pharsers
	to use with this class
*/

class TextSave : Save{

	//init will create a save file of the on a local disk location
	//and test writing something to it to ensure it works as well as create mutex for it.
	//shutdown will unlock save file and make sure nothing can save to it from here on out (might also encrypt save file)
};
