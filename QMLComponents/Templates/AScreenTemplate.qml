// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 10/05/2021 at 08:52:14
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes


// Component
Rectangle {

	id: oRootScreenTemplate;

	Connections {

		target: ADevice;
		function onSgOrientationChanged(inOrientation) {

			if (typeof oRootScreenTemplate.mOnSgOrientationChanged === "function") {
				oRootScreenTemplate.mOnSgOrientationChanged(inOrientation);
			}
		}
	}
}
