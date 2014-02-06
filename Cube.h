#ifndef CUBE_H
#define CUBE_H

#include "Shape.h"

class Cube : public Shape {
public:
	Cube() {};
	~Cube() {};

	void draw() {
		glBegin(GL_TRIANGLES);

		for (float x = 0; x < m_segmentsX; ++x) {
			for (float y = 0; y < m_segmentsY; ++y) {
					/* front face */
				glVertex3f(-0.5+x/m_segmentsX,-0.5+y/m_segmentsY,0.5);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,-0.5+y/m_segmentsY,0.5);
				glVertex3f(-0.5+x/m_segmentsX,-0.5+(y+1.0)/m_segmentsY,0.5);
				glVertex3f(-0.5+x/m_segmentsX,-0.5+(y+1.0)/m_segmentsY,0.5);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,-0.5+y/m_segmentsY,0.5);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,-0.5+(y+1.0)/m_segmentsY,0.5);
					/* right face */
				glVertex3f(0.5,-0.5+y/m_segmentsY,0.5-x/m_segmentsX);
				glVertex3f(0.5,-0.5+y/m_segmentsY,0.5-(x+1.0)/m_segmentsX);
				glVertex3f(0.5,-0.5+(y+1.0)/m_segmentsY,0.5-x/m_segmentsX);
				glVertex3f(0.5,-0.5+(y+1.0)/m_segmentsY,0.5-x/m_segmentsX);
				glVertex3f(0.5,-0.5+y/m_segmentsY,0.5-(x+1.0)/m_segmentsX);
				glVertex3f(0.5,-0.5+(y+1.0)/m_segmentsY,0.5-(x+1.0)/m_segmentsX);
					/* back face */
				glVertex3f(0.5-x/m_segmentsX,-0.5+y/m_segmentsY,-0.5);
				glVertex3f(0.5-(x+1.0)/m_segmentsX,-0.5+y/m_segmentsY,-0.5);
				glVertex3f(0.5-x/m_segmentsX,-0.5+(y+1.0)/m_segmentsY,-0.5);
				glVertex3f(0.5-x/m_segmentsX,-0.5+(y+1.0)/m_segmentsY,-0.5);
				glVertex3f(0.5-(x+1.0)/m_segmentsX,-0.5+y/m_segmentsY,-0.5);
				glVertex3f(0.5-(x+1.0)/m_segmentsX,-0.5+(y+1.0)/m_segmentsY,-0.5);
					/* left face */
				glVertex3f(-0.5,-0.5+y/m_segmentsY,-0.5+x/m_segmentsX);
				glVertex3f(-0.5,-0.5+y/m_segmentsY,-0.5+(x+1.0)/m_segmentsX);
				glVertex3f(-0.5,-0.5+(y+1.0)/m_segmentsY,-0.5+x/m_segmentsX);
				glVertex3f(-0.5,-0.5+(y+1.0)/m_segmentsY,-0.5+x/m_segmentsX);
				glVertex3f(-0.5,-0.5+y/m_segmentsY,-0.5+(x+1.0)/m_segmentsX);
				glVertex3f(-0.5,-0.5+(y+1.0)/m_segmentsY,-0.5+(x+1.0)/m_segmentsX);
			}
			for (float z = 0; z < m_segmentsX; ++z) {
					/* top face */
				glVertex3f(-0.5+x/m_segmentsX,0.5,0.5-z/m_segmentsX);
				glVertex3f(-0.5+x/m_segmentsX,0.5,0.5-(z+1.0)/m_segmentsX);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,0.5,0.5-z/m_segmentsX);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,0.5,0.5-z/m_segmentsX);
				glVertex3f(-0.5+x/m_segmentsX,0.5,0.5-(z+1.0)/m_segmentsX);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,0.5,0.5-(z+1.0)/m_segmentsX);
					/* bottom face */
				glVertex3f(-0.5+x/m_segmentsX,-0.5,-0.5+z/m_segmentsX);
				glVertex3f(-0.5+x/m_segmentsX,-0.5,-0.5+(z+1.0)/m_segmentsX);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,-0.5,-0.5+z/m_segmentsX);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,-0.5,-0.5+z/m_segmentsX);
				glVertex3f(-0.5+x/m_segmentsX,-0.5,-0.5+(z+1.0)/m_segmentsX);
				glVertex3f(-0.5+(x+1.0)/m_segmentsX,-0.5,-0.5+(z+1.0)/m_segmentsX);
			}
		}

		glEnd();
	};

	void drawNormal() {
		glBegin(GL_LINES);
		for (float x = 0; x < m_segmentsX; ++x) {
			for (float y = 0; y < m_segmentsY; ++y) {
					/* front face */
				glVertex3f(-0.5+x/m_segmentsX,-0.5+y/m_segmentsY,0.5);
				glVertex3f(-0.5+x/m_segmentsX,-0.5+y/m_segmentsY,1.5);
					/* right face */
				glVertex3f(0.5,-0.5+y/m_segmentsY,0.5-x/m_segmentsX);
				glVertex3f(1.5,-0.5+y/m_segmentsY,0.5-x/m_segmentsX);
					/* back face */
				glVertex3f(0.5-x/m_segmentsX,-0.5+y/m_segmentsY,-0.5);
				glVertex3f(0.5-x/m_segmentsX,-0.5+y/m_segmentsY,-1.5);
					/* left face */
				glVertex3f(-0.5,-0.5+y/m_segmentsY,-0.5+x/m_segmentsX);
				glVertex3f(-1.5,-0.5+y/m_segmentsY,-0.5+x/m_segmentsX);
			}
			for (float z = 0; z < m_segmentsX; ++z) {
					/* top face */
				glVertex3f(-0.5+x/m_segmentsX,0.5,0.5-z/m_segmentsX);
				glVertex3f(-0.5+x/m_segmentsX,1.5,0.5-z/m_segmentsX);
					/* bottom face */
				glVertex3f(-0.5+x/m_segmentsX,-0.5,-0.5+z/m_segmentsX);
				glVertex3f(-0.5+x/m_segmentsX,-1.5,-0.5+z/m_segmentsX);
			}
		}
		glEnd();
	};
};

#endif
