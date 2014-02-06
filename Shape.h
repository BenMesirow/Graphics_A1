#ifndef SHAPE_H
#define SHAPE_H

#include <GL/glui.h>
#include "Algebra.h"

class Shape {
public:
	Shape() {
		for (int i = 0; i < 60; ++i) {
			for (int j = 0; j < 60; ++j) {
				faceCount[i][j] = 0;
				faceList[i][j] = NULL;
			}
		}
		vertexList = NULL;
		vertexCount = 0;
		normalList = NULL;
		radius = 0.5;
	};

	~Shape() {
		for (int i = 0; i < 60; ++i) {
			for (int j = 0; j < 60; ++j) {
				delete[] faceList[i][j];
			}
		}
		delete[] vertexList;
		delete[] normalList;
	};

	void setSegments(int x, int y) {
		m_segmentsX = x;
		m_segmentsY = y;
	}

	virtual void draw() {};
	virtual void drawNormal() {};

	virtual void drawBase() {};
	virtual void drawTop() {};
	virtual void drawLateralSurface() {};

protected:
	void normalizeNormal (float x, float y, float z) {
		normalizeNormal (Vector(x, y, z));
	};

	void normalizeNormal (Vector v) {
		v.normalize();
		glNormal3dv(v.unpack());
	};

	int m_segmentsX, m_segmentsY;
	int vertexCount;
	int faceCount[60][60];
	Point *vertexList;
	Vector *normalList;

	struct triangle {
		int indexA;
		int indexB;
		int indexC;
	} *faceList[60][60];

	double radius;
};

#endif
