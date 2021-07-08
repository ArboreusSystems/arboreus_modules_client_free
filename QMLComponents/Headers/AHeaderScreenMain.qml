// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 08/07/2021 at 13:10:12
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ModulesFree/QMLComponents/Templates/Headers";


// Component
AHeaderTemplate {

	id: oRoot;
	color: AColors.mGetString("GreyDarkest");
	width: parent.width;
	height: 75;
	pMargin: 10;

	pLeftBlock: AHeaderLeftBlockTemplate {

		AHeaderLabelTemplate {

			text: "Header text";
		}

//		AHeaderButtonTemplate {

//			text: "1";
//		}

//		AHeaderButtonTemplate {

//			text: "2";
//		}
	}

	pRightBlock: AHeaderRightBlockTemplate {

		AHeaderButtonTemplate {

			text: "3";
		}

		AHeaderButtonTemplate {

			text: "4";
		}
	}
}
