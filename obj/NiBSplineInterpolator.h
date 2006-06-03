/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#ifndef _NIBSPLINEINTERPOLATOR_H_
#define _NIBSPLINEINTERPOLATOR_H_

#include "NiInterpolator.h"

#include "gen/obj_defines.h"

/*
 * NiBSplineInterpolator
 */

class NiBSplineInterpolator;
typedef Ref<NiBSplineInterpolator> NiBSplineInterpolatorRef;

class NiBSplineInterpolator : public NI_B_SPLINE_INTERPOLATOR_PARENT {
public:
	NiBSplineInterpolator();
	~NiBSplineInterpolator();
	//Run-Time Type Information
	static const Type TYPE;
	virtual void Read( istream& in, list<uint> & link_stack, unsigned int version );
	virtual void Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const;
	virtual string asString( bool verbose = false ) const;
	virtual void FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version );
	virtual const Type & GetType() const;
protected:
	NI_B_SPLINE_INTERPOLATOR_MEMBERS
};

#endif