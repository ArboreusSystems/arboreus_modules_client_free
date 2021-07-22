// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 22/07/2021 at 17:34:25
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// AApplication paths
import "qrc:/ClentFree/Modules/QMLComponents/Menu/";


// Component
AMenuButton {

	id: oRoot;
	objectName: "MenuButtonExit";

	pLabelText: "Exit";

	function mOnClicked() {

		AApplication.mExit();
	}
}
