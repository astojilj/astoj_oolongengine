/*
 *  transformInterpolator.h
 *  ReadBlend
 *
 *  Created by astoj@rocketmail.com on 1/12/11.
 *  Copyright 2011 astoj@rocketmail.com. All rights reserved.
 *
 */

#ifndef TRANSFORMINTERPOLATOR_H
#define TRANSFORMINTERPOLATOR_H

#include "Matrix.h"
#include "btQuaternion.h"

class TransformInterpolatorPrivate;

/*
 * TransformInterpolation is used for matrices animation  - sort of property animator.
 * Interpolating - animating values from one matrix to another using slerp for rotation and lerp for translation.
 * Combines MATRIX lerp and slerp, provides convenience step() and finished() to model animation interpolation
 */
class TransformInterpolator {
public:
	/* Interpolates values from @sa start matrix to @sa end matrix in given @sa numberOfSteps */
	TransformInterpolator(const MATRIX &start, const MATRIX &end, unsigned int numberOfSteps);
	virtual ~TransformInterpolator();
	
	/* current interpolated value, calculated in @sa step */
	virtual const MATRIX &current() const;
	
	/* calculates next value for @sa current, interpolating it from start to end matrices */ 
	void step();
	
	virtual bool finished() const;
	
	/* @brief Interpolation target could be moving while animating */
	void setEnd(const MATRIX &end);
		
private:
	TransformInterpolatorPrivate *d;
};

#endif