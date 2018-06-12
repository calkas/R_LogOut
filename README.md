.:: R_LogOut Console ::. 


Example:

#include <iostream>
#include "R_LogOut.hpp"

int main(int argc, char** argv) {
	
	R_LogOut Log;
	Log.Info("Hello");
	Log.Warn("Hello");
	Log.Error("Hello");
	Log.Debug("Hello");
	Log.Out("Hello");

	return 0;
}
