/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSMESHUPDATEMODIFIER_H_
#define _NIPSYSMESHUPDATEMODIFIER_H_

#include "NiPSysModifier.h"
#include "Ref.h"
#include "obj/NiNode.h"

#include "gen/obj_defines.h"

/*
 * NiPSysMeshUpdateModifier
 */

class NiPSysMeshUpdateModifier;
typedef Ref<NiPSysMeshUpdateModifier> NiPSysMeshUpdateModifierRef;

class NiPSysMeshUpdateModifier : public NI_P_SYS_MESH_UPDATE_MODIFIER_PARENT {
public:
	NiPSysMeshUpdateModifier();
	~NiPSysMeshUpdateModifier();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_P_SYS_MESH_UPDATE_MODIFIER_MEMBERS
};

#endif