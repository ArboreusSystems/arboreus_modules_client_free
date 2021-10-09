// ----------------------------------------------------------
/*!
	\headerfile
	\title
	\brief Template file files/cppheader/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 09/10/2021 at 11:33:45
	\endlist
*/
// ----------------------------------------------------------
#ifndef ASTORAGEDATAMODELS_H
#define ASTORAGEDATAMODELS_H

// System includes

// Application includes
#include <astoragepch.h>

// Constants and defintions
#define _A_ENUMS_STORAGE_REPLY_STATUS ARB::AEnumsStorageReplyStatus::StorageReplyStatus


// Namespace
namespace ARB {

class AEnumsStorageReplyStatus: public QObject {

	Q_OBJECT

	public:

		enum class StorageReplyStatus: int {

			Error = 0,
			Ok = 1
		};
		Q_ENUM(StorageReplyStatus)
};

class AStorageReply {

	public:

		_A_ENUMS_STORAGE_REPLY_STATUS Status = _A_ENUMS_STORAGE_REPLY_STATUS::Error;
		QVariant Data = 0;

		QVariantMap mToVariantMap(void) {

			QVariantMap oOutput = {};
			oOutput.insert("Status",QVariant::fromValue(this->Status));
			oOutput.insert("Data",Data);
			return oOutput;
		}
};

class AStorageProperties {

	public:

		QString Name = "NoStorageName";
		QString Description = "NoStorageDescription";
		bool Encrypted = false;
		QVariantList Model = {};

		QVariantMap mToVariantMap(void) {

			QVariantMap oOutput = {};
			oOutput.insert("Name",Name);
			oOutput.insert("Description",Description);
			oOutput.insert("Encrypted",Encrypted);
			oOutput.insert("Model",Model);
			return oOutput;
		}

		void mFromVariantMap(QVariantMap inProperties) {


		}
};

} // namespace ARB

#endif // ASTORAGEDATAMODELS_H
