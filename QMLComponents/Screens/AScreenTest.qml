// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 10/05/2021 at 08:35:41
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes
import "qrc:/ClentFree/Modules/QMLComponents/Templates";


// Component
AScreenTemplate {

	id: oRootScreenTemplate;

	Text {

		id: oTestText;
		text: qsTr("Test");
		anchors.verticalCenter: parent.verticalCenter;
		anchors.horizontalCenter: parent.horizontalCenter;
	}
}
