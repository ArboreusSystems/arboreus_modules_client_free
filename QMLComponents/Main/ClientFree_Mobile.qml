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

	property string pText: qsTr("Main.Application.Title");
	property string pColorSafeArea: "green";
	property string pColorBackground: "blue";
	property var pStatusBarStyle: 0;

	id: oApplicationWindow;
	flags: Qt.Window | Qt.MaximizeUsingFullscreenGeometryHint;
	width: AProperties.mIsDesktop() ? 400 : maximumWidth;
	height: AProperties.mIsDesktop() ? 400 : maximumHeight;
	visible: true;
	title: qsTr("Application.title");
	color: "red";

	Component.onCompleted: {

		oApplicationWindow.mSetSafeAreaInsets();
	}

	Rectangle {

		id: oApplicationWindowWrapper;
		width: parent.width;
		height: parent.height;

		Rectangle {

			id: oPaddingLeft;
			color: oApplicationWindow.pColorSafeArea;
			height: parent.height;
			anchors.top: parent.top;
			anchors.left: parent.left;
		}

		Rectangle {

			id: oPaddingRight;
			color: oApplicationWindow.pColorSafeArea;
			height: parent.height;
			anchors.top: parent.top;
			anchors.right: parent.right;
		}

		Rectangle {

			id: oPaddingTop;
			color: oApplicationWindow.pColorSafeArea;
			anchors.top: parent.top;
			anchors.left: oPaddingLeft.right;
			anchors.right: oPaddingRight.left;
		}

		Rectangle {

			id: oPaddingBottom;
			color: oApplicationWindow.pColorSafeArea;
			anchors.bottom: parent.bottom;
			anchors.left: oPaddingLeft.right;
			anchors.right: oPaddingRight.left;
		}

//		SScreenContentWrapper {

//			id: oContentWrapper;
//			anchors.top: oPaddingTop.bottom;
//			anchors.bottom: oPaddingBottom.top;
//			anchors.left: oPaddingLeft.right;
//			anchors.right: oPaddingRight.left;
//			color: SUISkin.mColorGreyDarkString();

//			Component.onCompleted: {

//				let oSafeAreaHeightOffset = oPaddingTop.height + oPaddingBottom.height;
//				oContentWrapper.height = oApplicationWindowWrapper.height - oSafeAreaHeightOffset;

//				let oSafeAreaWidthOffset = oPaddingLeft.width + oPaddingRight.height;
//				oContentWrapper.width = oApplicationWindowWrapper.width - oSafeAreaWidthOffset;

//				Qt.createQmlObject(
//					SUIHandler.mComponentScreen("SScreenContent"),
//					oContentWrapper,"oContent"
//				);

//				oApplicationWindow.mSetStatusBarStyleDefault();
//			}
//		}
	}

	function mSetSafeAreaInsets() {

		let oSafeAreaInsets = ADevice.mSafeAreaInsets();

		oPaddingTop.height = oSafeAreaInsets.Top;
		oPaddingBottom.height = oSafeAreaInsets.Bottom;
		oPaddingLeft.width = oSafeAreaInsets.Left;
		oPaddingRight.width = oSafeAreaInsets.Right;
	}

//	function mSetStatusBarStyleDefault() {

//		oApplicationWindow.pStatusBarStyle = SDEVICE.StatusBarStyle.Light;
//		SDevice.mSetStatusBarStyle(oApplicationWindow.pStatusBarStyle);
//	}
}
