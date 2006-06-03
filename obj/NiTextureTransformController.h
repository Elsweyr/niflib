/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NITEXTURETRANSFORMCONTROLLER_H_
#define _NITEXTURETRANSFORMCONTROLLER_H_

#include "NiSingleInterpolatorController.h"
#include "Ref.h"
#include "obj/NiFloatData.h"

#include "gen/obj_defines.h"

/*
 * NiTextureTransformController
 */

class NiTextureTransformController;
typedef Ref<NiTextureTransformController> NiTextureTransformControllerRef;

class NiTextureTransformController : public NI_TEXTURE_TRANSFORM_CONTROLLER_PARENT {
public:
	NiTextureTransformController();
	~NiTextureTransformController();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_TEXTURE_TRANSFORM_CONTROLLER_MEMBERS
};

#endif