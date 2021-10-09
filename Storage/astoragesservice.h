// ----------------------------------------------------------
/*!
	\headerfile AStorageService
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 23/07/2021 at 18:45:47
	\endlist
*/
// ----------------------------------------------------------

#ifndef ASTORAGESSERVICE_H
#define ASTORAGESSERVICE_H

// System includes

// Precompiled includes
#include <astoragepch.h>

// Application includes
#include <aloggerglobal.h>
#include <athreadservicetemplate.h>

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class AStoragesService : public AThreadServiceTemplate {

	Q_OBJECT

	public:

		explicit AStoragesService(QObject* parent = nullptr);
		virtual ~AStoragesService(void);

	public slots:

		void slInit(QString inPathStorageData);

	signals:

		void sgInitiated(void);

	private:

		QString pPathStorageData = QString("NoPathStorageData");
};

} // namespace ARB

#endif // ASTORAGESSERVICE_H
