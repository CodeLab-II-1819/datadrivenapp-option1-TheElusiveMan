#pragma once

#include "ofMain.h"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		//Declaring a variable, so that openframeworks can get the image from a file
		ofImage image;
	
		//Declaring a vraible for the font
		ofTrueTypeFont myFont;
};
