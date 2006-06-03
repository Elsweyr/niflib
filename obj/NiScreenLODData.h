/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NISCREENLODDATA_H_
#define _NISCREENLODDATA_H_

#include "NiObject.h"

#include "gen/obj_defines.h"

/*
 * NiScreenLODData
 */

class NiScreenLODData;
typedef Ref<NiScreenLODData> NiScreenLODDataRef;

class NiScreenLODData : public NI_SCREEN_L_O_D_DATA_PARENT {
public:
	NiScreenLODData();
	~NiScreenLODData();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_SCREEN_L_O_D_DATA_MEMBERS
};

#endif