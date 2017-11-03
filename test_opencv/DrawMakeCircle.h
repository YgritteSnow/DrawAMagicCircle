#pragma once
#include <opencv2/opencv.hpp>

#include "MakeCircle.h"
#include "RichPolygon.h"

/************************************************************************/
/*                                                                      */
/************************************************************************/

class DrawPolygonRaw
{
public:
	DrawPolygonRaw() {};
	~DrawPolygonRaw() {};
public:
	// ���ƶ����
	static void Draw(const PolygonRaw* polygon);
	static void Draw(RichPolygon* rich);
};