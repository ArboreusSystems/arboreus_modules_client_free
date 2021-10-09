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
#include "astorages.h"

// Forwarded classes
#include <abackend.h>

// Namespace
using namespace ARB;


// -----------
/*!
	\fn

	Doc.
*/

AStorages::AStorages(QObject* parent) : AThreadTemplate<AStoragesService>(new AStoragesService, parent) {

	QObject::connect(
		this,&AStorages::sgInit,
		this->mService(),&AStoragesService::slInit
	);
	QObject::connect(
		this->mService(),&AStoragesService::sgInitiated,
		this,&AStorages::slInitiated
	);

	_A_DEBUG << "AStorage created";
}


// -----------
/*!
	\fn

	Doc.
*/

AStorages::~AStorages(void) {

	_A_DEBUG << "AStorage deleted";
}


// -----------
/*!
	\fn

	Doc.
*/

void AStorages::mInit(void) {

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

void AStorages::slInitiated(void) {

	emit sgInitiated();
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantList AStorages::mList(void) {

	QVariantList oOutput;
	return oOutput;
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantMap AStorages::mCreate(QVariantMap inProperties) {

	Q_UNUSED(inProperties)

	QVariantMap oOutput = {};
	return oOutput;
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantMap AStorages::mLogin(QString inStorageID) {

	Q_UNUSED(inStorageID)

	QVariantMap oOutput = {};
	return oOutput;
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantMap AStorages::mArchive(QString inStorageID) {

	Q_UNUSED(inStorageID)

	QVariantMap oOutput = {};
	return oOutput;
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantMap AStorages::mDelete(QString inStorageID) {

	Q_UNUSED(inStorageID)

	QVariantMap oOutput = {};
	return oOutput;
}


// -----------
/*!
	\fn

	Doc.
*/

QVariantMap AStorages::mInfo(QString inStorageID) {

	Q_UNUSED(inStorageID)

	QVariantMap oOutput = {};
	return oOutput;
}

