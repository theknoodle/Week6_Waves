#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
	
	grabber.setup(640, 480);
	
}

//--------------------------------------------------------------
void ofApp::update(){
	
	grabber.update();
	
}

//--------------------------------------------------------------
void ofApp::draw(){
	
	ofEnableDepthTest();
//	cam.enableOrtho();
	cam.begin();
	ofBackground(0);

//		grabber.draw(0, 0);
	
	ofPushMatrix();
	ofTranslate(grabber.getWidth() * -0.5, grabber.getHeight() * 0.5);
	
	for (int x = 0; x < grabber.getWidth(); x += 10) {
		for (int y = 0; y < grabber.getHeight(); y += 10) {
			
			int index = 3 * (y * grabber.getWidth() + x);
			unsigned char r = grabber.getPixels().getData()[index];
			unsigned char g = grabber.getPixels().getData()[index+1];
			unsigned char b = grabber.getPixels().getData()[index+2];
			
//			float depthR = r;
//			float depthG = g;
//			float depthB = b;
			
			ofColor myColor = ofColor(r, g, b);
			float z = myColor.getBrightness();
			
			ofSetColor(myColor);
			
			float wave = ofMap(sin(ofGetElapsedTimef()), -1, 1, 1, 5);
			
//			ofDrawRectangle(x, -y, z, wave, wave);
			ofDrawBox(x, -y, z, 5, 5, 5);
			
			
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
