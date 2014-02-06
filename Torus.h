#ifndef SPHERE_H
#define SPHERE_H

#include "Shape.h"
#include "tess.h"

#define INNER_RADIUS        0.25
#define OUTER_RADIUS        0.5
#define TRANSVERSE_RADIUS   ((OUTER_RADIUS - INNER_RADIUS) / 2)
#define TRANSVERSE_CENTER   ((OUTER_RADIUS + INNER_RADIUS) / 2)

class Sphere : public Shape {
public:
    Sphere() {};
    ~Sphere() {};

    void draw() {
        glBegin(GL_TRIANGLES);

        for (float slice = 0; slice < m_segmentsX, ++slice) {
            Point centroid1(TRANSVERSE_RADIUS * cos(2 * PI * slice / m_segmentsX),
                            0
                            TRANSVERSE_RADIUS * sin(2 * PI * slice / m_segmentsX));
            Point centroid2(TRANSVERSE_RADIUS * cos(2 * PI * (slice + 1.0) / m_segmentsX),
                            0
                            TRANSVERSE_RADIUS * sin(2 * PI * (slice + 1.0) / m_segmentsX));
            for (float stack = 0; stack < m_segmentsY; ++stack) {
                Point p1(), p2(), p3(), p4();

            }
        }
        
        glEnd();
    };

    void drawNormal() {
        
    };
};

#undef PHI
#undef THETA
#undef RHO

#endif
