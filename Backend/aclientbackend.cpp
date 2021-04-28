// ----------------------------------------------------------
/*!
	\class AClientBackend
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/02/2021 at 12:53:54
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "aclientbackend.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AClientBackend::AClientBackend(QObject *parent) : QObject(parent) {

}


// -----------
/*!
	\fn

	Doc.
*/

AClientBackend::~AClientBackend(void) {

}


// -----------
/*!
	\fn

	Doc.
*/

AClientBackend& AClientBackend::mInstance(void) {

	static AClientBackend oInstance;
	return oInstance;
}


// -----------
/*!
	\fn

	Doc.
*/

void AClientBackend::mInit(void) {

}

