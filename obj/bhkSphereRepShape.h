/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _BHKSPHEREREPSHAPE_H_
#define _BHKSPHEREREPSHAPE_H_

#include "bhkShape.h"

#include "gen/obj_defines.h"

/*
 * bhkSphereRepShape
 */

class bhkSphereRepShape;
typedef Ref<bhkSphereRepShape> bhkSphereRepShapeRef;

class bhkSphereRepShape : public BHK_SPHERE_REP_SHAPE_PARENT {
public:
	bhkSphereRepShape();
	~bhkSphereRepShape();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	BHK_SPHERE_REP_SHAPE_MEMBERS
};

#endif