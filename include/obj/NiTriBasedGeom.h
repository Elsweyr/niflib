/* Copyright (c) 2006, NIF File Format Library and Tools
All rights reserved.  Please see niflib.h for license. */

//-----------------------------------NOTICE----------------------------------//
// Some of this file is automatically filled in by a Python script.  Only    //
// add custom code in the designated areas or it will be overwritten during  //
// the next update.                                                          //
//-----------------------------------NOTICE----------------------------------//

#ifndef _NITRIBASEDGEOM_H_
#define _NITRIBASEDGEOM_H_

//--BEGIN FILE HEAD CUSTOM CODE--//
#include "BodyPartList.h"
//--END CUSTOM CODE--//

#include "NiGeometry.h"
namespace Niflib {

class NiTriBasedGeom;
typedef Ref<NiTriBasedGeom> NiTriBasedGeomRef;

/*! Describes a mesh, built from triangles. */
class NiTriBasedGeom : public NiGeometry {
public:
	/*! Constructor */
	NIFLIB_API NiTriBasedGeom();

	/*! Destructor */
	NIFLIB_API virtual ~NiTriBasedGeom();

	/*!
	 * A constant value which uniquly identifies objects of this type.
	 */
	NIFLIB_API static const Type TYPE;

	/*!
	 * A factory function used during file reading to create an instance of this type of object.
	 * \return A pointer to a newly allocated instance of this type of object.
	 */
	NIFLIB_API static NiObject * Create();

	/*!
	 * Summarizes the information contained in this object in English.
	 * \param[in] verbose Determines whether or not detailed information about large areas of data will be printed out.
	 * \return A string containing a summary of the information within the object in English.  This is the function that Niflyze calls to generate its analysis, so the output is the same.
	 */
	NIFLIB_API virtual string asString( bool verbose = false ) const;

	/*!
	 * Used to determine the type of a particular instance of this object.
	 * \return The type constant for the actual type of the object.
	 */
	NIFLIB_API virtual const Type & GetType() const;

	//--BEGIN MISC CUSTOM CODE--//

	/*!
	 * This generates skin data for hardware acceleration.  Specifically, it creates a NiSkinPartition object based on the current skin weights.  This splits up the mesh into smaller parts that are affected by fewer bones so that they can be processed by 3D accelerator hardware.
	 * \param[in] max_bones_per_partition The maximum number of bones that can affect a skin partition, i.e. a sub-mesh generated by chopping up the original mesh.  Proper value is game dependent.
	 * \param[in] max_bones_per_vertex The maximum number of bones that can affect any one vertex.  Vertices affected by more bones than this will have the bone witht he smallest affect removed and the remaining bones will be normalized.
	 */
	NIFLIB_API void GenHardwareSkinInfo( int max_bones_per_partition = 4, int max_bones_per_vertex = 4, bool bStrippify = true, int* face2PartMap = NULL );

	/*!
	 * This generates dismember skin data for hardware acceleration.  Specifically, it creates a NiDismemberSkinPartition object based on the current skin weights.  This splits up the mesh into smaller parts that are affected by fewer bones so that they can be processed by 3D accelerator hardware.
	 * \param[in] dismember_groups A collection of pairs of body part list - face indexes that splits the mesh into submeshes that corresponds to various body parts
	 */
	NIFLIB_API void GenHardwareDismemberSkinInfo( vector< pair <BodyPartList, vector < int> > > dismember_groups);

	/*!
	 * This clears any hardware acceleration skin data that was previously created.
	 */
	NIFLIB_API void ClearHardareSkinInfo();

	/*!
	 * Generate or update a NiStringExtraData object with precalculated
	 * tangent and binormal data (Oblivion specific)
	 * \param[in] method Calculation method. [0 - Nifskope; 1 - Obsidian]
	 */
	NIFLIB_API void UpdateTangentSpace(int method = 0);

	//--END CUSTOM CODE--//
public:
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void Read( istream& in, list<unsigned int> & link_stack, const NifInfo & info );
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void Write( ostream& out, const map<NiObjectRef,unsigned int> & link_map, list<NiObject *> & missing_link_stack, const NifInfo & info ) const;
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual void FixLinks( const map<unsigned int,NiObjectRef> & objects, list<unsigned int> & link_stack, list<NiObjectRef> & missing_link_stack, const NifInfo & info );
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual list<NiObjectRef> GetRefs() const;
	/*! NIFLIB_HIDDEN function.  For internal use only. */
	NIFLIB_HIDDEN virtual list<NiObject *> GetPtrs() const;
};

//--BEGIN FILE FOOT CUSTOM CODE--//
//--END CUSTOM CODE--//

} //End Niflib namespace
#endif
