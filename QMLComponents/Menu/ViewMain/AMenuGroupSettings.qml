// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 18/07/2021 at 18:06:31
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ClentFree/Modules/QMLComponents/Menu";


// Component
AMenuGroup {

	id: oRoot;
	pLabelText: "Settings";

	function mOnClicked() {

		oApplicationMenuLoader.sourceComponent = oMenuViewSettings;
	}
}
