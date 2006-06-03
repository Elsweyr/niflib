/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for licence. */

#include "obj/NiBSBoneLODController.h"

//Definition of TYPE constant
const Type NiBSBoneLODController::TYPE("NiBSBoneLODController", &NI_B_S_BONE_L_O_D_CONTROLLER_PARENT::TYPE );

NiBSBoneLODController::NiBSBoneLODController() NI_B_S_BONE_L_O_D_CONTROLLER_CONSTRUCT {}

NiBSBoneLODController::~NiBSBoneLODController() {}

void NiBSBoneLODController::Read( istream& in, list<uint> & link_stack, unsigned int version ) {
	NI_B_S_BONE_L_O_D_CONTROLLER_READ
}

void NiBSBoneLODController::Write( ostream& out, map<NiObjectRef,uint> link_map, unsigned int version ) const {
	NI_B_S_BONE_L_O_D_CONTROLLER_WRITE
}

string NiBSBoneLODController::asString( bool verbose ) const {
	NI_B_S_BONE_L_O_D_CONTROLLER_STRING
}

void NiBSBoneLODController::FixLinks( const vector<NiObjectRef> & objects, list<uint> & link_stack, unsigned int version ) {
	NI_B_S_BONE_L_O_D_CONTROLLER_FIXLINKS
}

const Type & NiBSBoneLODController::GetType() const {
	return TYPE;
};
