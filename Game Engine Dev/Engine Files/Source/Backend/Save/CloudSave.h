/*
	Cloud save inherits from save and is used to save to the cloud
*/

class CloudSave : Save{

	//init will create a save file of the on a cloud server
	//and test writing something to it to ensure it works as well as create mutex for it.
	//shutdown will unlock save file and make sure nothing can save to it from here on out (might also encrypt save file)
};
