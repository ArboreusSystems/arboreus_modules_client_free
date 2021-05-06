// ----------------------------------------------------------
/*!
	\qmltype
	\brief

	\list
	\li @notice Template file classes/file.h
	\li @copyright Arboreus (http://arboreus.systems)
	\li @author Alexandr Kirilov (http://alexandr.kirilov.me)
	\li @created 28/04/2021 at 19:14:41
	\endlist
*/
// ----------------------------------------------------------

// System includes
import QtQuick 2.15
import QtQuick.Controls 2.15

// Application includes


// Application
ApplicationWindow {

	id: oApplicationWindow;
	visible: true;
	title: qsTr("Application.title");
	color: "red";

	Connections {

		target: ABackend;
		function onSgInitiated() {

			console.debug("Iskey1:",ASettings.mIsKey("test"));

			var oValue = ASettings.mGet("test");
			console.log("oValue1.Status:",oValue.Status);
			console.log("oValue1.Data:",oValue.Data);

			console.debug("Iskey2:",ASettings.mIsKey("test"));

			ASettings.mUpdate("test",12345);
			oValue = ASettings.mGet("test");
			console.log("oValue2.Status:",oValue.Status);
			console.log("oValue2.Data:",oValue.Data);

			console.debug("Iskey3:",ASettings.mIsKey("test"));

			oValue = ASettings.mGet("test");
			console.log("oValue3.Status:",oValue.Status);
			console.log("oValue3.Data:",oValue.Data);
		}
	}

//	Connections {

//		target: ASettings;
//		function onSgUpdated(inKey,inValue) {

//			if (inKey === "test") {

//				console.log("Value for key 'test':",inValue);
//			}
//		}
//	}
}
