#pragma once

#include "ofMain.h"
#include "ofxSyphon.h"
#include "ofxGui.h"

# define NUM_LAYERS 7

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();
        void drawDebug();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    
    bool b_grid;
    
    // Alpha Effects
    ofShader shader_fbm;
    ofFbo fbo_fbm;
    
    ofShader shader_ripple;
    ofFbo fbo_ripple;
    
    ofxPanel gui_fbm;
    ofParameter<float> noiseScaleX, noiseScaleY, noiseIncrement1, noiseIncrement2, map1, map2, speed;
    ofParameter<int> bSmooth, octaves;
    ofParameter<bool> noise_draw;
    ofParameter<ofColor> back_color;
    ofParameter<float> band_width;
    ofPlanePrimitive plane, plane_ripple;
    
    ofShader shader_layers;
    ofFbo fbo_layers;
		
    ofImage layers[NUM_LAYERS];
    
    ofxSyphonServer syphon;
    ofEasyCam cam;
};
