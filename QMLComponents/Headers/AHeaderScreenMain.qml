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
import "qrc:/ClentFree/Modules/QMLComponents/Buttons/Header";


// Component
AHeaderTemplate {

	property alias pLabelText: oLabel.text;

	id: oRoot;
	color: AColors.mGetString("GreyDarkest");
	pMargin: 10;

	pLeftBlock: AHeaderLeftBlockTemplate {

		AHeaderLabelTemplate {

			id: oLabel;
			text: "Storages";
		}
	}

	pRightBlock: AHeaderRightBlockTemplate {

		AButtonHeaderHumburger {

			id: oButtonHamburger;
		}
	}
}
