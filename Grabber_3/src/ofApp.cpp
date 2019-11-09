#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
//	grabber.setup(640, 480);
	player.load("water2.MOV");
	
	vector <string> water;
	water.push_back("water1.MOV");
	water.push_back("water2.MOV");
	water.push_back("water3.MOV");
	water.push_back("water4.MOV");
	water.push_back("water5.MOV");
	water.push_back("water6.MOV");
	water.push_back("water7.MOV");
	water.push_back("water8.MOV");
	water.push_back("water9.MOV");
	
	clickNum = 0;

}

//--------------------------------------------------------------
void ofApp::update(){
	
//	grabber.update();
	player.update();
	player.play();
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofEnableDepthTest();
	//	cam.enableOrtho();
	cam.begin();
	ofBackground(0);
	
	
	ofPushMatrix();
	ofTranslate(player.getWidth() * -0.5, player.getHeight() * 0.5);
//	player.draw(0, 0);
//	player.draw(player.getWidth() * -0.5, player.getHeight() * -0.5);

	for (int x = 0; x < player.getWidth(); x += 10) {
		for (int y = 0; y < player.getHeight(); y += 10) {
			
			int index = 3 * (y * player.getWidth() + x);
			unsigned char r = player.getPixels().getData()[index];
			unsigned char g = player.getPixels().getData()[index+1];
			unsigned char b = player.getPixels().getData()[index+2];
			
			
			ofColor myColor = ofColor(r, g, b);
			float z = myColor.getBrightness();
			
			ofSetColor(myColor);
			
			float wave = ofMap(sin(ofGetElapsedTimef()), -1, 1, 1, 5);
			
			ofDrawBox(x, -y, z, 1 + r*0.01, 1 + g*0.01, 1 + b*0.01);
			
			
		}
	}
	
	ofPopMatrix();
	cam.end();
	
	
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){
	
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){
	
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){
	
//	clickNum =+ 1;
//	player.load(video[clickNum]);
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){
	
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){
	
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){
	
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){
	
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){
	
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){
	
}
