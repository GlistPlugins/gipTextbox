/*
 * gipTextbox.h
 *
 *  Created on: july 7, 2023
 *      Author: Noyan Culum
 *      Created by: Batuhan Aydin
 */

#ifndef SRC_GIPTEXTBOX_H_
#define SRC_GIPTEXTBOX_H_

#include "gBasePlugin.h"
#include "gGUITextbox.h"
#include "gGUIFrame.h"
#include "gGUISizer.h"

class gipTextbox : public gBasePlugin{
public:
	gipTextbox();
	virtual ~gipTextbox();

	void setup();
	void draw();

	void mouseMoved(int x, int y );
	void mousePressed(int x, int y, int button);
	void mouseReleased(int x, int y, int button);
	void mouseDragged(int x, int y, int button);
	void mouseScrolled(int x, int y);
	void mouseEntered();
	void mouseExited();

	void textboxSetup();
	void sizerSetup(int sizerx, int sizery, int sizerw, int sizerh);

private:
	int backgroundimagex, backgroundimagey, backgroundimagew, backgroundimageh;
	gGUITextbox maintextbox, usertextbox;
	gGUISizer framesizer;
	gImage image;
};

#endif /* SRC_GIPTEXTBOX_H_ */
