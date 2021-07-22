// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 22/07/2021 at 13:25:13
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

	id: oRoot;
	objectName: "HeaderBackScreenButton";
	onClicked: {

		console.log("2")
		oStackView.pop();
	}
}
