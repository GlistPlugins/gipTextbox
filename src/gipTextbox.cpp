/*
 * gipEmptyPlugin.cpp
 *
 *  Created on: july 7, 2023
 *      Author: Noyan Culum
 *      Created by: Batuhan Aydin
 */

#include "gipTextbox.h"

gipTextbox::gipTextbox() {
}

gipTextbox::~gipTextbox() {
}

void gipTextbox::setup() {
	image.loadImage("rdr2.jpg");
	sizerSetup(0, 0, 150, 500);
	textboxSetup();

}

void gipTextbox::draw() {
	image.draw(backgroundimagex, backgroundimagey, backgroundimagew, backgroundimageh);
	framesizer.draw();
}

void gipTextbox::textboxSetup() {



	maintextbox.setEditable(true);
	framesizer.setControl(0, 0, &maintextbox);
	framesizer.setControl(2, 2, &usertextbox);

}



void gipTextbox::sizerSetup(int sizerx, int sizery, int sizerw, int sizerh) {

	backgroundimagex = sizerx;
	backgroundimagey = sizery;
	backgroundimagew = sizerw;
	backgroundimageh = sizerh;
	framesizer.setSize(3, 3); //Sizer is divided into 3 column and .
	framesizer.enableBackgroundFill(false);
	framesizer.iscursoron = false;
	framesizer.left = 0;
	framesizer.top = 0;
	framesizer.setSlotPadding(0);
	framesizer.set(sizerx, sizery, sizerw, sizerh); // first location and the size of textbox frame.
	framesizer.enableBorders(false); //Sinir cizgileri kapatýldý.
	framesizer.enableResizing(false); //Boyutlari degistirilemez hale getirildi.

}

void gipTextbox::mousePressed(int x, int y, int button) {
	framesizer.mousePressed(x, y, 0); // 0 left mouse button, 1 right mouse button, 2 scroll button
}

void gipTextbox::mouseReleased(int x, int y, int button) {
	framesizer.mouseReleased(x, y, 0);
}

void gipTextbox::mouseDragged(int x, int y, int button) {
	framesizer.mouseDragged(x, y, 0);
}

void gipTextbox::mouseMoved(int x, int y) {
	framesizer.mouseMoved(x, y);
}

void gipTextbox::mouseScrolled(int x, int y) {
	framesizer.mouseScrolled(x, y);
}

void gipTextbox::mouseEntered() {
	framesizer.mouseEntered();
}

void gipTextbox::mouseExited() {
	framesizer.mouseExited();
}
