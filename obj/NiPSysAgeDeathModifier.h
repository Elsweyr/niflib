/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSAGEDEATHMODIFIER_H_
#define _NIPSYSAGEDEATHMODIFIER_H_

#include "NiPSysModifier.h"
#include "Ref.h"
#include "obj/NiPSysSpawnModifier.h"

#include "gen/obj_defines.h"

/*
 * NiPSysAgeDeathModifier
 */

class NiPSysAgeDeathModifier;
typedef Ref<NiPSysAgeDeathModifier> NiPSysAgeDeathModifierRef;

class NiPSysAgeDeathModifier : public NI_P_SYS_AGE_DEATH_MODIFIER_PARENT {
public:
	NiPSysAgeDeathModifier();
	~NiPSysAgeDeathModifier();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_P_SYS_AGE_DEATH_MODIFIER_MEMBERS
};

#endif