// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 18/05/2021 at 22:53:37
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes
import "qrc:/ClentFree/Modules/QMLComponents/Templates";


// Component
AScreenTemplate {

	id: oRootScreenLogin;

	Text {

		id: oTestText;
		text: qsTr("ScreenLogin");
		anchors.verticalCenter: parent.verticalCenter;
		anchors.horizontalCenter: parent.horizontalCenter;
	}
}
