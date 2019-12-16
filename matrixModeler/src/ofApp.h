#pragma once

#include "ofMain.h"
#include "ofxGui.h"

class ofApp : public ofBaseApp
{
	public:
		void setup();
		void update();
		void draw();
		
		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y);
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
	private:
		ofEasyCam camera;
		ofLight light;
		glm::vec3 startPoint;
		glm::vec3 endPoint;
		glm::mat4x4 transformation;
		float theta;
		float radius;

		ofxFloatSlider thetaSlider;
		ofxFloatSlider radiusSlider;
		ofxPanel panel;
};
