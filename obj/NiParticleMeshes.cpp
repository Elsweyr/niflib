/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "obj/NiParticleMeshes.h"

//Definition of TYPE constant
const Type NiParticleMeshes::TYPE("NiParticleMeshes", &NI_PARTICLE_MESHES_PARENT::TYPE );

NiParticleMeshes::NiParticleMeshes() NI_PARTICLE_MESHES_CONSTRUCT {}

NiParticleMeshes::~NiParticleMeshes() {}

void NiParticleMeshes::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
	NI_PARTICLE_MESHES_READ
}

void NiParticleMeshes::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_PARTICLE_MESHES_WRITE
}

string NiParticleMeshes::asString( bool verbose ) const {
	NI_PARTICLE_MESHES_STRING
}

void NiParticleMeshes::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
	NI_PARTICLE_MESHES_FIXLINKS
}

const Type & NiParticleMeshes::GetType() const {
	return TYPE;
};
