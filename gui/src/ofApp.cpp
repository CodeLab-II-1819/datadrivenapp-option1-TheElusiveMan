#include "ofApp.h"


void ofApp::setup(){
	
	//Getting the console to display the image
	image.load("BirdTwit.png");
	
	//Getting the console to display the font and declaring the font size for the whole project
	myFont.load("Quantify.ttf", 15);
}

//--------------------------------------------------------------
void ofApp::update(){

}

void ofApp::draw(){
	
	
	//------------------------------------------------------------------------------------------------------------------- Top bar/background and Topic Box
	//With the ofSetColor I declare the rgb values and cahnge the colour of any given component, as seen through my code that each component like the text and the boxes and the background have their own color values.
	//With ofDrawRectangle I get the console to draw and print a rectangle/square, based on the x,y,z coordinates that I dictate to them, and they will also be the size based on the relolution that you set in the main cpp.
	//The ofDrawRectangle is used throughout all of my gui and ofsetcolor, so there is no reason to repeat myself, but there are a fed differences, which I will explain.

	//Blue Background
	ofSetColor(101, 159, 203);
	ofDrawRectangle(1024, 768, -1024, -768);
	
	//White Bar 
	ofSetColor(255, 255, 255);
	ofDrawRectangle(1024, 129, -1024, -129);

	//This is exactly the same as the previous rectangle that I drew it ofDrawRectangle, however it does have one difference, and that is the fact that it contains ofGetHeight and ofGetWidts to change it's size and affect it's location
	//and once again the ofsetcolor toallow me to change the color of the component based on the rbg values.

	//Topic Box
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 -515, ofGetHeight() / 2 -225, 1025, 35);
	
	//------------------------------------------------------------------------------------------------------------------- Tweet Boxes
	
	//Message Box 01
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 -460, ofGetHeight() / 2 -160, 450, 35);

	//Message Box 02
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 -460, ofGetHeight() / 2 -110, 450, 35);

	//Message Box 03
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 -460, ofGetHeight() / 2 -60, 450, 35);

	//Message Box 04
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 2 -10, 450, 35);

	//Message Box 05
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 345, 450, 35);

	//Message Box 06
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 295, 450, 35);

	//Message Box 07
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 245, 450, 35);

	//Message Box 08
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 195, 450, 35);

	//Message Box 09
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 145, 450, 35);

	//Message Box 10
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 95, 450, 35);

	//Message Box 11
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 2 - 460, ofGetHeight() / 1 - 45, 450, 35);

	//Message Box 12
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 1 - 490, ofGetHeight() / 1 - 45, 450, 35);
	
	//------------------------------------------------------------------------------------------------------------------- Display Box

	//Topic Display Box for Twets
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 1 - 490, ofGetHeight() / 2 - 160, 450, 35);

	//Display Box for Twets
	ofSetColor(255, 255, 255);
	ofDrawRectangle(ofGetWidth() / 1 - 490, ofGetHeight() / 2 - 110, 450, 435);


	//Display Topic Message
	ofSetColor(0, 0, 0);
	myFont.drawString("Tweets Topic Displayed Here", 630, 247);
	
	//Display Tweets Message
	ofSetColor(0, 0, 0);
	myFont.drawString("Tweets Displayed Here", 660, 297);

	//------------------------------------------------------------------------------------------------------------------- Topic Messages 

	//Once again, we're using the ofsetcolor to change the colour of our set item that we are creating.
	//The drawString is used to display words onto the scren, but with my addition of myFont, I am able to draw what I written in the string, and load in a font, so it will be displayed in that font.
	//Topic Message 
	ofSetColor(0, 0, 0);
	myFont.drawString("What Intrests You Today?", 375, 180);
	
	//------------------------------------------------------------------------------------------------------------------- Tweets
	
	//Message 01
	ofSetColor(0, 0, 0);
	myFont.drawString("Display All Tweets?", 60, 247);

	//Message 02
	ofSetColor(0, 0, 0);
	myFont.drawString("Count All Tweets?", 60, 297);

	//Message 03
	ofSetColor(0, 0, 0);
	myFont.drawString("Count And Display Money Tweets?", 60, 347);

	//Message 04
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display Politics Tweets?", 60, 397);

	//Message 05
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display Paris Tweets?", 60, 447);

	//Message 06
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display DreamWorks Tweets?", 60, 497);

	//Message 07
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display Uber Tweets?", 60, 547);

	//Message 08
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display Chicken Tweets?", 60, 597);

	//Message 9
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display Games Tweets?", 60, 647);

	//Message 10
	ofSetColor(0, 0, 0);
	myFont.drawString("Cout And Display Bath Tweets", 60, 697);

	//Message 11
	ofSetColor(0, 0, 0);
	myFont.drawString("Input and count your own", 60, 747);

	//Message 12
	ofSetColor(0, 0, 0);
	myFont.drawString("Exit The Application?", 660, 747);

	//------------------------------------------------------------------------------------------------------------------- Images
	
	//Using the imahe.draw, to actually display the image and affect it's location parameters using the ofGetHeight, and ofGetWidth and then sizing it with the x, y, z, coordinates.
	//Using ofGetHeight and ofGetWidth to place and size up the drawn image, to suit my GUI 

	//Twitter Logo
	ofSetColor(255, 255, 255);
	image.draw(ofGetWidth()/2 -515, ofGetHeight()/2 -385, 200, 130);
}