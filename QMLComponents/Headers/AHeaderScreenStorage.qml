// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 11/07/2021 at 16:32:00
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ModulesFree/QMLComponents/Templates/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Buttons"


// Component
AHeaderTemplate {

	property alias pLabelText: oLabel.text;

	id: oRoot;
	color: AColors.mGetString("GreyDarkest");
	pMargin: 10;

	pLeftBlock: AHeaderLeftBlockTemplate {

		AButtonStorageMenu {

			id: oButtonStorageMenu;
			pHeader: oRoot;
		}

		AHeaderLabelTemplate {

			id: oLabel;
			text: "No StorageName";
		}
	}

	pRightBlock: AHeaderRightBlockTemplate {

		AButtonHamburger {

			id: oButtonHamburger;
		}
	}

	Rectangle {

		id: oStorageMenu;
		width: parent.width;
		height: 50;
		color: AColors.mGetString("SaladDark");
		visible: false;
		anchors.top: oRoot.bottom;
		anchors.left: oRoot.left;
		anchors.right: oRoot.right;

		Row {

			id: oStorageMenuContent;
			height: parent.height;
			anchors.left: parent.left;

			AButtonStorageExit {

				id: oButtonStorageExit;
			}
		}
	}

	function mShowStorageMenu() {

		if (oStorageMenu.visible) {
			oStorageMenu.visible = false;
		} else {
			oStorageMenu.visible = true;
		}
	}
}
