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

	_A_DEBUG << "AClientBackend created";
}


// -----------
/*!
	\fn

	Doc.
*/

AClientBackend::~AClientBackend(void) {

	_A_DEBUG << "AClientBackend deleted";
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

void AClientBackend::mInit(
	QGuiApplication* inGuiApplication,
	QQmlApplicationEngine* inEngine,
	QQmlContext* inRootContext
) {

	pGuiApplication = inGuiApplication;
	pEngine = inEngine;
	pRootContext = inRootContext;

	this->mInitLogger();

	_A_DEBUG << "AClientBackend initiated";
}


// -----------
/*!
	\fn

	Doc.
*/

void AClientBackend::mInitLogger(void) {

	pLogger = new ALogger(pEngine);
	pRootContext->setContextProperty("ALogger",pLogger);
}
