// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 10/07/2021 at 13:10:38
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ModulesFree/QMLComponents/Templates/Buttons";


// Component
AButtonTemplate {

	id: oRoot;
	height: parent.height * 0.63;
	width: oRoot.height;
	anchors.verticalCenter: parent.verticalCenter;

	background: Rectangle {

		id: oBackground;
		color: parent.down ? AColors.mGetString("SaladDark") : AColors.mTransparent();
		anchors.fill: parent;
	}
}
