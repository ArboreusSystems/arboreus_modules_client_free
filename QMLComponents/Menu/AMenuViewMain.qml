// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 18/07/2021 at 15:51:56
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ClentFree/Modules/QMLComponents/Menu/ViewMain";


// Component
AMenuView {

	id: oRoot;
	spacing: 5;

	AMenuGroupSettings {id: oMenuGroupSettings;}

//	Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
//	Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
//	Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
//	Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
//	Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}
//	Rectangle {	width: parent.width; height: 50; color: AColors.mGetString("Green");}

	Component.onCompleted: {

		oHeaderScreenMenu.mSetBackButton(false,"",null);
	}
}
