// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 22/07/2021 at 17:36:15
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// AApplication paths
import "qrc:/ModulesFree/QMLComponents/Templates/Menu";
import "qrc:/ClentFree/Modules/QMLComponents/Text/";


// Component
AMenuButtonTemplate {

	property alias pLabelText: oLabel.text;
	property alias pLabelFontBold: oLabel.font.bold;
	property alias pLabelFontPixelSize: oLabel.font.pixelSize;

	id: oRoot;
	width: oApplicationMenu.width;
	height: 50;

	AText {

		id: oLabel;
		text: "NoGroupLabelText";
		maximumLineCount: 1;
		font.bold: true;
		font.pixelSize: 18;
		anchors.verticalCenter: parent.verticalCenter;
		anchors.left: parent.left;
		anchors.leftMargin: oRoot.pMargin;
		anchors.right: oRoot.right;
		anchors.rightMargin: oRoot.pMargin;
	}
}
