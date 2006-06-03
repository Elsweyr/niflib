/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _BHKCOLLISIONOBJECT_H_
#define _BHKCOLLISIONOBJECT_H_

#include "NiCollisionObject.h"

#include "gen/obj_defines.h"

/*
 * bhkCollisionObject
 */

class bhkCollisionObject;
typedef Ref<bhkCollisionObject> bhkCollisionObjectRef;

class bhkCollisionObject : public BHK_COLLISION_OBJECT_PARENT {
public:
	bhkCollisionObject();
	~bhkCollisionObject();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	BHK_COLLISION_OBJECT_MEMBERS
};

#endif