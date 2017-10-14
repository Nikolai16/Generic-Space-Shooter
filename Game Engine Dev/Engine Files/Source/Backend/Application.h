/*
	The Application class is responssible for putting everything together.
	it is the only entry point for the engine.  It intilizies everything and
	shuts it down later as well as keeps the main game loop going.
*/

class Application{

	//init will create each of the engine class variables to get the engine going
	//it makes sure all the parts of the engine initilize correctly before proceeding with teh game loop
	//also checks computer specs and makes sure that everything can be run without issue
	//after all checks come back perfect it starts the main loop and loads game world, 
	//actors and actor components.
	//main loop includes creating delta time each frame and running update for our scene (which is all our objects)
	//also includes rendering for our scene (from graphics class)
	//also checks to make sure the window has not gotten close event from window class if it does proceeds with shutdown
	//shutdown will run shutdown for all parts of engine. make sure they all close properly if not give diagnostics and close anyways.
	//finally removes process for windows.
};
