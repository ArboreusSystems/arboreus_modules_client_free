// ----------------------------------------------------------
/*!
	\headerfile AConfigGlobal
	\title
	\brief Template file wizard/classes/cpp/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 08/05/2021 at 10:45:50
	\endlist
*/
// ----------------------------------------------------------

#ifndef ACONFIGGLOBAL_H
#define ACONFIGGLOBAL_H

// System includes
#include <QObject>

// Application includes

// Constants and definitions

// Namespace
namespace ARB {

// Class definitions
class AConfigGlobal : public QObject {

	Q_OBJECT

	public:

		explicit AConfigGlobal(QObject *parent = nullptr);
		virtual ~AConfigGlobal(void);

		const char* mGetModuleName(void);

	private:

		const char* pModuleName = "Arboreus";
};

} // namespace ARB

#endif // ACONFIGGLOBAL_H
