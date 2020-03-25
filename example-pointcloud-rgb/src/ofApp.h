#ifndef __OFAPP_H__
#define __OFAPP_H__
#include <vector>
#include "ofMain.h"
#include "ofxRSSDKv2.h"
#include "ofxGui.h"

using namespace std;
using namespace ofxRSSDK;

class ofApp : public ofBaseApp
{
public:
	void setup();
	void update();
	void draw();
	void exit();

	void keyPressed(int key);
	void keyReleased(int key);
	void mouseMoved(int x, int y );
	void mouseDragged(int x, int y, int button);
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void windowResized(int w, int h);
	void dragEvent(ofDragInfo dragInfo);
	void gotMessage(ofMessage msg);

private:
	void setupCamera();
	
	RSDevicePtr		realSense;	
	ofMesh			mCloudMesh;
	ofEasyCam		mCamera;

	ofxPanel gui_post;
	ofxPanel gui_device;

};

#endif
