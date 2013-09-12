//
//  ofxBillboard.h
//  ofxBillboard
//
//  Created by Elie Zananiri on 2013-08-26.
//  Adapted from the Lighthouse 3D Billboarding Tutorial by António Ramires Fernandes.
//  http://www.lighthouse3d.com/opengl/billboarding/
//

#pragma once

#include "ofMain.h"

void ofxBillboardBeginCylindrical(const ofVec3f& camPos, const ofVec3f& objPos);
void ofxBillboardBeginSpherical(const ofVec3f& camPos, const ofVec3f& objPos);
void ofxBillboardBeginCylindricalCheat(const ofVec3f& objPos);
void ofxBillboardBeginSphericalCheat(const ofVec3f& objPos);
void ofxBillboardEnd();
