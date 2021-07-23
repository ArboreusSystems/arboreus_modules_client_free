// ----------------------------------------------------------
/*!
	\class AStorageService
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 23/07/2021 at 18:45:47
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "astorageservice.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AStorageService::AStorageService(QObject* parent) : AThreadServiceTemplate(parent) {

	_A_DEBUG << "AStorageService created";
}


// -----------
/*!
	\fn

	Doc.
*/

AStorageService::~AStorageService(void) {

	_A_DEBUG << "AStorageService deleted";
}


// -----------
/*!
	\fn

	Doc.
*/

void AStorageService::slInit(QString inPathStorageData) {

	Q_UNUSED(inPathStorageData);

	_A_DEBUG << "AStorageService initiated";
	emit sgInitiated();
}

