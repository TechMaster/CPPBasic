#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){
    ofSetFrameRate(60);
    xofCube = 0;
    xVelocity = 5; //move right

}

//--------------------------------------------------------------
void ofApp::update(){

}

//--------------------------------------------------------------
void ofApp::draw(){
    xofCube += xVelocity;
    
    //Va vao tuong ben phai
    if (xofCube + widthOfCube > ofGetWidth()) {
        xVelocity = - xVelocity;  //bat nguoc lai
        xofCube = ofGetWidth() - widthOfCube;
    }
    //va vao tuong ben trai
    if (xofCube < 0) {
        xVelocity = - xVelocity;
        xofCube = 0;
    }
    
    
    ofSetColor(255,130,0);
    ofDrawRectangle(xofCube, 50, widthOfCube, widthOfCube);  //x, y, width, height
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
