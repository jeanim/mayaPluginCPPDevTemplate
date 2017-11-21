#ifndef TEMPLATE_H
#define	TEMPLATE_H

#include <maya/MDataBlock.h>
#include <maya/MDataHandle.h>
#include <maya/MIOStream.h>
#include <maya/MObject.h>
#include <maya/MPxNode.h>
#include <maya/MString.h>
#include <maya/MStatus.h>
#include <maya/MTypeId.h>

class Template : public MPxNode
{
public:
	Template();
	virtual ~Template();

	virtual MStatus				compute(const MPlug& plug, MDataBlock& data);

	static void *				creator();
	static MStatus				initialize();
public:
	static MTypeId				id;
};

#endif
