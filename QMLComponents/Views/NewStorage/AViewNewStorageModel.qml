// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 21/07/2021 at 19:59:00
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15

// Application includes


// Component
ListView {

	id: oRoot;
	spacing: 5;

	Component.onCompleted: {

		oRoot.mCreateModelElement("Test Type");
	}

	function mCreateModelElement(inType) {

		var oComponent = Qt.createComponent(
			"qrc:/ClentFree/Modules/QMLComponents/Delegates/AModelElementDelegate.qml"
		);
		var oObject = oComponent.createObject(oRoot, {pLabelText: inType});
		if (oObject === null) {
			console.error("Creating ModelElementDelegate failed");
		}
	}
}
