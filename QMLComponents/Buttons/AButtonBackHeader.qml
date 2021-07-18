// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 18/07/2021 at 16:30:53
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ModulesFree/QMLComponents/Templates/Buttons";

// Component
AButtonBackHeaderTemplate {

	property Item pBackViewComponent: undefined;

	id: oRoot;
	objectName: "MenuBackButton";

	onClicked: {

		if (oRoot.pBackViewComponent) {
			oApplicationMenuLoader.sourceComponent = oRoot.pBackViewComponent;
		} else {
			console.error("No defined back view item");
		}
	}
}
