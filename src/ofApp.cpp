#include "ofApp.h"
#include "../sun.h"
#include "../planet.h"

//--------------------------------------------------------------
void ofApp::setup(){
	this->sun = new Sun();
	this->sun->setmass(1000);
	this->sun->setx(ofGetWidth() / 2.0);
	this->sun->sety(ofGetHeight() / 2.0);
	font.load(OF_TTF_SANS, 9, true, true);

	this->planet = new Planet(this->sun);
	this->planet->setx(ofGetWidth() * 1/4);
	this->planet->sety(ofGetHeight() * 2/4);
	this->planet->setmass(10);
	this->planet->sety_vel(-1);
}

//--------------------------------------------------------------
void ofApp::update(){
	this->sun->tick(1);
	this->planet->tick(1);
}

//--------------------------------------------------------------
void ofApp::draw(){
	ofBackground(ofColor::darkGray);
	ofSetColor(255);
	font.drawString("fps: " + ofToString((int)ofGetFrameRate()), ofGetWidth() - 50, 20);
	ofSetColor(255, 204, 0);
	ofDrawCircle(this->sun->getx(), this->sun->gety(), 10);
	ofSetColor(0, 255, 0);
	ofDrawCircle(this->planet->getx(), this->planet->gety(), 5);
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
