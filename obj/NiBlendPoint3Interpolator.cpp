/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "obj/NiBlendPoint3Interpolator.h"

//Definition of TYPE constant
const Type NiBlendPoint3Interpolator::TYPE("NiBlendPoint3Interpolator", &NI_BLEND_POINT3_INTERPOLATOR_PARENT::TYPE );

NiBlendPoint3Interpolator::NiBlendPoint3Interpolator() NI_BLEND_POINT3_INTERPOLATOR_CONSTRUCT {}

NiBlendPoint3Interpolator::~NiBlendPoint3Interpolator() {}

void NiBlendPoint3Interpolator::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
	NI_BLEND_POINT3_INTERPOLATOR_READ
}

void NiBlendPoint3Interpolator::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_BLEND_POINT3_INTERPOLATOR_WRITE
}

string NiBlendPoint3Interpolator::asString( bool verbose ) const {
	NI_BLEND_POINT3_INTERPOLATOR_STRING
}

void NiBlendPoint3Interpolator::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
	NI_BLEND_POINT3_INTERPOLATOR_FIXLINKS
}

const Type & NiBlendPoint3Interpolator::GetType() const {
	return TYPE;
};
