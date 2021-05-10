// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 08/05/2021 at 16:36:09
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes


// Component
Rectangle {

	id: oRootScreenTemaple;
	color: AColors.mTransparent();
	height: parent.height;
	width: parent.width;
	anchors.top: parent.top;
	anchors.bottom: parent.bottom;
	anchors.left: parent.left;
	anchors.right: parent.right;

	Connections {

		target: ADevice;
		function onSgOrientationChanged(inOrientation) {

			if (typeof oRoot.mOnSgOrientationChanged === "function") {
				oRoot.mOnSgOrientationChanged(inOrientation);
			}
		}
	}
}
