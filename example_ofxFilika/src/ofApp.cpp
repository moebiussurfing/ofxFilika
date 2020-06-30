#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

	//player.setup("player_settings.xml");
	player.setup("player_settings.xml", false, false, true, true);
	player.enableInteraction();
	player.setNavBarAutoHide(true);
	//player.setVidBarFillColor(ofColor::blue);
	//player.setVidBarStrokeColor(ofColor::yellow);
	//player.setCoverImageFromVidFramePct(.5);

	player.setPlayVideo();
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
	player.draw();
	player.drawCover();

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){
	player.loadNext();
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
