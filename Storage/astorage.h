// ----------------------------------------------------------
/*!
	\headerfile AStorage
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 23/07/2021 at 18:45:28
	\endlist
*/
// ----------------------------------------------------------

#ifndef ASTORAGE_H
#define ASTORAGE_H

// System includes

// Precompiled includes
#include <astoragepch.h>

// Application includes
#include <athreadtemplate.h>
#include <astorageservice.h>

// Constants and definitions

// Namespace
namespace ARB {

// Classes
class ABackend;

// Class definitions
class AStorage : public AThreadTemplate<AStorageService> {

	Q_OBJECT

	public:

		explicit AStorage(QObject* parent = nullptr);
		virtual ~AStorage(void);
		Q_DISABLE_COPY(AStorage)

		void mInit(void);

	signals:

		void sgInit(QString inPathStorageData);
		void sgInitiated(void);

	public slots:

		void slInitiated(void);

		QVariantList mStorages(void);

		bool mStorageCreate(QVariantMap inProperties);
		bool mStorageLogin(QString inStorageID);
		bool mStorageArchive(QString inStorageID);
		bool mStorageDelete(QString inStorageID);
		QVariantMap mStorageInfo(QString inStorageID);

	private:

		ABackend* pBackend = nullptr;
};

} // namespace ARB

#endif // ASTORAGE_H
