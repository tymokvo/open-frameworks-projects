#include "ofApp.h"
#include "math.h"

//--------------------------------------------------------------
void ofApp::setup()
{
    ofSetVerticalSync(true);

    panel.setup();
    panel.add(thetaSlider.setup("theta", 0, 0, 2 * PI));
    panel.add(radiusSlider.setup("radius", 0, 0, 10));

    startPoint = glm::vec3(10.0, 0, 0);
}

//--------------------------------------------------------------
void ofApp::update()
{
    theta = thetaSlider;
    radius = radiusSlider;

    // column-wise
    float c = cos(theta);
    float s = sin(theta);
    float n = -1 * s;
    float arr[16] = {
        c, s, 0, 0,
        n, c, 0, 0,
        0, 0, 0, 0,
        0, 0, 0, 1
    };

    transformation = glm::make_mat4x4(arr);

    endPoint = glm::vec3(transformation * glm::vec4(startPoint, 1.0));
}

//--------------------------------------------------------------
void ofApp::draw()
{
    ofBackground(0, 0, 0);
    panel.draw();

    ofEnableDepthTest();
    camera.begin();

    ofDrawGrid();

    ofDrawLine(glm::vec3(0), endPoint);

    ofDrawSphere(endPoint, radius);

    camera.end();
    ofDisableDepthTest();
}

//--------------------------------------------------------------
void ofApp::keyPressed(int key)
{
}

//--------------------------------------------------------------
void ofApp::keyReleased(int key)
{
}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button)
{
}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y)
{
}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h)
{
}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg)
{
}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo)
{ 
}