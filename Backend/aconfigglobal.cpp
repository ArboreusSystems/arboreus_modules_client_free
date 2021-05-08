// ----------------------------------------------------------
/*!
	\class AConfigGlobal
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 08/05/2021 at 10:45:50
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "aconfigglobal.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AConfigGlobal::AConfigGlobal(QObject* parent) : QObject(parent) {}


// -----------
/*!
	\fn

	Doc.
*/

AConfigGlobal::~AConfigGlobal(void) {}


// -----------
/*!
	\fn

	Doc.
*/

const char* AConfigGlobal::mGetModuleName(void) {

	return pModuleName;
}
