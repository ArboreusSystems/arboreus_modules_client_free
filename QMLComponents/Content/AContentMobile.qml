// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 10/05/2021 at 08:27:34
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15

// Application includes
import "qrc:/ClentFree/Modules/QMLComponents/Templates";
import "qrc:/ClentFree/Modules/QMLComponents/Screens";


// Component
AScreenContentTemplate {

	id: oRoot;
	color: oApplicationWindow.pColorBackground;

	StackView {

		id: oStackView;
		width: parent.width;
		height: parent.height;
		anchors.top: parent.top;
		anchors.bottom: parent.bottom;
		anchors.left: parent.left;
		anchors.right: parent.right;

		Component.onCompleted: {

			oStackView.push(oScreenTest);
		}

		Component {id: oScreenTest; AScreenTest {}}
	}

	function mOnSgOrientationChanged(inOrientation) {

		console.log("Orientation changed. Current orienttion:",inOrientation);
	}
}
