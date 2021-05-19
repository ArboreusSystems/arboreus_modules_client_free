// ----------------------------------------------------------
/*!
	\headerfile
	\title
	\brief Template file files/cppheader/file.h

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 17/05/2021 at 19:08:58
	\endlist
*/
// ----------------------------------------------------------
#ifndef ABACKENDCONFIG_H
#define ABACKENDCONFIG_H

// System includes
#include <QObject>

// Application includes

// Constants and defintions

// Namespace
namespace ARB {

class ABackendConfig {

	public:

		virtual const char* ABackendConfig_ModuleName(void) = 0;
};

} // namespace ARB

Q_DECLARE_INTERFACE(ARB::ABackendConfig,"Arboreus.ABackendConfig/1.0")

#endif // ABACKENDCONFIG_H
