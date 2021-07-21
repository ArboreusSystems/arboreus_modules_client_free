// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 21/07/2021 at 12:29:02
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes


// Component
Rectangle {

	property alias pLabelText: oLabel.text;

	id: oRoot;
	width: parent.width;
	height: 50;
	color: AColors.mGetString("Purple");

	Text {

		id: oLabel;
		anchors.fill: parent;
		verticalAlignment: Text.AlignVCenter;
		horizontalAlignment: Text.AlignHCenter;
		color: AColors.mGetString("White");
		text: "NoDefinedLabelText";
	}
}
