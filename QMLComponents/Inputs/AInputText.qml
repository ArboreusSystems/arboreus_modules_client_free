// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 21/07/2021 at 19:38:03
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
//import "qrc:/ClientFreeMobile/QMLComponents/Templates";
//import "qrc:/ClentFree/Modules/QMLComponents/Headers";
import "qrc:/ModulesFree/QMLComponents/Templates/Inputs";


// Component
AInputTextTemplate {

	id: oRoot;
	pSizeBorder: 2;
	pSizeRadius: 5;
	pPlaceholder: "Placeholder";
	pPaddingLeft: 10;
	pPaddingRight: 10;
	pFontFamily: AFonts.mFontFamily();
}
