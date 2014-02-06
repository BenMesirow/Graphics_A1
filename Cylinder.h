#ifndef CYLINDER_H
#define CYLINDER_H

#include "Shape.h"
#include "tess.h"

class Cylinder : public Shape {
public:
	Cylinder() {};
	~Cylinder() {};

	void draw() {
		glBegin(GL_TRIANGLES);		

		for (int i = 0; i < m_segmentsX; ++i) {

			float lowerX = ithSliceXComponent(0.5,i,m_segmentsX);
			float upperX = ithSliceXComponent(0.5,i+1,m_segmentsX);
			float lowerZ = ithSliceZComponent(0.5,i,m_segmentsX);
			float upperZ = ithSliceZComponent(0.5,i+1,m_segmentsX);

			/* bottom base */
			glVertex3f(0.0, -0.5, 0.0);
			glVertex3f(upperX,-0.5,upperZ);
			glVertex3f(lowerX,-0.5,lowerZ);

			for (float y = 0.0; y < m_segmentsY; ++y) {

				float lowerY = -0.5 + y / m_segmentsY;
				float upperY = -0.5 + (y + 1.0) / m_segmentsY; 

				glVertex3f(lowerX,lowerY,lowerZ);
				glVertex3f(upperX,lowerY,upperZ);
				glVertex3f(lowerX,upperY,lowerZ);
				glVertex3f(lowerX,upperY,lowerZ);
				glVertex3f(upperX,lowerY,upperZ);
				glVertex3f(upperX,upperY,upperZ);
			}			

			/* top base */
			glVertex3f(0.0, 0.5, 0.0);
			glVertex3f(lowerX,0.5,lowerZ);
			glVertex3f(upperX,0.5,upperZ);
		}
		glEnd();
	};

	void drawNormal() {
	};
};

#endif
