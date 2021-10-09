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

#ifndef ASTORAGES_H
#define ASTORAGES_H

// System includes

// Precompiled includes
#include <astoragepch.h>

// Application includes
#include <athreadtemplate.h>
#include <astoragesservice.h>
#include <astoragedatamodels.h>

// Constants and definitions

// Namespace
namespace ARB {

// Classes
class ABackend;

// Class definitions
class AStorages : public AThreadTemplate<AStoragesService> {

	Q_OBJECT

	public:

		explicit AStorages(QObject* parent = nullptr);
		virtual ~AStorages(void);
		Q_DISABLE_COPY(AStorages)

		void mInit(void);

	signals:

		void sgInit(QString inPathStorageData);
		void sgInitiated(void);

	public slots:

		void slInitiated(void);

		QVariantList mList(void);

		QVariantMap mCreate(QVariantMap inProperties);
		QVariantMap mLogin(QString inStorageID);
		QVariantMap mArchive(QString inStorageID);
		QVariantMap mDelete(QString inStorageID);
		QVariantMap mInfo(QString inStorageID);

	private:

		ABackend* pBackend = nullptr;
};

} // namespace ARB

#endif // ASTORAGES_H
