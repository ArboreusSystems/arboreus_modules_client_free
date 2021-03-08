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

	A_CONSOLE_MESSAGE_DEBUG("AClientBackend created");
}


// -----------
/*!
	\fn

	Doc.
*/

AClientBackend::~AClientBackend(void) {

	this->mDeleteThreads();
	A_CONSOLE_MESSAGE_DEBUG("AClientBackend deleted");
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

	this->mInitThreads();
	this->mInitLogger();
}


// -----------
/*!
	\fn

	Doc.
*/


void AClientBackend::mInitThreads(void) {

	pThreadLowest = new AThreadTemplate(this);
	pThreadLowest->mStart(QThread::Priority::LowestPriority);

	pThreadLow = new AThreadTemplate(this);
	pThreadLow->mStart(QThread::Priority::LowPriority);

	pThreadNormal = new AThreadTemplate(this);
	pThreadNormal->mStart(QThread::Priority::NormalPriority);

	pThreadHigh = new AThreadTemplate(this);
	pThreadHigh->mStart(QThread::Priority::HighPriority);

	pThreadHighest = new AThreadTemplate(this);
	pThreadHighest->mStart(QThread::Priority::HighestPriority);
}


// -----------
/*!
	\fn

	Doc.
*/

void AClientBackend::mDeleteThreads(void) {

	pThreadHighest->mQuit();
	pThreadHigh->mQuit();
	pThreadNormal->mQuit();
	pThreadLow->mQuit();
	pThreadLowest->mQuit();
}


// -----------
/*!
	\fn

	Doc.
*/


void AClientBackend::mInitLogger(void) {

	if (pLogger) {
		pRootContext->setContextProperty("ALogger",pLogger);
		pLogger->mInitWithThread(pThreadLow);
	}
}
