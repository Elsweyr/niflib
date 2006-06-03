/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NITEXTKEYEXTRADATA_H_
#define _NITEXTKEYEXTRADATA_H_

#include "NiExtraData.h"

#include "gen/obj_defines.h"

/*
 * NiTextKeyExtraData
 */

class NiTextKeyExtraData;
typedef Ref<NiTextKeyExtraData> NiTextKeyExtraDataRef;

class NiTextKeyExtraData : public NI_TEXT_KEY_EXTRA_DATA_PARENT {
public:
	NiTextKeyExtraData();
	~NiTextKeyExtraData();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_TEXT_KEY_EXTRA_DATA_MEMBERS
};

#endif