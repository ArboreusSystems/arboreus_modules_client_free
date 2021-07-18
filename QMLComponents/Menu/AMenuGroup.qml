// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 18/07/2021 at 18:09:16
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ModulesFree/QMLComponents/Templates/Menu";


// Component
AMenuGroupTemplate {

	id: oRoot;
	objectName: "MenuGroupSettings";
	width: oApplicationMenu.width;
	height: 50;
//	pMargin: oApplicationWindow.pMargin;
}
