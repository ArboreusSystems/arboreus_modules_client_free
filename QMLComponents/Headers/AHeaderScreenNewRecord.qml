// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 22/07/2021 at 14:47:30
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15

// Application includes

// Application paths
import "qrc:/ModulesFree/QMLComponents/Templates/Headers";
import "qrc:/ClentFree/Modules/QMLComponents/Buttons/Header";


// Component
AHeaderTemplate {

	id: oRoot;
	color: AColors.mGetString("GreyDarkest");
	pMargin: 10;

	pLeftBlock: AHeaderLeftBlockTemplate {

		AButtonHeaderCancel {

			id: oButtonCancel;
			onClicked: {

				oStackView.pop();
			}
		}
	}

	pRightBlock: AHeaderRightBlockTemplate {

		AHeaderLabelTemplate {

			id: oLabel;
			text: "Create new Record";
		}
	}
}
