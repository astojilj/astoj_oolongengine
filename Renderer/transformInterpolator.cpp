/*
 *  transformInterpolator.cpp
 *  ReadBlend
 *
 *  Created by astoj@rocketmail.com on 1/12/11.
 *  Copyright 2011 astoj@rocketmail.com. All rights reserved.
 *
 */

#include "transformInterpolator.h"

class TransformInterpolatorPrivate 
{
public:
	MATRIX startTransform;
	MATRIX endTransform;
	QUATERNION startRotation;
	QUATERNION endRotation;
 	mutable MATRIX currentTransform;
	
	unsigned int totalSteps;
	unsigned int currentStep;
};

TransformInterpolator::TransformInterpolator(const MATRIX &start, const MATRIX &end, unsigned int totalSteps)
: d(new TransformInterpolatorPrivate)
{
	d->totalSteps = totalSteps;
	d->currentStep = 0;
	d->startTransform = start;
    MatrixToQuaternion(d->startRotation, start);	
	setEnd(end);
}

TransformInterpolator::~TransformInterpolator()
{
	delete d;
}

/* lerp translation component */
static void MatrixTranslationLerp(MATRIX &mOut, const MATRIX &mStart, const MATRIX &mEnd, float t)
{
	for (int i = 12; i < 16; i++) {
		mOut.f[i] = mStart.f[i] + (mEnd.f[i] - mStart.f[i]) * t;
	}
}

const MATRIX &TransformInterpolator::current() const
{
	btScalar progress(1.0);
	if (d->totalSteps) {
		progress = (float)d->currentStep / (float)d->totalSteps;
	}
	
	QUATERNION qOut;
	MatrixQuaternionSlerp(qOut, d->startRotation, d->endRotation, progress);
	MatrixRotationQuaternion(d->currentTransform, qOut);
	MatrixTranslationLerp(d->currentTransform, d->startTransform, d->endTransform, progress);
	
	return d->currentTransform;
}

void TransformInterpolator::setEnd(const MATRIX &end)
{
	d->endTransform = end;
    MatrixToQuaternion(d->endRotation, end);	
}

void TransformInterpolator::step()
{
	d->currentStep++;
}

bool TransformInterpolator::finished() const
{
    return d->currentStep >= d->totalSteps;
}

