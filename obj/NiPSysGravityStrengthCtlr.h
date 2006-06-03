/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIPSYSGRAVITYSTRENGTHCTLR_H_
#define _NIPSYSGRAVITYSTRENGTHCTLR_H_

#include "APSysCtlr.h"

#include "gen/obj_defines.h"

/*
 * NiPSysGravityStrengthCtlr
 */

class NiPSysGravityStrengthCtlr;
typedef Ref<NiPSysGravityStrengthCtlr> NiPSysGravityStrengthCtlrRef;

class NiPSysGravityStrengthCtlr : public NI_P_SYS_GRAVITY_STRENGTH_CTLR_PARENT {
public:
	NiPSysGravityStrengthCtlr();
	~NiPSysGravityStrengthCtlr();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_P_SYS_GRAVITY_STRENGTH_CTLR_MEMBERS
};

#endif