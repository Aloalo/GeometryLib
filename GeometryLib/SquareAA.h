#pragma once

#include "Surface.h"

enum AxisDirection
{
	XP,
	YP,
	ZP,
	XN,
	YN,
	ZN
};

class SquareAA :
	public Surface
{
public:
	Vector a;
	double d;
	AxisDirection dir;

	SquareAA(void);
	SquareAA(const Vector &_a, double _d, AxisDirection _dir);
	~SquareAA(void);

	Vector normal() const;
	Vector getVertex(int index) const;
	bool containsPoint(const Vector &v) const;
	bool containsPointInPlane(const Vector &v) const;

	virtual Vector getPos() const;
	void setPos(const Vector &_v);

private:
	static const Vector normals[6];
	static const Vector vertices[6][4];
};
