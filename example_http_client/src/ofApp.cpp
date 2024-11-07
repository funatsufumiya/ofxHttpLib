#include "ofApp.h"

// need this to SSL support, however, openssl is not included in this lib
// if you really need, you have to config openssl lib by yourself
//#define CPPHTTPLIB_OPENSSL_SUPPORT

#include "httplib.h"

//--------------------------------------------------------------
void ofApp::setup(){
	ofLogToConsole();

	//httplib::Client cli("https://httpbin.org");
	httplib::Client cli("http://httpbin.org");

	auto res = cli.Get("/ip");

	if (res) {
		ofLogNotice("ofApp") << "res->status = " << res->status;
		ofLogNotice("ofApp") << "res->body = " << res->body;
	} else {
		ofLogError("ofApp") << "error: " << res.error();
	}
}

//--------------------------------------------------------------
void ofApp::update(){
}

//--------------------------------------------------------------
void ofApp::draw(){
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
