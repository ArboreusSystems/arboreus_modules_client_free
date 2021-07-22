// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 11/07/2021 at 14:20:51
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

		AButtonHeaderBackMenu {

			id: oButtonBack;
		}
	}

	pRightBlock: AHeaderRightBlockTemplate {

		AButtonHeaderHumburger {

			id: oButtonHamburger;
		}
	}

	function mSetBackButton(inVisisble,inText,inBackViewComponent) {

		oButtonBack.pBackViewComponent = inBackViewComponent;
		oButtonBack.pLabelText = inText;
		oButtonBack.visible = inVisisble;
	}
}
