// ----------------------------------------------------------
/*!
	\class AStorage
	\title
	\brief Template file classes/cpp/file.cpp

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 23/07/2021 at 18:45:28
	\endlist
*/
// ----------------------------------------------------------

// Class header
#include "astorage.h"

// Forwarded classes
#include <abackend.h>

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AStorage::AStorage(QObject* parent) : AThreadTemplate<AStorageService>(new AStorageService, parent) {

	QObject::connect(
		this,&AStorage::sgInit,
		this->mService(),&AStorageService::slInit
	);
	QObject::connect(
		this->mService(),&AStorageService::sgInitiated,
		this,&AStorage::slInitiated
	);

	_A_DEBUG << "AStorage created";
}


// -----------
/*!
	\fn

	Doc.
*/

AStorage::~AStorage(void) {

	_A_DEBUG << "AStorage deleted";
}


// -----------
/*!
	\fn

	Doc.
*/

void AStorage::mInit(void) {

	pBackend = &ABackend::mInstance();
	this->start(QThread::Priority::NormalPriority);

	QString oPathStorageData = pBackend->pProperties->mGetPathDataApplication() + "/Storage";
	if (ADir::mEnsure(oPathStorageData)) {
		_A_DEBUG << "Ensured path for storage:" << oPathStorageData;
		emit sgInit(oPathStorageData);
	} else {
		_A_CRITICAL << "Failed to ensure path for storage:" << oPathStorageData;
	}

	_A_DEBUG << "AStorage initiated";
}


// -----------
/*!
	\fn

	Doc.
*/

void AStorage::slInitiated(void) {

	emit sgInitiated();
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantList AStorage::mStorages(void) {

	QVariantList oOutput;
	return oOutput;
}


// -----------
/*!
	\fn

	Doc.
*/

bool AStorage::mStorageCreate(QVariantMap inProperties) {

	Q_UNUSED(inProperties)

	return true;
}


// -----------
/*!
	\fn

	Doc.
*/

bool AStorage::mStorageLogin(QString inStorageID) {

	Q_UNUSED(inStorageID)

	return true;
}


// -----------
/*!
	\fn

	Doc.
*/

bool AStorage::mStorageArchive(QString inStorageID) {

	Q_UNUSED(inStorageID)

	return true;
}


// -----------
/*!
	\fn

	Doc.
*/

bool AStorage::mStorageDelete(QString inStorageID) {

	Q_UNUSED(inStorageID)

	return true;
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantMap AStorage::mStorageInfo(QString inStorageID) {

	Q_UNUSED(inStorageID)

	QVariantMap oOutput;
	return oOutput;
}

