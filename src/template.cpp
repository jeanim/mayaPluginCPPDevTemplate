#include "template.h"

MTypeId CameraFilter::id(0x00006666);

Template::Template() {
}

Template::Template() {}

void* Template::creator()
{
	return new Template();
}

MStatus Template::initialize()
{
	MStatus status;

	return MS::kSuccess;
}


MStatus Template::compute(const MPlug& plug, MDataBlock& data)
{
	MStatus status;

	return MS::kSuccess;
}
