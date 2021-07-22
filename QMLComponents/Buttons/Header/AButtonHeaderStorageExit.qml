// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 22/07/2021 at 13:13:42
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ClentFree/Modules/QMLComponents/Templates";


// Component
AButtonHeaderTemplate {

	id: oRoot;
	text: "S";
	objectName: "ButtonStorageExit";

	onClicked: {

		oStackView.pop();
	}
}
