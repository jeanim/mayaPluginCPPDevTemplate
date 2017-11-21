#include "template.h"
#include <maya/MFnPlugin.h>

MStatus initializePlugin(MObject obj)
{
	MStatus status;

	MFnPlugin fnPlugin(obj, "Template", "1.0", "Any");

	status = fnPlugin.registerNode("template", Template::id,
		Template::creator, Template::initialize, MPxNode::kDependNode);
	CHECK_MSTATUS_AND_RETURN_IT(status);

	return MS::kSuccess;
}

MStatus uninitializePlugin(MObject obj)
{
	MStatus status;

	MFnPlugin fnPlugin(obj);
	status = fnPlugin.deregisterNode(Template::id);
	CHECK_MSTATUS_AND_RETURN_IT(status);
	
	return MS::kSuccess;
}
