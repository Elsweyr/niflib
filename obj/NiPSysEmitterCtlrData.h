/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSEMITTERCTLRDATA_H_
#define _NIPSYSEMITTERCTLRDATA_H_

#include "NiObject.h"
#include "gen/KeyGroup.h"

#include "gen/obj_defines.h"

/*
 * NiPSysEmitterCtlrData
 */

class NiPSysEmitterCtlrData;
typedef Ref<NiPSysEmitterCtlrData> NiPSysEmitterCtlrDataRef;

class NiPSysEmitterCtlrData : public NI_P_SYS_EMITTER_CTLR_DATA_PARENT {
public:
	NiPSysEmitterCtlrData();
	~NiPSysEmitterCtlrData();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_P_SYS_EMITTER_CTLR_DATA_MEMBERS
};

#endif