// ----------------------------------------------------------
/*!
	\class AConfigMobile
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 07/05/2021 at 19:46:20
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "aconfigmobile.h"

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AConfigMobile::AConfigMobile(QObject* parent) : QObject(parent) {}


// -----------
/*!
	\fn

	Doc.
*/

AConfigMobile::~AConfigMobile(void) {}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mUIWidth(void) {

	return pUIWidth;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mUIHeight(void) {

	return pUIHeight;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mDesktopUIWidth(void) {

	return pDesktopUIWidth;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mDesktopUIHeight(void) {

	return pDesktopUIHeight;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mFontSizeHeader(void) {

	return pFontSizeHeader;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mFontSizeRegular(void) {

	return pFontSizeRegular;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mFontSizeTextInput(void) {

	return pFontSizeTextInput;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mBorderSize(void) {

	return pBorderSize;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mRadius(void) {

	return pRadius;
}


// -----------
/*!
	\fn

	Doc.
*/

int AConfigMobile::mElementHeight(void) {

	return pElementHeight;
}


